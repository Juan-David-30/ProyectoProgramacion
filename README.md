# ProyectoProgramación
Proyecto para programación de computadores URosario
Carro programado con arduino, nombre del prototipo programado: "PENDU-01"

Partes del proyecto programadas:
1. Programación del Arduino R1 junto a un shield de motores y diversos componentes
2. Programación del módulo bluetooth
3. Creacion de la app para conducir el carro
4. Algoritmo de resolución de laberintos

Partes del proyecto no programadas (Ensamblaje):
1. Ensamblaje del carro

Lenguajes usados para el proyecto:
1. IDE Arduino (C, C++)
2. Javascript

Resumen:
El proyecto llevado a cabo se trata de la construcción de un carro utilizando un Arduino UNO R3. El proyecto cuenta con tres partes que se programan, dos de ellas desarrolladas en el IDE de Arduino
y una utilizando Javascript, la primera parte es el ensamblado y programado del Arduino UNO para que sea capaz de moverse utilizando la estructura del carro que hemos creado. 
La segunda parte es la programación del modulo bluetooth para que sea capaz de transmitir la información del Arduino R1 a la aplicación creada en el proyecto. Por ultimo es la 
creación de la aplicación , esta aplicación permite el control del carro y debido a el modulo bluetooth es capaz de controlar el carro de forma remota.

La dificultad del proyecto es entender como funciona y como programar los diversos componentes del arduino UNO, el módulo bluetooth, el algoritmo de resolución de laberintos y la aplicación
Como unir estas partes del proyecto para poder crear un carro controlado a distancia, que supla las funcionalidades propuestas en el proyecto y que se puede llevar la programación a algo fisico

Funcionalidades:
1. El carro es capaz de moverse en cuatro direcciones (Al frente, atras, izquierda y derecha)
2. El carro es capaz de detectar la distancia en centimetros respecto a un obstaculo en frente de el
3. El carro es capaz de transmitir la información de la distancia hasta al aplicación creada 
4. El modulo bluetooth es capaz de conectarse a un dispositivo a través de bluetooth
5. Transmitir la información de carro al moduflo bluetooth y hasta la aplicación
6. Transmitir la información de la aplicación al módulo bluetooth y hasta el carro
7. A travez de la aplicación se puede controlar las direcciones del carro y moverlo
8. En la aplicación se mostrara la información nombrada en el punto 2
9. Se podra mover el ultrasonido del carro unos 120 grados de izquierda a derecha
10. El carro tendra un algoritmo capaz de resolver un pequeño laberinto
