
document.addEventListener("DOMContentLoaded", function () {
    var botonArriba = document.getElementById("botonArriba");
    var botonAbajo = document.getElementById("botonAbajo");
    var botonDerecha = document.getElementById("botonDerecha");
    var botonIzquierda = document.getElementById("botonIzquierda");
    var botonGirarIzquierda=document.getElementById("botonGirarIzquierda");
    var botonGirarDerecha=document.getElementById("botonGirarDerecha");
    

    botonArriba.addEventListener("click", function () {
        enviarComandoBluetooth("instruccion para el boton");
    });

    botonAbajo.addEventListener("click", function () {
        enviarComandoBluetooth("instruccion para el boton");
    });


    botonDerecha.addEventListener("click", function () {
        enviarComandoBluetooth("instruccion para el boton");
    });

    botonIzquierda.addEventListener("click", function () {
        enviarComandoBluetooth("instruccion para el boton");
    });

    botonGirarIzquierda.addEventListener("click", function () {
        enviarComandoBluetooth("instruccion para el boton");
    });
    botonGirarDerecha.addEventListener("click", function () {
        enviarComandoBluetooth("instruccion para el boton");
    });

    function enviarComandoBluetooth() {
       
    }
});