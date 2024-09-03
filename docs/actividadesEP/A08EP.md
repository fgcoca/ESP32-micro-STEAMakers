# <FONT COLOR=#8B008B>A08-Particulas</font>

!!! tip "Alimentación Shield"
	Recuerda que la Shield debe tener activada la alimentación externa para que funcione el sistema.

Vamos a trabajar con un sensor que mide la materia particulada (PM) en el aire. Sensor imprescindible si estamos monitorizando la calidad del aire.

Su funcionamiento se fundamenta en la dispersión laser. Se utiliza un láser para irradiar las partículas en el aire haciendo que estas dispersen la luz. El sensor recoge la luz dispersa registrando su intensidad a lo largo del tiempo. Un procesador interno calcula el tamaño de particula equivalente y el número de partículas de diferentes tamaños. El mismo procesador convierte los datos en valores de concentración que transmite por interfaz I2C.

Destacar entre sus especificaciones:

* Respuesta en tiempo real y adquisición continua de datos.
* Tamaño mínimo reconocible de partículas de 0,3 µm.
* Voltaje de trabajo: 3,3 V ~ 5 V
* Corriente máxima de trabajo: 100 mA
* Corriente en espera: <= 2 mA
* Rango de medición de partículas: 0,3 ~ 1,0 µm; 1,0 ~ 2,5 µm; 2,5 ~ 10 µm
* Eficiencia de conteo de partículas: 50% @ 0,3 µm 98% @ >= 0,5 µm
* Resolución de concentración de masa de partículas: 1 µg/m³
* Volumen estándar: 0,1 L
* Rango de temperatura de trabajo: -10 ~ +60 ºC
* Rango de humedad de trabajo: 0 ~ 95% (sin condensación)

Su aspecto es el que vemos en la imagen siguiente:

<center>

![Sensor de partículas EASY Plug I2C](../img/actividadesEP/particulas.png)  
*Sensor de partículas EASY Plug I2C*

</center>

## <FONT COLOR=#007575>**A08_1-Concentración PM2.5 y PM10**</font>
Medimos y mostramos la concentración de partículas de esos dos tamaños tomando la medida en ug/m3. El programa es el siguiente:

<center>

![A08_1-Concentración PM2.5 y PM10](../img/actividadesEP/A08_1EP.png)  
*[A08_1-Concentración PM2.5 y PM10](../program/actividadesAB/EP/A08_1EP-Concentracion PM2_5 y PM10.abp)*

</center>

A continuación vemos el programa en un momento de su funcionamiento:

<center>

![Funcionamiento A08_1-Concentración PM2.5 y PM10](../img/actividadesEP/A08EPR.png)  
*Funcionamiento A08_1-Concentración PM2.5 y PM10*

</center>

## <FONT COLOR=#007575>**A08_2-Número de particulas**</font>
Contamos el número de partículas de tamaño mayor o igual que 2.5 micrometros (um) por cada 0.1 L de aire (volumen de aire de la cámara de medida). El programa es el siguiente:

<center>

![A08_2-Número de particulas](../img/actividadesEP/A08_2EP.png)  
*[A08_2-Número de particulas](../program/actividadesAB/EP/A08_2EP-Numero de particulas.abp)*

</center>
