# <FONT COLOR=#8B008B>ESP-NOW en arduinoblocks</font>
Los contenidos de este apartado van a estar basados en:

* Manual [Comunicación ESP-NOW con ESP32 STEAMakers](https://drive.google.com/file/d/1xeSOalJhOgPZF2syGutzAwufxOdv2H1H/view) creado por Juanjo López.
* Apuntes [ESP-NOW](https://pedroruizf.github.io/steamakers_demo/espnow.html) de Pedro Ruiz.

## <FONT COLOR=#007575>**Obtener MAC placa micro:STEAMakers**</font>
Para obtener la dirección MAC por consola se puede usar el siguiente programa:

<center>

![Programa para obtener MAC placa micro:STEAMakers](../img/wifi/espnow/obt_mac.png)  
*[Programa para obtener MAC placa micro:STEAMakers](../program/ejemplosAB/obt_mac_microSM.abp)*

</center>

El resultado en consola es el de la imagen siguiente:

<center>

![Consola del programa para obtener MAC placa micro:STEAMakers](../img/wifi/espnow/obt_mac_consola.png)  
*Consola del programa para obtener MAC placa micro:STEAMakers*

</center>

!!! info ""
    Si al hacer clic en el botón verde Conectar de la consola no aparece nada en pantalla será necesario pulsar el botón de reset de la placa.

Otra posibilidad es conectar una pantalla a la micro:STEAMakers y sacar la MAC por ella. En este caso el programa para una OLED I2C sería:

<center>

![Programa para obtener MAC placa micro:STEAMakers](../img/wifi/espnow/obt_mac_oled.png)  
*Programa para obtener MAC placa micro:STEAMakers*

</center>

Que da como resultado:

<center>

![Resultado en OLED del programa para obtener MAC placa micro:STEAMakers](../img/wifi/espnow/obt_mac_oledR.png)  
*Resultado en OLED del programa para obtener MAC placa micro:STEAMakers*

</center>

!!! Example "Consejo"
    <b>A la hora de trabajar con proyectos ESP-NOW es recomendable etiquetar físicamente cada placa con la dirección MAC obtenida para poder fácilmente identificar cada una de ellas durante la programación.</b>

## <FONT COLOR=#007575>**Bloques ESP-NOW**</font>
