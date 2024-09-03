# <FONT COLOR=#8B008B>A04-Temperatura y Humedad con Thingspeak</font>

!!! tip "Alimentación Shield"
	**1**. Si no tenemos alimentación externa los jumpers deben estar en la posición 3.3V y los sensores y/o actuadores conectados tienen que poder trabajar a esa tensión.  
	**2**. Si tenemos alimentación externa uno los jumpers pueden estar en la posición 3.3V para los dispositivos de esta tensión y el otro en la de 5V para los sensores de esta otra tensión. Cada tipo conectado según la posición de los jumpers.

Actividad en la que vamos a mostrar mismos datos de la actividad [A03-Temperatura y Humedad con Telegram](./A03MOD.md) esta vez en el broker de Thingspeak.

El programa es el siguiente

<center>

![A04-Temperatura y Humedad con Thingspeak](../img/actividadesMOD/A04MOD.png)  
*[A04-Temperatura y Humedad con Thingspeak](../program/actividadesAB/MOD/A04MOD-TyH_Thinspeak.abp)*

</center>

En la imagen siguiente vemos el resultado que se obtiene en el broker transcurrido un tiempo:

<center>

![A04-Temperatura y Humedad con Thingspeak](../img/actividadesMOD/A04MODR.png)  
*A04-Temperatura y Humedad con Thingspeak*

</center>
