// Defining variable to later set the device object
var device;

// Executed once the DOM gets loaded
document.addEventListener("DOMContentLoaded", function () {
    if ('bluetooth' in navigator)
    {
        bluetoothAvaiable();
    }
    else{
        bluetoothUnavaiable(); 
    }
});


function bluetoothAvaiable() {

    // Obteniendo botones de eventos 
    var botonArriba = document.getElementById("botonArriba");
    var botonAbajo = document.getElementById("botonAbajo");
    var botonDerecha = document.getElementById("botonDerecha");
    var botonIzquierda = document.getElementById("botonIzquierda");
    var cambiarModo = document.getElementById("cambiarModo");
    
    // Executing main functions
    botonArriba.addEventListener("onmousedown", function () {
        enviarComandoBluetooth('F');
    });

    botonAbajo.addEventListener("onmousedown", function () {
        enviarComandoBluetooth('B');
    });


    botonDerecha.addEventListener("onmousedown", function () {
        enviarComandoBluetooth('R');
    });

    botonIzquierda.addEventListener("onmousedown", function () {
        enviarComandoBluetooth('L');
    });

    // Stopping the movement 

    botonArriba.addEventListener("onmouseup", function () {
        enviarComandoBluetooth('S');
    });

    botonAbajo.addEventListener("onmouseup", function () {
        enviarComandoBluetooth('S');
    });


    botonDerecha.addEventListener("onmouseup", function () {
        enviarComandoBluetooth('S');
    });

    botonIzquierda.addEventListener("onmouseup", function () {
        enviarComandoBluetooth('S');
    });

    // Boton para cambiar el modo 
    cambiarModo.addEventListener("click", function () {
        enviarComandoBluetooth('l');
    });

}

function enviarComandoBluetooth(value){
    // Sending request to server which will manage the petition
    fetch(`/sendCommand/${value}`, 
            {
                method: "post"
            }
            )
        .then(response => {
          if (!response.ok) {
            throw new Error('Network response was not ok');
          }
        })
        .catch(error => {
          console.error('Error:', error);
        });
}

function bluetoothUnavaiable() {
    alert("Tu navegador no soporta bluetooth o no lo tiene activado")
}