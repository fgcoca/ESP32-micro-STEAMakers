# <FONT COLOR=#8B008B>Tarjeta microSD</font>
La placa ESP32 microSTEAMakers incorpora un lector de tarjetas microSD conectada mediante el bus SPI para comunicarse con el micro controlador.

El lector se conecta utilizando los pines:

* io5 - CS o Chip Select
* io23 - MOSI o Master Output Slave Input: Salida de datos del Master y entrada de datos al Esclavo.
* io19 - MISO o Master Input Slave Output: Salida de datos del Esclavo y entrada al Master.
* io18 - SCK o Clock

En la Presentación, apartado [Introducción](http://127.0.0.1:8000/....https://fgcoca.github.io/ESP32-micro-STEAMakers/#introduccion) podemos apreciar la posición del lecto SD en la parte posterior de la placa. En la imagen siguiente vemos destacado el lector SD.

<center>

![Lector de tarjetas microSD](../img/SD/lector.png)  
*Lector de tarjetas microSD*

</center>
