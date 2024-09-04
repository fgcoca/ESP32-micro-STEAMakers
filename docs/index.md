# <FONT COLOR=#8B008B>Presentación</font>

<center>

<iframe width="560" height="315" src="https://www.youtube.com/embed/bdYHTYoldFQ?si=cUAIR1Mq7hHIeZ6C" title="YouTube video player" frameborder="0" allow="accelerometer; autoplay; clipboard-write; encrypted-media; gyroscope; picture-in-picture; web-share" referrerpolicy="strict-origin-when-cross-origin" allowfullscreen></iframe>

</center>

## <FONT COLOR=#007575>**Introducción**</font>
El aspecto de la placa es el que vemos en la imagen siguiente:

<center>

![Aspecto de la placa micro:STEAMakers](./img/index/aspecto.png)  
*Aspecto de la placa micro:STEAMakers*

</center>

La placa está equipada con 520 KB de memoria dinámica, 4 MB de memoria flash y un procesador de doble núcleo de 240 MHz. Además, incorpora Bluetooth de bajo consumo (BLE) y WiFi, capacidades excelentes para la comunicación inalámbrica.

Esta placa también integra diversos sensores, como el sensor de temperatura y humedad; El giroscopio acelerómetro de seis ejes que permite obtener movimientos y aceleración; El sensor de luz para capturar la intensidad de la luz ambiente; La interfaz para tarjeta microSD para guardar datos; El micrófono para detectar el sonido ambiente, y el zumbador que puede reproducir música; Los botones A y B y el botón táctil; La matriz de 5x5 puntos RGB para muestra de números, letras y patrones con desplazamiento continuo.

Por lo tanto, se puede aplicar para la enseñanza STEAM, IoT, proyectos de control inteligente, y una variedad de trabajos creativos de tipo maker.

## <FONT COLOR=#007575>**Partes micro:STEAMakers**</font>
En la imagen siguiente observamos la descripción gráfica de partes de la cara frontal.

<center>

![Hardware de la cara frontal](./img/index/partes_frontal.png)  
*Hardware de la cara frontal*

</center>

En la imagen siguiente observamos la descripción gráfica de partes de la cara posterior.

<center>

![Hardware de la cara posterior](./img/index/partes_posterior.png)  
*Hardware de la cara posterior*

</center>

## <FONT COLOR=#007575>**Pines GPIO**</font>
La placa ESP32 micro:STEAMakers está equipada con pines de expansión tipo gold-finger, incluyendo todos los pines IO, 19 puertos digitales, 7 puertos analógicos, interfaces I2C, UART y SPI. En la imagen siguiente tenemos la descripción de pines de la placa.

<center>

![Pinout del conector de borde](./img/index/pines_borde.png)  
*Pinout del conector de borde*

</center>

Esta placa es compatible con una gran variedad de lenguajes de programación, incluyendo arduinoblocks, MicroBlocks, Arduino, MicroPython y KidsBlock3.0. Es adecuada para usuarios con diferentes niveles de programación.

## <FONT COLOR=#007575>**Especificaciones técnicas**</font>
* Alimentación: USB; conector JST PH2.0; puerto I/O gold-finger
* Tensión de funcionamiento: 3.3V
* Corriente de funcionamiento: 100mA
* Placa de control principal ESP32:
> * Procesador: ESP32-D0WDQ6 (doble núcleo)
> * Frecuencia básica: hasta 240MHZ
> * SRAM:520KB
> * Flash:4MB
> * Protocolo WiFi: 802.11 b/g/n (802.11n, rápido hasta 150 Mbps)
> * Rango de frecuencia de funcionamiento WiFi: 2412 ~ 2484 MHz
> * Protocolo Bluetooth: cumple los estándares Bluetooth v4.2BR /EDR y BLE RF
> * Bluetooth: receptor NZIF con sensibilidad de -97 dBm
> * Audio Bluetooth: Audio CVSD y SBC
* Recursos incorporados:
> * 2 botones digitales (botones A y B)
> * Giroscopio acelerometro de seis ejes MPU6050 con Velocidad máxima de rotación de 2000°/s y un Rango de aceleración de ±2g，±4g，±8g，±16g
> *Sensor de luz: fototransistor ALS-PT19-315C
> Micrófono: 4013-SMD
> Zumbador: MLT-8530AAC3V
> 25 RGB: WS2812-2020 RGB-LED
> Sensor de temperatura y humedad: AHT20
> Interfaz de expansión de tarjeta microSD
> Módulo de detección de consumo de corriente de alimentación: INA180A1IDBVR
> Puerto de expansión I2C
* Interface de extensión:
> * 19 puertos de E/S digital (multiplexado parcialmente con recursos de a bordo)
> * 2 DAC de 8 bits (io25, io26)
> * 7 pines táctiles (io2, io4, io12, io13, io15, io27, io32)
> * 13 pines PWM (io2, io4, io5, io12, io15, io16, io18, io19, io23, io25, io26, io27, io32)
> * Dispositivo UART de 3 vías (cualquier pin), soporta control de flujo por hardware y DMA
> * 2 dispositivos I2C (cualquier pin), soporta modo host o esclavo
> * Control remoto IR (cualquier pin) Transceptor IR de 8 canales, soporta diferentes estándares de forma de onda.

## <FONT COLOR=#007575>**I2C en la micro:STEAMakers**</font>
La placa ESP32 micro:STEAMakers incorpora un puerto de expansión I2C localizado en un conector hembra de 4 pines de 100mils (2,54mm) de separación entre pines.

<center>

![Conector de expansión I2C](./img/index/expansor_I2C.png)  
*Conector de expansión I2C*

</center>

Además la placa incorpora dos dispositivos que son I2C y que es conveniente tener claro cuales son y que direcciones físicas utilizan para que no interfiramos con los mismo desde lo que conectemos externamente al puerto de expansión I2C de la placa que sea de tipo I2C. Son los siguientes:

* Sensor de temperatura y humedad AHT20.

<center>

![Localización Sensor de temperatura y humedad AHT20](./img/index/Pos_AHT20.png)  
*Localización Sensor de temperatura y humedad AHT20*

</center>

* Acelerómetro, giroscopio de 6 ejes MPU-6050.

<center>

![Localización acelerómetro y giroscopio MPU-6050](./img/index/Pos_MPU6050.png)  
*Localización acelerómetro y giroscopio MPU-6050*

</center>

Observamos en este caso que el dispositivo tiene posibilidad de configurar la dirección I2C del mismo entre dos posibilidades:

* Dirección 0x68 configurada por defecto al estar unidos los dos pads de configuración mediante una resistencia de cero ohmios.
* Dirección 0x69 que podemos configurar desoldando la resistencia de la 0x68 y soldandola en los dos pads de la 0x69. Aunque no es una operación muy compleja no se recomienda acometerla si no tenemos experiencia trabajando con soldadura en este tipo de placas y componentes y en cualquier caso no se recomienda a no ser que resulte totalmente imprescindible.

A continuación vamos a ver un ejemplo en el que averiguamos las direcciones físicas de estos dos dispositivos I2C.

<center>

![Obtención de la dirección I2C de los dispositivos conectados](./img/index/obtener_dir_i2c.png)  
*Obtención de la dirección I2C de los dispositivos conectados*

</center>

Cargamos el programa en la placa, conectamos la consola serie y tras hacer un reset físico en la micro:STEAMakers nos aparece la siguiente información:

<center>

![Resultados obtención de la dirección I2C de los dispositivos conectados](./img/index/obtener_dir_i2c_R.png)  
*Resultados obtención de la dirección I2C de los dispositivos conectados*

</center>

El bloque 'Escanear lo encontramos en 'Entrada/Salida' en I2C:

<center>

![Bloque Escaner I2C](./img/index/B_escann_i2c.png)  
*Bloque Escaner I2C*

</center>
