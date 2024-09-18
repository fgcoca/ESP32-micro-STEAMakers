# <FONT COLOR=#8B008B>Programación con MicroBlocks</font>
De manera muy resumida lo que haremos en esta sección es:

*  Describir los bloques y conceptos relacionados con la micro:STEAMakers.
* Incluiremos esquemas si resultan necesarios.

## <FONT COLOR=#007575>**Conexión y carga de la libreria**</font>
La primera tarea que vamos a realizar es conectar la placa micro:STEAMakers a un puerto USB del ordenador mediante un cable USB-A / USB-C y desde el menú MicroBlocks (el engranaje) proceder a actualizar el firmware de la placa.

<center>

![Actualizar el firmware de la placa](../img/guias/uB/act_firm.gif)  
*Actualizar el firmware de la placa*

</center>

Al final del todo vemos como se pone en verde el icono USB indicando que la conexión está realizada y en la micro:STEAMakers se está ejecutando y la máquina virtual se está ejecutando por lo que ya podemos trabajar en vivo con la placa.

<center>

![Primer trabajo en vivo](../img/guias/uB/vivo.gif)  
*Primer trabajo en vivo*

</center>

Vamos a proceder a añadir la libreria (creada por Joan Guillén) con los bloques especificos de micro:STEAMakers. 

<center>

![Primer trabajo en vivo](../img/guias/uB/libreria.gif)  
*Primer trabajo en vivo*

</center>

## <FONT COLOR=#007575>**Comentarios**</font>
En MicroBlocks los comentarios son tratados desde un único bloque que podemos encontrar en el menú 'Control'. Es un bloque que no hace nada. Se utiliza para añadir notas y documentación a los scripts.

<center>

![Comentarios](../img/guias/uB/comentuB.png)  
*Comentarios*

</center>

La ventana de entrada de texto se autodimensiona según introducimos texto y se pueden añadir líneas pulsando la tecla enter.

## <FONT COLOR=#007575>**Control**</font>
En este grupo tenemos acceso a los bloques de control de la micro:bit.

* **al empezar**. Los bloques debajo de este se ejecutan cuando se enciende la placa o cuando se hace clic en el icono verde EJECUTAR que tiene forma de flecha. Es uno de los bloques denominados sombrero.

<center>

![Bloque 'al empezar'](../img/guias/uB/B_al_empezar.png)  
*Bloque 'al empezar'*

</center>

* **por siempre**. Se trata del bloque de la imagen y es un bloque que se ejecuta de manera indefinida.

<center>

![Bloque 'por siempre'](../img/guias/uB/B_por_siempre.png)  
*Bloque 'por siempre'*

</center>

* **espera xx milisegundos**. Espera el número de milisegundos indicado antes de continuar.

<center>

![Bloque 'espera xx milisegundos'](../img/guias/uB/B_espera_ms.png)  
*Bloque 'espera xx milisegundos'*

</center>

## <FONT COLOR=#007575>**Pantalla LEDs RGB**</font>
Estos son los bloques de control de la matriz de 5x5 LEDs RGB.

<center>

![Bloques Pantalla LEDs RGB](../img/guias/uB/B_pantalla.png)  
*Bloques Pantalla LEDs RGB*

</center>
