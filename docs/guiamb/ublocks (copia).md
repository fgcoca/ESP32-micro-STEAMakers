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

* **limpia pantalla**. Apaga todos los LEDs.

<center>

![Bloque 'limpia pantalla'](../img/programacion/ublocks/B_limpia_pant.png)  
*Bloque 'limpia pantalla'*

</center>

* **pantalla**. Muestra una imagen de la pantalla que permite cambiar el estado de cada LED haciendo clic sobre el mismo.

<center>

![Bloque 'pantalla'](../img/programacion/ublocks/B_pantalla.png)  
*Bloque 'pantalla'*

</center>

* **anima el texto**. Muestra el texto introducido mediante desplazamiento caracter a caracter con el retardo en milisegundos que establezcamos.

<center>

![Bloque 'anima el texto'](../img/programacion/ublocks/B_anima_texto.png)  
*Bloque 'anima el texto'*

</center>

* **enciende x,y**. Enciende el LED indicado en la coordenada x,y. La coordenadas x es la horizontal y la y es la vertical. La coordenada 1,1 es la esquina superior ezquierda, la 1,5 es la derecha, la 5,1 es la inferior izquierda y la 5,5 la inferior derecha.

<center>

![Bloque 'enciende x,y'](../img/programacion/ublocks/B_enciende_xy.png)  
*Bloque 'enciende x,y'*

</center>

## <FONT COLOR=#007575>**Operadores**</font>
Esta entrada se crea porque en MicroBlocks, en el menú específico, aparecen algunos operadores especiales. Las descripciones siguiente son las obtenidas de [MicroBlocks Wiki](https://wiki.microblocks.fun/reference_manual/operators).

Dentro del grupo de bloques estándar tenemos los que se ven en la imagen.

<center>

![Bloques estándar](../img/programacion/ublocks/uB/ub01.png)  
*Bloques estándar*

</center>

* ![Módulo](../img/programacion/ublocks/uB/ub02.png)  Devuelve el resto de la división entre los dos números introducidos, ambos inclusive.
* ![Aleatorio](../img/programacion/ublocks/uB/ub03.png) Devuelve un número aleatorio (al azar) entre el primer y el segundo valor indicado.

En la imagen vemos un ejemplo donde se averigua si un número generado al azar es par o impar.
  
A la variable ```num_aleatorio``` se le asigna un número aleatorio del 1 al 15. La operación ```módulo``` se utiliza para comprobar si el resto es 0 y así saber si el número es par. Si el resto de la operación ```num_aleatorio``` dividido por 2 da como resultado 0, el número es par, en caso contrario es impar.

<center>

![Par o impar](../img/programacion/ublocks/uB/ub04.png)  
*Par o impar*

</center>

Con este ejemplo comprobamos que una vez conectada la micro:bit (si no el programa nos indica que no lo está y no funcionará), el bloque ```di``` muestra como retorno un mensaje que aparece asociado al bloque ```al empezar``` en la pantalla del ordenador. Esta es la forma de trabajar de MicroBlocks y hace que el código se compruebe de manera instantánea siempre que los bloques estén acoplados a ```al empezar```.

[Descargar el programa](../ejemplos/par_impar.ubp)

* ![El dato es de tipo](../img/programacion/ublocks/uB/ub05.png)  Devuelve ```True``` si la expesión de entrada del lado izquierdo coincide con la selección del menú de tipos de datos realizada en el lado derecho. Los tipos de datos son importantes a la hora de programar. Aunque un entorno como MicroBlocks facilita las cosas a los usuarios principiantes al encargarse de las conversiones de tipos de datos, todavía es posible engañarse visualmente al comparar variables cuyos valores parecen iguales. Este bloque pertenece al grupo de condicionales, pero se describe ahora porque se utiliza en el ejemplo siguiente.

<center>

![Número o cadena](../img/programacion/ublocks/uB/ub06.png)  
*Número o cadena*

</center>

[Descargar el programa](../ejemplos/num_cad.ubp)

Desplegando la sección 'Avanzados' vemos algunos bloques que representan operaciones bit a bit. Los operadores bit a bit (bitwise) trabajan sobre representaciones binarias de datos y su utilidad está en cambiar bits individuales en un operando. Los dos operandos asociados al operador bit a bit deben ser enteros. En la imagen vemos los bloques que aparecen en avanzados.

<center>

![Bloques de operadores avanzados](../img/programacion/ublocks/uB/ub07.png)  
*Bloques de operadores avanzados*

</center>

* ![Reescalado](../img/programacion/ublocks/uB/ub08.png) Permite modificar el rango de un valor o variable desde un rango origen a un rango destino. Esta función es especialmente útil para adaptar los valores leídos de sensores o para adaptar valores a aplicar en un actuador.
* ![Hexadecimal](../img/programacion/ublocks/uB/ub09.png) Convierte una cadena Hexadecimal en un número decimal. Por ejemplo, 5A hex. = 90 dec.
* ![Bitwise AND](../img/programacion/ublocks/uB/ub10.png)  El operador AND compara dos bits y genera un resultado igual a 1 si ambos bits son 1; en caso contrario, devuelve 0. Números de mas de un bit son comparados bit a bit. Un ejemplo de aplicación lo vemos en la imagen siguiente.

<center>

![bitwise AND](../img/programacion/ublocks/uB/ub11.png)  
*bitwise AND*

</center>

La tabla siguiente muestra la forma de obtener el resultado de forma teórica.

<center>

![bitwise AND](../img/programacion/ublocks/uB/ub12.png)  

</center>

* ![Bitwise OR](../img/programacion/ublocks/uB/ub13.png)  El operador OR compara dos bits y devuelve 1 si uno o ambos bits son 1 y da 0 si ambos bits son 0. Bitwise OR compara todas las posiciones de bits de ambos números e informa de aquellas en las que cualquiera de los dos está a 1.

Un ejemplo de aplicación lo vemos en la imagen siguiente.

<center>

![bitwise OR](../img/programacion/ublocks/uB/ub14.png)  
*bitwise OR*

</center>

La tabla siguiente muestra la forma de obtener el resultado de forma teórica.

<center>

![bitwise OR](../img/programacion/ublocks/uB/ub15.png)  

</center>

* ![Bitwise XOR](../img/programacion/ublocks/uB/ub16.png)  El operador EXCLUSIVE-OR compara dos bits y genera un resultado de 1 si los bits son complementarios (el bit se establece en un operando pero no en ambos); en caso contrario, devuelve 0. Otra forma de pensar en la operación XOR es que invertirá las posiciones de los bits en las que el segundo operando tenga un 1. Todas las demás se copiarán igual.

Un ejemplo de aplicación lo vemos en la imagen siguiente.

<center>

![bitwise XOR](../img/programacion/ublocks/uB/ub17.png)  
*bitwise XOR*

</center>

La tabla siguiente muestra la forma de obtener el resultado de forma teórica.

<center>

![bitwise XOR](../img/programacion/ublocks/uB/ub18.png)  

</center>

* ![Bitwise NOT](../img/programacion/ublocks/uB/ub19.png)  El operador NOT se utiliza para invertir (BIT FLIP) todos los bits del operando Cuando el bit de posición más alta de un número se convierte en 1, ese número se considera un número negativo. La representación informática real de un número entero con signo en MicroBlocks es de 31 bits. El bit de mayor peso es un bit de signo. Esto permite números en el rango de -1073741824 a 1073741823. Cuando el bit de signo es 0, el número es positivo; y cuando es 1, el número es negativo.

Un ejemplo de aplicación lo vemos en la imagen siguiente.

<center>

![bitwise NOT](../img/programacion/ublocks/uB/ub20.png)  
*bitwise NOT*

</center>

La explicación es sencilla, el número 3 (0011) se convierte al binario 1100 y como el bit de mayor peso es 1 indica que es negativo y el número es 4, por lo tanto el resultado es -4.

* ![Bitwise desplazamiento izquierda](../img/programacion/ublocks/uB/ub21.png) El valor del operando izquierdo se desplaza hacia la izquierda el número de bits especificado por el operando derecho. Los bits se desplazan hacia la izquierda, el bit situado más a la izquierda se descarta y al bit situado más a la derecha se le asigna el valor 0. Cada posición de bit desplazada a la izquierda equivale en binario a multiplicar por 2. En la imagen siguiente vemos el funcionamiento del desplazamiento a la izquierda a nivel de bit.

<center>

![bitwise desplazamiento izquierda](../img/programacion/ublocks/uB/ub22.png)  
*bitwise desplazamiento izquierda*

</center>

* ![Bitwise desplazamiento derecha](../img/programacion/ublocks/uB/ub23.png) El valor del operando izquierdo se desplaza hacia la derecha el número de bits especificado por el operando derecho. Los bits se desplazan hacia la derecha, el bit situado más a la derecha se descarta y al bit situado más a la izquierda se le asigna una copia del bit de signo. Esto se denomina desplazamiento aritmético. Por cada posición de bit desplazada a la derecha, esta operación es el equivalente binario de dividir por 2. En la imagen siguiente vemos el funcionamiento del desplazamiento a la derecha a nivel de bit.

<center>

![bitwise desplazamiento derecha](../img/programacion/ublocks/uB/ub24.png)  
*bitwise desplazamiento izquierda*

</center>

## <FONT COLOR=#007575>Variables</font>
En MicroBlocks se contemplan dos tipos de variables, las globales y las locales. Cuando hablamos en estos términos hablamos de ámbito (scope) de las variables y determina la zona donde se define la variable, que son global y local.

Las variables locales son las definidas dentro de una función y solamente está disponible para el código que se ejecuta dentro de la función.

Las variables globales se definen en cualquier punto del programa, normalmente al principio, y pueden ser llamadas desde cualquier sitio del programa, incluso desde las funciones.

* ![Añadir o crear variable](../img/programacion/ublocks/uB/ub25.png) Este bloque es en realidad un botón que crea una nueva variable global. Si existe una variable con el mismo nombre, se creará una nueva con el mismo nombre y el número 2 añadido. Cuando creamos una variable se nos pide el nombre de la misma en una ventana emergente y una vez creada aparecerá un nuevo bloque para acceder al valor de la variable creada. Además esta nueva variable estará disponible para su selección en dos de los bloques que explicaremos después.
* ![Borrar variable](../img/programacion/ublocks/uB/ub26.png)  Este bloque es en realidad un botón que sirve para eliminar una variable previamente creada.

En la animación siguiente vemos el proceso de creación y eliminación de variables.

<center>

![Creación y eliminación de variables](../img/programacion/ublocks/uB/ub27.gif)  
*Creación y eliminación de variables*

</center>

La opción de mostrar el nombre de las variables mostrada desde el bloque se puede utilizar para añadir variables mientras se edita el código del programa, sin pasar a las opciones de la categoría variables.

* ![Asigna valor a variable](../img/programacion/ublocks/uB/ub28.png)  Este bloque asigna el valor a cualquier variable, global o local, en la cantidad especificada en el área de entrada. La cantidad que se asigna puede ser un número positivo o negativo. Para mostrar los nombres de las variables locales en el menú de selección, este bloque debe estar físicamente unido a la secuencia de bloques en la que se utiliza el bloque 'Inicializar local' que veremos a continuación.
* ![Aumenta el valor de una variable](../img/programacion/ublocks/uB/ub29.png)  Este bloque suma algebraicamente (cambia) el valor de cualquier variable, global o local, en la cantidad especificada en el área de entrada. La cantidad de cambio puede ser un número positivo o negativo.
* ![Inicializa variable local](../img/programacion/ublocks/uB/ub30.png)  Este bloque se utiliza para crear e inicializar variables locales. El nombre predeterminado de la variable 'var' puede cambiarse por cualquier otro haciendo clic en el nombre y escribiendo un nuevo nombre en el cuadro de diálogo que se abre. Despés, si es necesario cambiar el valor de la variable local, se puede utilizar el bloque 'asigna valor a' de la categoría variables. En la animación siguiente vemos este proceso y la disponibilidad o no de la variable local.

<center>

![Inicializa variable local](../img/programacion/ublocks/uB/ub31.gif)  
*Inicializa variable local*

</center>

Una variable global tiene:

* **Alcance global**: Una variable global puede utilizarse en cualquier script que no tenga una variable local del mismo nombre que la anule.
* **Tiempo de vida largo**: Una variable global es creada explícitamente y vive hasta que es explícitamente borrada. Conserva su valor cuando los scripts se inician y detienen e incluso cuando no hay scripts en ejecución. Sin embargo, al hacer clic en el botón "Detener", todas las variables globales se borran e inicializan con el valor cero. Las variables globales también se inicializan a cero cuando se crean por primera vez y cuando se carga un proyecto.

Por el contrario, una **variable local** tiene:

* **Ámbito local**: Una variable local sólo puede utilizarse en el script en el que aparece. Si varios scripts utilizan variables locales con el mismo nombre, esas variables son independientes entre sí. Aunque esta práctica se desaconseja porque puede inducir a errores.
* **Tiempo de vida limitado**: Una variable local de un script se crea cuando se inicia el script y se elimina cuando éste finaliza. Se crea una nueva variable local cada vez que se inicia un script (incluyendo un script de función), y las variables locales de cada invocación de script son independientes entre sí.
* **Precedencia sobre las globales**: Si una variable local tiene el mismo nombre que una variable global, la variable local prevalece sobre la global en el script en el que aparece la variable local. Una variable es local en todo el script sin importar en qué parte del script aparezca "inicializar var local a", aunque es una buena práctica de codificación que "inicializar var local a" preceda a cualquier otra referencia a esa variable.

Un ejemplo comentado de aplicación lo vemos en la imagen siguiente.

<center>

![Variables](../img/programacion/ublocks/uB/ub32.png)  
*Variables*

</center>

[Descargar el programa](../ejemplos/variables.ubp)

## <FONT COLOR=#007575>Bucles</font>
En el caso de MicroBlocks los bucles, condicionales y funciones están todos englobados en la categoría 'Control'. Vamos a ver algunos de ellos en esta ocasión y los que no veamos en esta actividad se irán viendo cuando los necesitemos.

* ![Al empezar](../img/programacion/ublocks/uB/ub33.png)  Los bloques con forma de sombrero forman parte de un grupo de bloques de control que comienzan a ejecutarse cuando se pulsa el icono verde ```Inicia```. Este bloque se activa cuando se cumple la condición de inicio del programa.
* ![Bucle infinito](../img/programacion/ublocks/uB/ub34.png)  Los bloques con forma de "C" son un grupo de bloques de control que ejecutan el código colocado en su interior siempre que se cumplan las condiciones descritas en sus subtítulos. Estos son los bloques de tipo bucle. Este en particular ejecutará los bloques en su interior indefinidamente.
* ![Bucle para número de iteraciones](../img/programacion/ublocks/uB/ub35.png)  Este bloque C ejecuta el código colocado en su interior el número especificado de veces. En el ejemplo siguiente veremos tanto en el programa como en la pantalla la suma de los 10 primero números naturales.

<center>

![Suma de los 10 primeros números](../img/programacion/ublocks/uB/ub36.png)  
*Suma de los 10 primeros números*

</center>

[Descargar el programa](../ejemplos/suma_10__primeros_numeros.ubp)

* ![Bucle for](../img/programacion/ublocks/uB/ub37.png)  Este bloque estambién de tipo C y pertenece al grupo de los bucles. Funciona de dos formas distintas en función del tipo de entrada especificado.

- Si la **entrada es un número**, los bloques interiores se ejecutarán tantas veces como el número. En cada iteración del bucle, empezando por uno, el parámetro o variable de control es 'i' por defecto y se incrementará en uno. Este valor se puede utilizar en el código del programa como se crea conveniente.
- El nombre del parámetro de control puede cambiarse por otro haciendo clic en la 'i' y escribiendo un nuevo nombre.
- Si la **entrada es una lista**, los bloques colocados dentro se ejecutarán tantas veces como elementos tenga la lista. En cada iteración, el parámetro de control 'i' tomará el valor de cada elemento de la lista de manera secuencia. En el ejemplo siguiente vemos una animación de un sencillo programa de como hacer un contador con los 5 primeros números y hacer que se muestre en el ordenador y en la pantalla de la micro:bit.

<center>

![Mostrar los 5 primeros números](../img/programacion/ublocks/uB/ub38.gif)  
*Mostrar los 5 primeros números*

</center>

[Descargar el programa](../ejemplos/muestra_5_primeros_numeros.ubp)

* ![espera en milisegundos](../img/programacion/ublocks/uB/ub39.png)  Este bloque pausa el flujo de ejecución del programa por el tiempo especificado en milisegundos. Se utiliza para pausar y reanudar la ejecución de código de forma controlada.
* ![espera en microsegundos](../img/programacion/ublocks/uB/ub40.png)  Este bloque pausa el flujo de ejecución del programa por el tiempo especificado en microsegundos. Se utiliza para pausar y reanudar la ejecución de código de forma controlada.
* ![envía o broadcast](../img/programacion/ublocks/uB/ub41.png)  Emite el mensaje especificado. Véase en conjunto a ![al recibir](../img/programacion/ublocks/uB/ub42.png). Este bloque envía el contenido del mensaje especificado. Todos los bloques de mensajes ```al recibir``` con el mismo mensaje en su contenido recibirán el mensaje y actuarán ejecutando su contenido.
* ![al recibir](../img/programacion/ublocks/uB/ub42.png)  Ejecuta cuando se emita el mensaje especificado. Este bloque y su par funcional ![envía o broadcast](../img/programacion/ublocks/uB/ub41.png) se suelen utilizar juntos para conseguir un medio de comunicación dentro del programa. Cualquier mensaje enviado con el comando ```envía``` es detectado y recibido por este bloque. Así, los bloques colocados bajo este bloque se ejecutarán al recibir el mensaje correspondiente. Los mensajes pueden ser cadenas o números. Además, el bloque ![ultimo mensaje](../img/programacion/ublocks/uB/ub43.png) contiene el último mensaje emitido y recibido.
* ![ultimo mensaje](../img/programacion/ublocks/uB/ub43.png)  Devuelve el último mensaje enviado en todo el programa, cronológicamente hablando. Nótese que **NO** es el último mensaje recibido por una secuencia de bloques concreta del programa, y es independiente de la ejecución del bloque ```al recibir```. No hay colas de mensajes en el sistema. Si no hay ningún ```al recibir``` en espera cuando se envía un mensaje, se perderá y será sobrescrito por el siguiente mensaje.

En el ejemplo siguiente vemos de forma sencilla el funcionamiento de estos tres últimos bloques.

<center>

![Di el último mensaje](../img/programacion/ublocks/uB/ub44.png)  
*Di el último mensaje*

</center>

[Descargar el programa](../ejemplos/ultimo_mensaje.ubp)

## <FONT COLOR=#007575>Listas</font>
Los bloques para trabajar con listas están en el menú 'Datos' y sus bloques los vemos en la imagen siguiente.

<center>

![Bloques para Listas. Datos](../img/programacion/ublocks/uB/ub45.png)  
*Bloques para Listas. Datos*

</center>

* ![](../img/programacion/ublocks/uB/listas/l1.png) Devuelve una lista corta que contiene algunos elementos en inglés. Con las flechas podemos añadir o eliminar elementos a la lista aunquw a partir del cuarto se repite siempre el mismo. Para crear una lista vacía (![](../img/programacion/ublocks/uB/listas/l2.png)) basta con eliminar el único elemento existente cuando se crea una nueva.
* ![](../img/programacion/ublocks/uB/listas/l3.png) Une (concatena) cadenas, listas o matrices de bytes y devuelve el resultado.
* ![](../img/programacion/ublocks/uB/listas/l4.png) Devuelve el carácter [Unicode](https://en.wikipedia.org/wiki/List_of_Unicode_characters) del número dado.
* ![](../img/programacion/ublocks/uB/listas/l5.png) Devuelve el enésimo elemento de una lista, cadena o matriz de bytes.
* ![](../img/programacion/ublocks/uB/listas/l6.png)  Combina los elementos de una lista en una cadena, opcionalmente se puede usar un carácter delimitador.
* ![](../img/programacion/ublocks/uB/listas/l7.png)  Añade un elemento al final de una lista.

En el ejemplo siguiente vemos el uso de estos bloques. Comenzamos por crear una cadena de caracteres de la que vamos a extraer la palabra un mediante la unión de los elementos 9 y 10 de la cadena. Se crea una lista con cuatros animales y finalmente se muestra la palabra 'un' seguida de la posición 3 de la lista creada.

<center>

![Un pajaro](../img/programacion/ublocks/uB/listas/l8.png)  
*Un pajaro*

</center>

[Descargar el programa](../ejemplos/un_pajaro.ubp)

En este otro ejemplo vemos como se generan los caracteres de latín básico comenzando por el espacio en blanco (32), diferentes símbolos, números, letras mayúsculas y letras minúsculas.

<center>

![Caracteres Unicode de Latín básico](../img/programacion/ublocks/uB/listas/l9.png)  
*Caracteres Unicode de Latín básico*

</center>

[Descargar el programa](../ejemplos/unicode.ubp)

* ![](../img/programacion/ublocks/uB/listas/l10.png) Devuelve el número de elementos de una lista, cadena o matriz de bytes.
* ![](../img/programacion/ublocks/uB/listas/l11.png) Sustituye el enésimo elemento de una lista por el valor dado. También puede sustituir todos los elementos por un valor.
* ![](../img/programacion/ublocks/uB/listas/l12.png) Elimina el elemento N de una lista. La lista resultante se reduce de tamaño. También puede eliminar todos los elementos.

A continuación vemos un ejemplo en el que se demuestra la funcionalidad de estos tres bloques.

<center>

![Sustituir, eliminar y tamaño](../img/programacion/ublocks/uB/listas/l13.gif)  
*Sustituir, eliminar y tamaño*

</center>

[Descargar el programa](../ejemplos/sustituir_eliminar_long.ubp)

* ![](../img/programacion/ublocks/uB/listas/l14.png) Devuelve la posición de la primera coincidencia de una subcadena dentro de una cadena o un elemento de una lista. Devuelve -1 si no encuentra coincidencias.

En el ejemplo las variables locales ```cadena``` y ```animales``` se inicializan como de tipo string y list respectivamente. El primer conjunto de resultados opera sobre la cadena, buscando la posición de la primera apariciones de "es". La primera coincidencia se encuentra en el carácter número uno. La segunda búsqueda se inicia en el carácter número tres, y localiza el objetivo de la búsqueda en el carácter número seis. La búsqueda de "perro" en la lista 'animales' la encuentra en el elemento número dos de la lista. La segunda búsqueda de "perro" en la lista 'animales' comienza en el elemento número tres y devuelve -1 porque no lo encuentra. No hay ningún "raton" en la lista, por lo que la búsqueda devuelve -1.

<center>

![Buscar](../img/programacion/ublocks/uB/listas/l15.png)  
*Buscar*

</center>

[Descargar el programa](../ejemplos/buscar.ubp)

* ![](../img/programacion/ublocks/uB/listas/l16.png) Copia una cadena desde/hasta el caracter especificado, o una desde/hasta el elemento indicado. Como ya sabemos para mostrar el parámetro hasta hay que hacer clic en el triángulo negro.

<center>

![Copiar](../img/programacion/ublocks/uB/listas/l17.png)  
*Copiar*

</center>

[Descargar el programa](../ejemplos/copiar.ubp)

* ![](../img/programacion/ublocks/uB/listas/l18.png) Devuelve una lista separando la cadena especificada por el delimitador opcional. Si no se especifica ningún delimitador, la cadena se divide por cada carácter.

En la imagen vemos una cadena delimitada por comas que separa los caracteres mediante el delimitador coma en una lista de tres elementos.

<center>

![](../img/programacion/ublocks/uB/listas/l19.png)

</center>

A continuación vemos una cadena que incluye un carácter retorno de línea después del ABC y DEF que se separa mediante el caracter unicode de nueva línea (return) en una lista de tres elementos.

<center>

![](../img/programacion/ublocks/uB/listas/l20.png)

</center>

En este otro caso separamos la URL de la descarga de MicroBlocks en partes mediante el delimitador /.

<center>

![](../img/programacion/ublocks/uB/listas/l21.png)

</center>

* ![](../img/programacion/ublocks/uB/listas/l22.png)  Devuelve el valor Unicode del carácter enésimo de la cadena introducida. El número de caracteres introducido debe estar comprendido entre uno y la longitud de la cadena. Este bloque es el opuesto de ![](../img/programacion/ublocks/uB/listas/l4.png).

<center>

![](../img/programacion/ublocks/uB/listas/l23.png)

</center>

* ![](../img/programacion/ublocks/uB/listas/l24.png) Crea una nueva lista del número de elementos especificado. Hay que controlar la disponibilidad de memoria. Los elementos de la lista creada se pueden inicializar a cualquier valor utilizando la opción de bloque con todos.
* ![](../img/programacion/ublocks/uB/listas/l25.png) Crea una matriz del número de elementos especificado en función de la disponibilidad de memoria. Cada elemento es de tamaño byte y se le pueden asignar valores en el rango de 0-255 (0-FF).
* ![](../img/programacion/ublocks/uB/listas/l26.png) Devuelve una cadena que indica el número de palabras de 32 bits de memoria dinámica disponibles para asignar nuevos objetos (cadenas, listas o matrices de bytes). Al pulsar el botón de parada se libera toda la memoria. Justo después de pulsar el botón de parada, este bloque informa del total de memoria dinámica disponible en un dispositivo determinado. Los dispositivos tienen diferentes cantidades de memoria dinámica, basadas en la cantidad de RAM proporcionada por el hardware. Por ejemplo, la micro:bit v2 tiene mucha más RAM que la micro:bit original.

Un ejemplo de uso.

<center>

![Copiar](../img/programacion/ublocks/uB/listas/l27.png)  
*Copiar*

</center>

[Descargar el programa](../ejemplos/nueva_lista_mem.ubp)

* ![](../img/programacion/ublocks/uB/listas/l28.png)  Convierte un byte, una lista o una cadena especificada en una matriz de bytes. Cada elemento es el valor unicode de las letras de la cadena en el rango de 0-255 (0-FF).

## <FONT COLOR=#007575>**Mas operadores**</font>   
Los operadores aún no vistos son:

<center>

![Operadores aritméticos, de comparación y booleanos](../img/programacion/ublocks/O_arit_comp_bool.png)

*Operadores aritméticos, de comparación y booleanos*

</center>

Los operadores aritméticos y de comparación no requieren de mayor explicación por lo que nos vamos a centrar en los booleanos.

* ![](../img/programacion/ublocks/bool/b1.png) Operador booleano ```True``` o ```False```. Devuelve verdadero o falso en función de la posición del selector, o de la evaluación binaria de la expresión utilizada como entrada. Este bloque se usa dentro de muchos otros bloques, donde se utiliza para controlar el flujo de las ejecuciones y eventos.

El bloque ```if``` es un buen ejemplo para demostrar el uso del bloque verdadero/falso.

<center>

![Uso sencillo del operador ```True/False```](../img/programacion/ublocks/oper_T_F.png)

*Uso sencillo del operador ```True/False```*

</center>

[Descargar el programa](../ejemplos/verdadero_falso.ubp)

El código del ejemplo se ejecuta de dos maneras diferentes siempre dentro de un bucle infinito en el que se genera un número aleatorio que puede valer 1, 2 o 3:

* La primera es la condición de la rama ```IF``` que será verdadera si el número generado es 1.
* La segunda es la rama ```ELSE IF``` que se evalúa si la condición del ```IF``` no es verdadera y se pone a verdadero, ejecutando su código.
* La tercera es la condición ```ELSE``` a la que nunca se llega porque si el número vale 1 se ejecuta el ```IF``` y si no se ejecuta el ```ELSE IF``` que siempre es cierto. Es decir, aunque se genere ```variable = 3``` la condición ```ELSE``` no se ejecuta.

* ![](../img/programacion/ublocks/bool/b2.png) Invierte el valor lógico asociado a la expresión sobre la que opera. Tal y como se muestra, ```NOT``` devolverá ```FALSE``` si el deslizador se establece en ```TRUE```, y ```TRUE``` si se establece en ```FALSE```.

En el ejemplo siguiente, una variable llamada ```cadena``` se inicializa como "MicroBlocks es genial", y una variable llamada ```expresion``` se inicializa en ```TRUE``` de una forma peculiar, diciendo que algo es igual a si mismo. Cuando se aplica ```NOT``` al resultado de la expresión de igualdad, se cambia a ```FALSE```.

<center>

![Uso sencillo del operador ```NOT```](../img/programacion/ublocks/not.png)

*Uso sencillo del operador ```NOT```*

</center>

[Descargar el programa](../ejemplos/not.ubp)

* ![](../img/programacion/ublocks/bool/b3.png)  Devuelve verdadero sólo si todas sus entradas son verdadero y devuelve falso en caso contrario. Como ambas condiciones tienen que ser verdaderas para obtener un resultado verdadero, si se detecta un falso en la primera condición, no es necesario evaluar la segunda; se devuelve falso inmediatamente.

En el ejemplo tenemos dos variables ```salir``` y ```llueve``` que se inicializan a verdadero. Se muestran una serie de mensajes y al final se evalúa si "necesito un paraguas" comprobando si es voy a salir y si llueve. Ambas condiciones tienen que ser verdaderas para que necesitemos un paraguas. Podemos cambiar el estado de las variables y comprobar lo que ocurre.

<center>

![Uso sencillo del operador ```AND```](../img/programacion/ublocks/and.gif)

*Uso sencillo del operador ```AND```*

</center>

[Descargar el programa](../ejemplos/and.ubp)

* ![](../img/programacion/ublocks/bool/b4.png)  Devuelve verdadero si uno o ambos operandos son verdaderos y devuelve falso en caso contrario. Similar a ```AND``` pero opuesto a él, aquí sólo una de las dos condiciones tiene que ser verdadera para un resultado verdadero. Por lo tanto, si la primera condición es verdadera, no es necesario comprobar la segunda.

En el ejemplo estamos generando aleatoriamente dos números en el rango de 1 a 5. A continuación, comprobamos si alguno de los dos números es igual al número que estamos buscando (3). El bloque ```OR``` se utiliza para verificar el resultado de la comparación.

<center>

![Uso sencillo del operador ```OR```](../img/programacion/ublocks/or.png)

*Uso sencillo del operador ```OR```*

</center>

[Descargar el programa](../ejemplos/or.ubp)

Cada vez que pulsemos en 'Iniciar' se genera un nuevo resultado.

## <FONT COLOR=#007575>**Bloques de control**</font>

* ![](../img/programacion/ublocks/C/c1.png)  Los bloques en este bloque de sombrero se ejecutan cuando se pulsan los botones A, B, o A+B. Se dispara una vez por cada pulsación de botón. Si se mantiene pulsado el botón, no se vuelve a disparar hasta que se suelta el botón y se vuelve a pulsar. Por ejemplo, cuando se pulsa el botón A aparece en pantalla una A.

<center>

![cuando se pulsa el botón](../img/programacion/ublocks/cuando_pul_bot.png)

*cuando se pulsa el botón*

</center>

* ![](../img/programacion/ublocks/C/c2.png)  El bloque ```IF``` comprueba la condición booleana y ejecuta los bloques de una sola vez si la condición booleana se evalúa como verdadera. El triángulo negro permite la expansión del bloque ```IF``` con múltiples condiciones ```ELSE IF``` añadidas. En caso de que las ramas ```IF``` o ```ELSE IF``` anteriores no sean verdaderas, entonces se evalúan y ejecutan sucesivamente cada una de las siguientes ```ELSE IF```.

En el ejemplo, a la variable ```aleatorio``` se le asigna un número al azar entre el 1 y el 10. La operación MOD se utiliza para sondear el estado par/impar del número. Si el resto de la operación num dividido por 2 da como resultado 0, el número es par, en caso contrario es impar.

<center>

![Sentencia ```IF```](../img/programacion/ublocks/if.png)

*Sentencia ```IF```*

</center>

[Descargar el programa](../ejemplos/if_else.ubp)

Cada vez que pulsemos en 'Iniciar' se genera un nuevo resultado.

* ![](../img/programacion/ublocks/C/c3.png)  El bloque 'cuando' comprueba repetidamente una condición booleana. Cuando la condición se convierte en verdadera, se ejecutan los bloques bajo el sombrero. Si la condición sigue siendo verdadera al final de la ejecución, entonces los bloques se ejecutarán de nuevo, y ese proceso se repite hasta que la condición se convierte en falsa.

Nota: El sombrero 'cuando' incluye una espera de 10 milisegundos entre ciclos. Esto es útil para eliminar ruido en las entradas, por ejemplo rebotes en los botones, pero limita el rendimiento a un máximo de 100 iteraciones/segundo.

Vamos a ver el mismo ejemplo que en el bloque ```IF``` pero utilizando este bloque. Los tres bloques del tipo ```WHEN``` empiezan a funcionar simultáneamente cuando se pulsa el icono ```START```. El bloque 'por siempre' debajo de 'al empezar' genera un número aleatorio cada segundo. Y de forma simultanea los otros dos bloques evaluan continuamente sus condiciones mostrando el resultado que corresponde a cada uno.

<center>

![Bloque 'cuando'](../img/programacion/ublocks/B_cuando.png)

*Bloque 'cuando'*

</center>

[Descargar el programa](../ejemplos/cuando.ubp)

* ![](../img/programacion/ublocks/C/c4.png)  Este bloque de control pausa la ejecución del programa y espera hasta que la condición booleana especificada se convierta en verdadera. Se puede utilizar para sincronizar bloques de código que se ejecutan en paralelo, basándose en los eventos monitorizados.

En este ejemplo, el nivel de luz ambiental se controla mediante el sensor de luz integrado. El sensor de luz tiene un rango de 0-255, siendo 0 oscuridad total y 255 claridad máxima. Cuando se inicia el programa, ambos bloques 'cuando se pulse el boton' comienzan a ejecutarse y a comprobar el estado del botón.

Al pulsar el botón A, se inicia la monitorización de la luz y el programa espera hasta que los sensores de la micro:bit informen de un nivel de luz < 75. Cuando esa condición se cumple, se emite una alerta para avisar de que hay que encender las luces.

El botón B está programado para detener el proceso de monitorización. Al pulsarlo, detiene la ejecución de esa rama del programa.

<center>

![Bloque 'cuando se pulsa el boton'](../img/programacion/ublocks/B_pulsa_bot.gif)

*Bloque 'cuando se pulsa el boton'*

</center>

[Descargar el programa](../ejemplos/cuando_pulsa_boton.ubp)

El bloque 'nivel de luz' se encuentra en la libreria 'Sensores básicos' y el bloque 'deten las otras tareas' se explica un poco mas abajo.

* ![](../img/programacion/ublocks/C/c5.png)  El bloque ```RETURN``` se utiliza para devolver el valor especificado en su área de entrada. El valor retornado puede ser cualquier tipo de dato. Aunque es posible utilizar el bloque ```RETURN``` en cualquier parte de un programa para mostrar un valor, de forma similar al bloque ```di```, su uso correcto y más común es en una función (o bloque personalizado) para devolver un valor como resultado del proceso realizado. Hay que tener en cuenta que los bloques colocados después del bloque ```RETURN``` no se ejecutarán.

* ![](../img/programacion/ublocks/C/c6.png)  Este bloque tipo C es un bucle que se utiliza para ejecutar los bloques colocados dentro de él, hasta que la condición booleana especificada se convierte en verdadera. En ese momento, se ejecutará el siguiente bloque después del bloque en forma de C.

En el ejemplo vemos como se monitoriza si se ha pulsado el botón A enviando un mensaje

<center>

![Bloque 'repetir hasta que'](../img/programacion/ublocks/B_repetir.png)

*Bloque 'repetir hasta que'*

</center>

* ![](../img/programacion/ublocks/C/c7.png)  Este bloque, y su par relacionado ![](../img/actividades/A03/C/c8.png), se utilizan para controlar el hilo de ejecución del programa. Este bloque detiene la ejecución de todos los bloques de los que forma parte, o que están bajo el mismo bloque sombrero. Una vez ejecutado este bloque en un grupo de bloques, no se ejecutará nada más en ese grupo.

En el ejemplo, el grupo de bloques de la derecha está en un bucle continuo que cuenta hacia atrás y decrementa su variable local ```numero```. El grupo de bloques de la izquierda también está en un bucle continuo, contando hacia abajo y decrementando su variable local ```numero```. Cuando la cuenta atrás alcanza el valor 7 se cumple la condición del ```else if``` y se detiene la cuenta del bloque derecho, mientras que la secuencia del bloque izquierdo continua su ejecución hasta que se cumpla la condición del ```if``` que será cuando se alcance el número 2, momento en que se detiene esta tarea.

Podemos comprobar como el último bloque ```di``` de la secuencia de la izquierda **NUNCA** se ejecuta porque una vez que el bloque 'deten esta tarea' se ejecuta, todas las actividades de este bloque izquierdo terminan.

<center>

![Bloques 'deten esta tarea' y 'deten las otras tareas'](../img/programacion/ublocks/B_deten_tar.gif)

*Bloques 'deten esta tarea' y 'deten las otras tareas'*

</center>

Podemos observar como desaparece el marco verde de cada bloque cuando su tarea finaliza indicando precisamente eso, que el bloque no se está ejecutando.

[Descargar el programa](../ejemplos/deten_tareas.ubp)

## <FONT COLOR=#007575>**Bloques de 'Entrada' para los botones**</font>

* ![](../img/programacion/ublocks/B/b1.png) y ![](../img/actividades/A03/B/b2.png)  Devuelve el estado del botón A o B. ```true``` = pulsado y ```false``` = no pulsado.
* ![](../img/programacion/ublocks/B/b3.png) equivalente al bloque ![](../img/actividades/A03/B/b4.png) cuando lo configuramos con el pin 26, que es el correspondiente al logotipo ![](../img/actividades/A03/B/b5.png).  Devuelve el estado del logo. ```true``` si lo tocamos (equivale a pulsador A o B pulsado) y ```false``` cuando no lo tocamos. Estos bloques están disponibles dentro la 'Libreria' 'Sensores[ ]' y aparece como 'Touch (microbit)'. El bloque para configurar el número de pin tiene su sentido en la existencia de sensores táctiles en el borde de placa, como veremos mas adelante.

En el ejemplo vemos como chequear el estado de los botones mediante la sentencia ```IF```.

<center>

![Bloques para chequear el estado de los botones](../img/programacion/ublocks/B_che_bot.gif)

*Bloques para chequear el estado de los botones*

</center>

[Descargar el programa](../ejemplos/chequeo_botones.ubp)

## <FONT COLOR=#007575>**Graficado de datos**</font>
En MicroBlocks es relativamente sencillo trabajar los datos de forma gráfica y para ello disponemos de un bloque para indicar el dato que queremos ver de manera gráfica y un icono en el menú que abre la ventana flotante 'Gráfico de datos'.

<center>

![Bloque e icono para mostrar 'Gráfico de datos'](../img/programacion/ublocks/graph/bloque_grafico.png)  
*Bloque e icono para mostrar 'Gráfico de datos'*

</center>

<a name="item0"></a>

[Bloque](#item1)
<br> [Panel gráfico](#item2)</br><br>
[Opciones del panel gráfico](#item3)</br>

<a name="item1"></a>

<FONT COLOR=#AA0000>Bloque</font>

Está disponible en el menú 'Salida'.

* ![](../img/programacion/ublocks/graph/bloque.png). Graficará el valor introducido, en el panel de visualización de gráficos de datos. Se puede graficar cualquier tipo de dato: números, valores de pines digitales y analógicos, salidas de sensores, etc. Si tenemos que representar gráficamente más de un dato, hacemos clic en el triángulo negro para mostrar campos de datos adicionales. Se pueden graficar hasta seis valores simultáneos con diferentes colores.

La representación gráfica sólo es posible en el IDE. Por lo tanto, sólo es posible realizar gráficos mientras el microdispositivo está conectado al ordenador. Si intentamos realizar un gráfico mientras no está conectado al ordenador, aparecerá el mensaje "Placa no conectada".

[Volver](#item0)
<a name="item2"></a>

<FONT COLOR=#AA0000>Panel gráfico</font>

Se activa desde el icono y tiene el siguiente aspecto:

<center>

![Panel 'Gráfico de datos'](../img/programacion/ublocks/graph/panel.png)  
*Panel 'Gráfico de datos'*

</center>

El panel **Gráficos de datos** muestra los valores utilizados con el bloque de gráficos. El eje y del panel puede escalarse utilizando los controles de zoom del propio panel, y el eje x se desplazará lateralmente a medida que se grafiquen más datos.

La ventana de visualización del gráfico se puede redimensionar con el control situado en la esquina inferior derecha y puede colocarse en cualquier lugar de la ventana del IDE.

Tras el registro de cualquier dato, la ventana de visualización de gráficos puede cerrarse y abrirse, si es necesario, sin que se pierda ningún dato ni la imagen visualizada, aunque si pierde la reconfiguración realizada en la misma, como la posición del cero, el tamaño, etc. Además, es posible desconectar y volver a conectar el dispositivo en uso, sin perder los datos del gráfico.

En la animación vemos como funciona lo indicado. El escalado con la lupa del menos amplia el rango de valores del eje y, con la lupa del mas lo disminuye y la lupa del igual restaura la situación inicial tras el redimensionado de la ventana.

<center>

![Funcionamiento de 'Gráfico de datos'](../img/programacion/ublocks/graph/func_panel.gif)  
*Funcionamiento de 'Gráfico de datos'*

</center>

[Volver](#item0)
<a name="item3"></a>

<FONT COLOR=#AA0000>Opciones del panel gráfico</font>

Se accede haciendo clic con el botón derecho del ratón en cualquier zona del panel. Si tenemos el cursor del ratón sobre la zona de las lupas no funcionará.

<center>

![Opciones de 'Gráfico de datos'](../img/programacion/ublocks/graph/opciones_panel.png)  
*Opciones de 'Gráfico de datos'*

</center>

El menú de opciones del gráfico permite controlar la visualización de los ejes, así como la importación/exportación de datos y el ajuste de la frecuencia de muestreo de datos.

* **limpiar gráfico**. Borra cualquier gráfico de la ventana de visualización de datos.
* **cero abajo**. Sitúa el punto de origen del eje y en la parte inferior del área de visualización del gráfico.
* **exportar datos a archivo CSV**. Permite guardar los datos del gráfico en formato CSV. Se exportan los últimos diez mil (10000) valores.
* **importar datos desde archivo CSV**. Permite cargar datos CSV desde el ordenador en el que se está ejecutando MicroBlocks. Los datos importados se grafican y se muestran en el 'Gráfico de datos'. Es posible importar 10000 valores. Si tenemos mas de un dato para graficar, estos no se exportan individualmente sino todos juntos eparados por comas.
* **copiar datos del gráfico al portapapeles**. Se trata de una función avanzada que permite copiar en el portapapeles los últimos 10000 valores utilizados con el bloque gráfico.
* **ajustar latencia del puerto serie**. Se trata de otro función avanzada que permite establecer la frecuencia de muestreo de datos o latencia entre 1 y 20ms. Los números más bajos dan como resultado frecuencias de muestreo más altas.

Los archivos CSV (del inglés comma-separated values) son un tipo de documento no estandarizado que tiene la idea básica de separar los campos de datos por una coma, de ahí su nombre [Valores separados por comas](https://es.wikipedia.org/wiki/Valores_separados_por_comas)

Vamos a ver un ejemplo de uso en el que se muestran de forma gráfica una serie de números aleatorio entre 1 y 100. El programa y el gráfico son:

<center>

![Ejemplo de 'Gráfico de datos'](../img/programacion/ublocks/graph/ejemplo.png)  
*Ejemplo de 'Gráfico de datos'*

</center>

[Descargar el programa](../ejemplos/grafico_aleatorios.ubp)

## <FONT COLOR=#007575>**Pines**</font>
En el menú 'Pines' disponemos de seis bloques que vamos a describir a continuación.

* ![](../img/programacion/ublocks/pines//p/p1.png). Devuelve el valor (verdadero o falso) del pin digital indicado. Podemos acceder a la configuración pullup 'true/false' haciendo clic en el triángulo negro del extremo derecho, que se expande a ![](../img/programacion/ublocks/pines//p/p1a.png) sin pullup o bien ![](../img/programacion/ublocks/pines//p/p1b.png) con pullup. La configuración pullup a ```true``` fuerza la señal alta en caso de fluctuaciones de tensión en el pin.

Vamos a ver un ejemplo de uso del bloque. El pin digital P0 lo leemos continuamente y los resultados se muestran y grafican mientras se va mostrando si el pin está en estado cero (false) o uno (true). El pullup está activado por lo que el estado normal de la línea es true o alto. El programa es:

<center>

![Ejemplo de uso del bloque 'lectura digital'](../img/programacion/ublocks/pines/pines1.png)  
*Ejemplo de uso del bloque 'lectura digital'*

</center>

[Descargar el programa](../ejemplos/func_B_lect_digit.ubp)

En la animación vemos el programa en funcionamiento y podemos observar los cambios de estado tanto en modo texto como en modo gráfico.

<center>

![Ejemplo de uso del bloque 'lectura digital'](../img/programacion/ublocks/pines/func_B_lect_digit.gif)  
*Ejemplo de uso del bloque 'lectura digital'*

</center>

* ![](../img/programacion/ublocks/pines//p/p2.png). Devuelve el valor (0 - 1023) del pin analógico indicado. Devuelve el valor del pin analógico especificado como un número en el rango 0-1023. Se puede acceder a la configuración pullup true/false haciendo clic en el triángulo negro del extremo derecho. El ajuste pullup fuerza la señal a alto en caso de fluctuaciones de voltaje en el pin.

Reutilizamos el ejemplo anterior cambiando el bloque por el de lectura analógica. El pin analógico 0 se lee continuamente y los resultados se muestran y se representan gráficamente. El pin 0 no está conectado a nada durante la prueba actuando como antena de la entrada analógica. El Pullup NO está habilitado, lo que significa que el estado de la señal de la línea fluctúa constantemente.

<center>

![Ejemplo de uso del bloque 'lectura analógica'](../img/programacion/ublocks/pines/pines2.png)  
*Ejemplo de uso del bloque 'lectura analógica'*

</center>

[Descargar el programa](../ejemplos/func_B_lect_analog.ubp)

En la animación vemos el programa en funcionamiento y podemos observar los cambios de estado tanto en modo texto como en modo gráfico.

<center>

![Ejemplo de uso del bloque 'lectura analógica'](../img/programacion/ublocks/pines/func_B_lect_analog.gif)  
*Ejemplo de uso del bloque 'lectura analógica'*

</center>

* ![](../img/programacion/ublocks/pines//p/p3.png). Establece el valor (verdadero o falso) del pin digital indicado. Establece el estado del pin digital especificado como verdadero o falso. En un dispositivo de 3.3V, un valor alto pondrá 3.3V, y un valor bajo pondrá 0V en el pin.

Se programan dos bucles, uno que se repite cinco veces para cambiar P0 entre 0 y 1 y el otro que se repite indefinidamente leyendo el estado del pin 1 y se representa graficamente. La lectura se hace en P1 porque se hacemos la lectura en P0 mientras está cambiando, podría afectar a su estado. El circuito a montar es simplemente conectar con un cable P0 y P1.

<center>

![Circuito para probar 'pon pin digital'](../img/programacion/ublocks/pines/pines3.png)  
*Circuito para probar 'pon pin digital'*

</center>

El programa es el siguiente:

<center>

![Ejemplo de uso del bloque 'pon pin digital'](../img/programacion/ublocks/pines/pines4.png)  
*Ejemplo de uso del bloque 'pon pin digital'*

</center>

[Descargar el programa](../ejemplos/func_B_pon_pin.ubp)

En la animación vemos el programa en funcionamiento y podemos observar los cambios de estado tanto en modo texto como en modo gráfico.

<center>

![Ejemplo de uso del bloque 'lectura analógica'](../img/programacion/ublocks/pines/func_B_pon_pin.gif)  
*Ejemplo de uso del bloque 'lectura analógica'*

</center>

* ![](../img/programacion/ublocks/pines//p/p4.png). Establece el valor (0 - 1023) del pin analógico indicado. Genera PWM en el pin indicado con valores de 0 a 1023. El PWM funciona encendiendo y apagando el pin rápidamente. La potencia se controla variando el ciclo de trabajo o duty cycle, que es el porcentaje de tiempo durante cada ciclo que el pin está en alto. Un valor de 0 significa que el pin está apagado, mientras que un valor de 1023 significa que está a plena potencia (es decir, el pin está encendido el 100% del tiempo). Un valor de 512 da como resultado un ciclo de trabajo del 50%; que indica que el pin está encendido la mitad del tiempo y apagado la otra mitad.

Cuando veamos algún dispositivo analógico será el momento de ver algún ejemplo de uso de este bloque. Por ahora podemos ver este [video](https://wiki.microblocks.fun/reference_manual/pins/microbit_pwmloop.mp4) de la documentación oficial en el que se aprecia como se controla con PWM la velocidad de giro de un ventilador a partir de las variaciones que hagamos en un potenciómetro.

* ![](../img/programacion/ublocks/pines//p/p5.png). Devuelve el número total de pines analógicos soportados por el dispositivo.
* ![](../img/programacion/ublocks/pines//p/p6.png). Devuelve el número total de pines digitales soportados por el dispositivo.

El programa siguiente muestra el tipo de dispositivo conectado y el tipo y número de pines de que dispone.

<center>

![Ejemplo de uso de los bloques 'pines analógicos y pines digitales'](../img/programacion/ublocks/pines/pines_A_D.png)  
*Ejemplo de uso de los bloques 'pines analógicos y pines digitales'*

</center>

## <FONT COLOR=#007575>**Libreria NeoPixeles**</font>
Los NeoPixels son pequeños módulos LED que combinan LEDs rojos, verdes y azules montados en un solo encapsulado con un chip controlador. Los NeoPixels pueden ser controlados individualmente por una sola línea de datos desde un dispositivo microcontrolado para crear diferentes colores y patrones. Un solo pin del microcontrolador puede controlar docenas (o incluso cientos) de NeoPixels. Los NeoPixels se encuentran en muchas configuraciones diferentes, como son anillos, barras, matrices y tiras flexibles.

* ![](../img/programacion/ublocks/NeoP//bNeo/b1.png). Configura el pin de conexión de los Neopixels. Este bloque configura un dispositivo NeoPixel especificando cuántos LEDs hay en el dispositivo y qué pin se utilizará para controlarlos. El bloque debe ejecutarse antes de hacer nada con cualquiera de los otros bloques NeoPixel.

El bloque se expande a ![](../img/programacion/ublocks/NeoP//bNeo/b2.png) para el trabajo con Neopixels blancos.

* ![](../img/programacion/ublocks/NeoP//bNeo/b3.png). Establece los colores de los diez primeros NeoPixels. Es especialmente útil cuando se utiliza con placas o tiras con este número de LEDs. La secuencia de numeración (1-10) es de izquierda a derecha y de arriba a abajo. La configuración del color se hace desde la paleta que se muestra sin poder establecer mayor precisión. La paleta muestra los valores RGB en decimal.

<center>

![](../img/programacion/ublocks/NeoP//bNeo/b4.png)

</center>

* ![](../img/programacion/ublocks/NeoP//bNeo/b5.png). Apaga todos los LEDs. Los pone a color negro.
* ![](../img/programacion/ublocks/NeoP//bNeo/b6.png). Pone todos los LEDs con el color indicado.
* ![](../img/programacion/ublocks/NeoP//bNeo/b7.png). Pone el número de LED especificado del color indicado. Los LEDs se numeran secuencialmente comenzando por uno.
* ![](../img/programacion/ublocks/NeoP//bNeo/b8.png). Desplaza la secuencia de colores NeoPixel el número de NeoPixels indicado. Los colores al final de la secuencia se desplazan y se insertan al principio de la secuencia. Si los NeoPixels forman un círculo, los colores giran alrededor del círculo. El argumento determina el número de posiciones que se desplazan los colores. Un valor negativo hará que los NeoPixels roten en la dirección opuesta.
* ![](../img/programacion/ublocks/NeoP//bNeo/b9.png). Devuelve un color definido especificando los valores de rojo (R), verde (G) y azul (B) entre 0 y255. El bloque puede utilizarse en cualquier bloque que reciba una entrada de color. Los valores inferiores a 40 pueden provocar que el LED no se encienda nada.
* ![](../img/programacion/ublocks/NeoP//bNeo/b10.png). Devuelve un color aleatorio. El bloque puede utilizarse en cualquier bloque que reciba una entrada de color.

## <FONT COLOR=#007575>**Sonidos**</font>

<a name="item0Ton"></a>

[Tonos](#item1Ton)
<br> [Politonos](#item2Ton)</br>

En MicroBlocks tenemos tres opciones de reproducción de sonidos o música, un conjunto de librerías englobadas bajo el seudónimo "Sonido", una librería de "Politonos" y otra librería de "Tonos". En "Sonido" nos encontraremos bloques "MultiTone", opciones para reproducir mp3 o WAV, radio AM, etc. No veremos estas librerías por el momento y nos centraremos en "Tonos" y "Politonos".

[Volver](#item0Ton)
<a name="item1Ton"></a>

<FONT COLOR=#AA0000>Tonos</font>

Añadimos la libreria "**Tonos**" a nuestro entorno y nos encontramos con los siguientes bloques:

* ![](../img/programacion/ublocks/sonido/Btonos/Btonos1.png). Reproduce la nota y la octava y por el tiempo indicados.
* ![](../img/programacion/ublocks/sonido/Btonos/Btonos2.png). Reproduce la nota indicada por el número de tecla en el teclado del piano (0-127) donde el Do central es 60. Este bloque es útil cuando se realizan transformaciones matemáticas de la música. MIDI es la abreviatura de "Musical Instrument Digital Interface", que se traduce como "Interfaz digital de instrumentos musicales", y es un estándar de la industria para controlar sintetizadores, cajas de ritmos y otros dispositivos musicales electrónicos.
* ![](../img/programacion/ublocks/sonido/Btonos/Btonos3.png). Reproduce la nota especificada en Hertz (Hz) durante el tiempo indicado.
* ![](../img/programacion/ublocks/sonido/Btonos/Btonos4.png). Reproduce el tono indicado en Hz.
* ![](../img/programacion/ublocks/sonido/Btonos/Btonos5.png). Detiene la reproducción del tono actual.
* ![](../img/programacion/ublocks/sonido/Btonos/Btonos6.png). Especifica el pin al que está conectado un zumbador piezoeléctrico o unos auriculares. En placas con altavoces integrados, se utilizará el altavoz integrado si se omite este bloque.

[Volver](#item0Ton)
<a name="item2Ton"></a>

<FONT COLOR=#AA0000>Politonos</font>

El formato [RTTTL](https://en.wikipedia.org/wiki/Ring_Tone_Text_Transfer_Language) (del inglés, Ring Tone Text Transfer Language) fue desarrollado por Nokia para codificar tonos de llamada a teléfonos móviles. El formato RTTTL es una cadena dividida en tres secciones: encabezado (nombre o título), valor predeterminado y datos. Por ejemplo, la siguiente cadena de texto se corresponde con la Intro de Donkey Kong:

*d=4,o=5,b=140:8a#,8p,8d6,16p,16f.6,16g.6,16f.6,8a#,8p,8d6,16p,16f.6,16g.6,<br>16f.6,8a#,8p,8d6,16p,16f.6,16g.6,16f.6,8a#,8p,8d6,16p,16f.6,16g.6,16f.6*</br>

Añadimos la libreria "**Politonos**" a nuestro entorno y nos encontramos con los siguientes bloques:

* ![](../img/programacion/ublocks/sonido/BPoli/BPolitonos1.png). Reproduzca la cadena de tono de llamada indicada.
* ![](../img/programacion/ublocks/sonido/BPoli/BPolitonos2.png). Devuelve el nombre del tono de llamada que se está reproduciendo actualmente.

Para reproducir una melodia simplemente la copiamos en el bloque ```toca el politono```.

Existen páginas de donde se pueden descargar tonos, o incluso podemos hacerlo nosotros mismos. A continuación ponemos algunos enlaces:

* [RTTTL Ringtone Downloads](https://picaxe.com/rtttl-ringtones-for-tune-command/) de Picaxe.
* Colecciones de [ArcadeTones](http://arcadetones.emuunlim.com/) clasificados por temas.
* Archivo [NokringTunes.txt](http://microblocks.fun/mbtest/NokringTunes.txt) que contiene más de once mil melodías en formato Nokring. 

Una vez descargado lo abrimos y buscamos la melodia para copiar y pegar en el bloque.

## <FONT COLOR=#007575>**Mis bloques. Ampliación de sonidos**</font>

<a name="item0mis"></a>

[Mis bloques](#item1mis)
<br> [Ampliación de sonidos](#item2mis)</br>

Aprenderemos a crear nuestros propios bloques (funciones) y ampliaremos el tema de sonidos para ver los que están definidos en el propio programa, algunos de los cuales utilizan la definición de bloques.

[Volver](#item0mis)
<a name="item1mis"></a>

<FONT COLOR=#BB00FF><font size="5"><b>Mis bloques</font color></font size></b>

Vamos a ver como trabajar con esta interesante funcionalidad. Acceder a ellos es sencillo ya que están en el menú de la aplicación. Basta con hacer clic en el apartado de color azul claro y veremos los dos bloques disponibles. Haciendo clic en cualquiera de ellos se nos abre una pequeña ventana emergente para ponerle un nombre, que por defecto es MyBlock.

<center>

![Mis bloques](../img/programacion/ublocks/mis_b/mis1.png)  
*Mis bloques*

</center>

Observamos que se pueden crear dos tipos de bloques:

* de comando. ![](../img/programacion/ublocks/mis_b/b1.png). Este bloque es en realidad un botón y al hacer clic sobre el mismo se inicia el proceso de creación de un bloque personalizado (función).
* reportador. ![](../img/programacion/ublocks/mis_b/b2.png). Este bloque también es un botón. Inicia el proceso de creación de un bloque personalizado (función) que puede devolver un resultado. Junto con este bloque se suelen utilizar los bloques del menú "Control" que veremos mas abajo.

<font size="5"><FONT COLOR=#0000FF><b><u>Descripción</u></b></font color></font size>

La principal diferencia entre el segundo y el primer bloque es que la definición del bloque personalizado que se cree en el segundo podrá devolver un valor mediante el bloque RETURN.

Esta capacidad única permitirá que el bloque personalizado se utilice en cualquier bloque en el que se espere un parámetro de entrada, y pasará el valor que informe a esa operación.

<hr width=100%  size=10 noshade="noshade">
En cuanto al uso del bloque RETURN:

Cualquier bloque colocado después de él no será ejecutado.

Pueden existir múltiples bloques RETURN, manejando diferentes condiciones y devolviendo sus valores respectivos.
<hr width=100%  size=10 noshade="noshade">

La creación de un bloque personalizado es un proceso detallado con los siguientes pasos y opciones:

* Asignación de un nombre de bloque personalizado
* Añadir parámetros y sus etiquetas
* Modificación de los tipos de parámetros
* Asignación de valores por defecto a los parámetros
* Valores de color

Los dos bloques citados de "Control" son los siguientes, que aunque de apariencia son idénticos, en realidad hay diferencias.

* ![](../img/programacion/ublocks/mis_b/b3.png).  Llama al bloque personalizado que se seleccione de la lista 'function name'. La lista de parámetros es opcional.
* ![](../img/programacion/ublocks/mis_b/b4.png).  Devuelve el resultado de la llamada del bloque personalizado que se seleccione de la lista 'function name'. La lista de parámetros es opcional.

<font size="5"><FONT COLOR=#0000FF><b><u>Operaciones comunes</u></b></font color></font size>

Antes de examinar el proceso de creación de un nuevo bloque personalizado, repasemos algunas de las operaciones habituales disponibles al trabajar con una cabecera de bloque personalizada:

* **MODO DE EDICIÓN**

Cuando se hace clic en la parte púrpura del bloque con sombrero "define" o en la parte azul claro del bloque personalizado con el nombre del bloque, se entra en modo edición. Este modo puede identificarse por el cambio de aspecto de los parámetros de la cabecera, así como por la aparición de los triángulos negros. En la animación siguiente vemos como crear, activar y desactivar la edición y como añadir y eliminar casillas o etiquetas en un bloque.

<center>

![Crear un bloque](../img/programacion/ublocks/mis_b/mis2.gif)  
*Crear un bloque*

</center>

Cada parámetro añadido debe tener un nombre diferente que MicroBlocks asigna de manera automática pero que podemos cambiar según nuestros intereses simplemente haciendo clic sobre el bloque del nombre.

<center>

![Cambios de nombre de parámetros y edición de un bloque](../img/programacion/ublocks/mis_b/mis3.gif)  
*Cambios de nombre de parámetros y edición de un bloque*

</center>

El triángulo negro de la derecha sirve para añadir parámetros y etiquetas, mientras que el de la izquierda sirve para borrarlos. Al hacer clic en el mismo, se eliminará el elemento situado más a la derecha (ya sea un parámetro o una etiqueta).

Si hay que borrar una etiqueta situada en el centro de la cabecera del bloque, basta con hacer doble clic para seleccionarla, dejarla vacia, y pulsar la tecla Supr.

* **RENOMBRAR PARÁMETROS Y ETIQUETAS**

Para cambiar el nombre de una etiqueta de un bloque personalizado o de cualquier etiqueta de la cabecera, basta con hacer doble clic para seleccionarla y, a continuación, escribir un nuevo nombre. Dado que el nombre del bloque y las etiquetas son sólo campos de texto, es posible crear nombres con varias palabras separadas por espacios o caracteres de subrayado.

Si se utilizan espacios al crear el nombre de la etiqueta, el nombre de la etiqueta resultante se tratará como etiquetas sucesivas separadas. Aunque aparezcan una tras otra y se perciban como un nombre continuo, en realidad son etiquetas de texto individuales. Esto sólo es importante si va a editarlas posteriormente.

Si se utilizan caracteres de subrayado al crear el nombre de la etiqueta, el nombre de la etiqueta resultante se tratará como una sola etiqueta.

Por lo tanto, dependiendo de cuáles sean nuestras intenciones, puede que encontremos un método u otro más adecuado a nuestras necesidades.

Para cambiar el nombre de un parámetro, hacemos clic en el área ovalada marrón del parámetro y escribimos un nuevo nombre en la ventana de edición.

* **MOSTRAR EL CONTENIDO DE UN BLOQUE PERSONALIZADO**

Una vez creado un bloque personalizado y cerrada su cabecera y definición, este aparecerá automáticamente en el área de bloques de la categoría Mis bloques. Como el bloque recién creado reside en el área Mis bloques, se verá como el formato de control o bloque informador de su definición. Para ver realmente los bloques que componen la definición del bloque personalizado, debemos hacer clic derecho en el bloque y seleccionar "mostrar definición de bloque" en el menú.

<center>

![Mostrar la definición de un bloque](../img/programacion/ublocks/mis_b/mis4.png)  
*Mostrar la definición de un bloque*

</center>

Al seleccionar esta opción, la definición del bloque personalizado aparecerá en el Área de trabajo, como apreciamos en la siguiente animación.

<center>

![Mostrar la definición de un bloque](../img/programacion/ublocks/mis_b/mis5.gif)  
*Mostrar la definición de un bloque*

</center>

Si queremos borrar la definición de un bloque de la zona de programa basta con que lo arrastremos a la zona de menú, donde observaremos como aparece un ojo tachado en color gris (indicando ocultar) en lugar de la papelera habitual.

Para elminar completamente la definición del bloque hay que escoger la opción "elimina la definición del bloque"

<font size="5"><FONT COLOR=#0000FF><b><u>Proceso de creación de un bloque personalizado</u></b></font color></font size>

<font size="3"><FONT COLOR=#006400><b>Asignar nombre al bloque</b></font color></font size>

Al hacer clic en el botón añadir bloque, se abre un cuadro de diálogo en el que se introduce el nombre del bloque personalizado.

<center>

![Creación de un bloque personalizado](../img/programacion/ublocks/mis_b/mis6.png)  
*Creación de un bloque personalizado*

</center>

Tras pulsar el botón "De acuerdo", se coloca una cabecera de definición de bloque personalizada en el área de programación.

<center>

![Bloque personalizado recien creado](../img/programacion/ublocks/mis_b/mis7.png)  
*Bloque personalizado recien creado*

</center>

Ahora todos los bloques de código que compondrán este bloque personalizado pueden colocarse bajo el bloque de cabecera, y formarán parte de la nueva función programada. Observe también que se ha colocado un nuevo bloque que representa la función personalizada en la ventana de categoría Mis Bloques con el nombre predeterminado de miBloque.

Aunque no siempre es un requisito, algunas funciones necesitarán parámetros para completar su funcionalidad programada. Éstos actuarán como entradas de la función y podrán ser utilizados por los bloques que componen el código de bloque personalizado.

<font size="3"><FONT COLOR=#006400><b>Modificación de los tipos de parámetros</b></font color></font size>

Cuando se añade un parámetro, MicroBlocks le asigna un nombre por defecto (foo, baz, etc) y un tipo por defecto (número/cadena).

<center>

![Tipos de parámetros](../img/programacion/ublocks/mis_b/mis8.png)  
*Tipos de parámetros*

</center>

Hay varios tipos de parámetros posibles: número/texto, booleano y color. Estos están disponibles para seleccionar en el menú que se abre al hacer clic en el triángulo negro que apunta hacia abajo en el bloque de parámetros oval marrón. Para los parámetros de tipo número/texto, es posible restringir sus tipos a sólo número o sólo texto. A continuación se expone un sencillo bloque que muestra datos de todos los tipos.

<center>

![Ejemplo de tipos de parámetros](../img/programacion/ublocks/mis_b/mis9.png)  
*Ejemplo de tipos de parámetros*

</center>

Vemos que el nombre de la función parece ```Datos Nombre```. De hecho, el nombre de la función es ```Datos```, mientras que ```Nombre``` es el nombre del primer parámetro. Sin embargo, dado que MicroBlocks no permite la entrada de una etiqueta seguida de otra, ha sido necesario crear primero el parámetro ```nombre```, seguido de un doble clic en el nombre de la función ```Datos``` y añadir " ```Nombre```" (espacio ```Nombre```) al final de la misma.

Esta técnica parece extraña, pero es totalmente correcta, ya que los nombres de función nunca se utilizan específicamente por sí solos como en un lenguaje de programación basado en texto. Los bloques personalizados, al igual que todos los demás, se arrastran y sueltan en el área de programación, independientemente de su nombre. No obstante, no debemos crear varios bloques personalizados en los que el nombre de la primera etiqueta sea idéntico. De hecho, **NO** podremos hacerlo, ya que MicroBlocks asignará un nombre numerado que lo hará único.

<font size="3"><FONT COLOR=#006400><b>Asignar valores por defecto a los parámetros</b></font color></font size>

Como se ve en la imágen anterior de definición de bloque personalizado, la vista final del bloque muestra valores para cada parámetro, "Juan", 55, true, y 16715550 para el color rojo. Estos valores se denominan valores por defecto y son los que hemos asignado al bloque en su cración y se pueden modificar en cualquier momento si los ponemos en modo edición.

Los valores por defecto de los tipos cadena, número y booleano se explican por sí mismos. Sin embargo, el tipo de color necesita alguna explicación mas.

Como puede verse en la muestra de resultados del bloque personalizado, el valor del color rojo se muestra como 16715550. Analicemos este valor y veamos qué representa.

Si se hace clic en el círculo de color rojo del bloque, aparece un panel de color que muestra los valores decimales de R=255, G=015 y B=030 que componen este color rojo en particular.

<center>

![Paleta de colores](../img/programacion/ublocks/mis_b/mis9.png)  
*Paleta de colores*

</center>

Si cada uno de estos valores decimales se convierte a los equivalentes hexadecimales, se obtiene:

<center>

|Color|Decimal|Hexadecimal!
|:-:|:-:|:-:|
|R|255|FF|
|G|015|0F|
|B|030|1E|

</center>

Colocamos esos tres valores hexadecimales uno a continuación del otro en el orden RGB para obtener 0xFF0F1E, y este número expresado en el sistema de numeración decimal es el 16715550.

<font size="5"><FONT COLOR=#0000FF><b><u>Ejemplo de creación de bloque personalizado</u></b></font color></font size>

Ya se ha visto que no existen bloques con diferentes iconos predefinidos como ocurre en MakeCode. Vamos a definir algunos de ellos mediante Mis Bloques.

<center>

![Creación de bloques para iconos](../img/programacion/ublocks/mis_b/mis11.png)  
*Creación de bloques para iconos*

</center>

Ahora resolver el ejercicio de corazón que late tendría el aspecto siguiente:

<center>

![Corazón que late con bloques personalizados](../img/programacion/ublocks/mis_b/mis12.png)  
*Corazón que late con bloques personalizados*

</center>

En la imagen siguiente tenemos un sencillo ejemplo de uso de función con retorno de valor mediante bloque reportador.

<center>

![Corazón que late con bloques personalizados](../img/programacion/ublocks/mis_b/mis13.png)  
*Corazón que late con bloques personalizados*

</center>

El program con el bloque multiplicador y los bloques de iconos lo tenemos a continuación.

[Descargar programa](../ejemplos/multiplicador.ubp)

<hr width=100%  size=10 noshade="noshade">

[Volver](#item0mis)
<a name="item2mis"></a>

<FONT COLOR=#BB00FF><font size="5"><b>Ampliación de sonidos</font color></font size></b>

En este punto, una vez conocido el funcionamiento de "Mis bloques" vamos a retomar el tema de sonido ampliando la información sobre RTTTL vista, aprenderemos a abrir archivos desde el menú "Fichero" relacionados y veremos ejemplos sobre el tema.

<a name="item0ampli"></a>

[Información complementaria de politonos](#item1ampli)
<br> [Abrir archivo](#item2ampli)</br>

[Volver](#item0ampli)
<a name="item1ampli"></a>

<font size="5"><FONT COLOR=#0000FF><b><u>Información complementaria de politonos</u></b></font color></font size>

Ya hemos visto como añadir la librería politonos, enlaces para obtenerlos y el uso de los mismos en MicroBlocks, pero vamos a profundizar un poco mas sobre el tema.

El formato RTTTL es una cadena dividia en tres partes: nombre, valor por defecto y datos.

* **nombre**. Es una cadena que describe el nombre del tono de llamada. En principio su longitud máxima es de 10 caracteres y no puede contener el signo de dos puntos (:).
* **valor por defecto**. Lo forman un conjunto de valores separados por comas que son los que deben cumplirse durane la ejecución del tono de llamada. Cada valor es una clave a la que se asigna con una igualdad un valor, siendo los nombre posibles: **D** (duración), **o** (octava) y **B** (ritmo o tempo)
* **datos**. Es un conjunto de cadenas de caracteres separadas por comas, estando cada cadena formada por una *duración*, un *tono*, una *octava* y opcionalmente *puntos* que aumentan la duración de la nota a la mitad.

Un ejemplo de tono RTTTL puede ser:

```Abba - Money Money Money: d=4,o=5,b=112:8e7,8e7,8e7,8e7,8e7,8e7,16e6,16a6,16c7,16e7,8d#7,8d#7,8d#7,8d#7,8d#7,8d#7,16f6,16a6,16c7,16d#7,d7,8c7,8a6,8c7,c7,2a6,32a6,32c7,32e7,8a7```

donde se pueden distinguir facilmente las tres partes separadas por dos puntos (:):

* **nombre**. Abba - Money Money Money.
* **valor por defecto**. d=4,o=5,b=112 (d = duración; o = octava y b = tempo o ritmo). Mas abajo se describen mas estos conceptos.
* **datos**. Las notas separadas por comas y formadas por una duración, una nota [a (La), b (Si), c (Do), d (Re), e (Mi), f (Fa) o g (Sol)] y la indicación de la octava, que si no se indica se aplica el valor predeterminado.

La duración de las notas es:

* **1** - nota entera
* **2** - media nota
* **4** - cuarto de nota
* **8** - octavo de nota (octava)
* **16** - dieciseisavo de nota
* **32** - treintaidosavo de nota

Los tonos pueden ser:

* **P** – descanso o pausa
* **A** – A (La)
* **A#** – A♯ B♭ (La#/Si♭)
* **B** – B/C♭ (Si/Do♭)
* **C** – C (Do)
* **C#** – C♯/D♭ (Do♯/Re♭)
* **D** – D (Re)
* **D#** – D♯/E♭ (Re♯/Mi♭)
* **E** – E/F♭ (Mi/Fa♭)
* **F** – F/E♯ (Fa/Mi♯)
* **F#** – F♯/G♭ (Fa♯/Sol♭)
* **G** – G (Sol)
* **G#** – G♯/A♭ (Sol♯/La♭)

En formato RTTTL se permiten octavas comenzando desde la A por debajo del do medio y subiendo cuatro octavas. Esto se debe a la imposibilidad de los teléfonos móviles para reproducir ciertos tonos de forma audible. Las octavas están numeradas desde el tono
más bajo hasta el tono más alto de 4 a 7. La octava debe dejarse fuera de la notación en el caso de un descanso o pausa en el patrón.


[Volver](#item0ampli)
<a name="item2ampli"></a>

<font size="5"><FONT COLOR=#0000FF><b><u>Abrir archivo</u></b></font color></font size>

En MicroBlocks tenemos disponibles una serie de ejemplos resueltos a los que se puede acceder des el menú "Fichero" escogiendo la opción "Abre" y dirigiendonos a la carpeta ejemplos, si no estamos ya en ella.

<center>

![Ejemplos de música y sonido en MicroBlocks](../img/programacion/ublocks/sonido/ej_music.png)  
*Ejemplos de música y sonido en MicroBlocks*

</center>

Podemos abrir cualquiera de los ejemplos de los directorios marcados. En el directorio "Sonido" basicamente hay diferentes ejemplos que trabajan con sonidos y vamos a abrir por ejemplo TempoMeter, que es un programa que si aplaudimos a un ritmo constante nos devuelve el tempo en pulsaciones por minuto (ppm). Además podemos verlo graficamente.

<center>

![Ejemplo de sonido TempoMeter](../img/programacion/ublocks/sonido/ej_tempometer.png)  
*Ejemplo de sonido TempoMeter*

</center>

En el directorio "Music" hay varios ejemplos en los que se utilizan bloques propios. En la figura vemos el ejemplo HarryPotter mostrando la definición de uno de los bloques.

<center>

![Ejemplo de sonido HarryPotter](../img/programacion/ublocks/sonido/ej_harrypotter.png)  
*Ejemplo de sonido HarryPotter*

</center>

A simple vista se aprecia la utilidad de las funciones para simplificar el código y hacer mas sencilla la depuración del mismo.

Otro ejemplo con todos los bloques desplegados lo vemos para el caso de Bach Bouree, que se corresponden con la pieza musical integrada como quinto movimiento en la Suite en Mi menor para Laúd BWV 996 Bourrée en mi menor compuesta por Johann Sebastian Bach.

<center>

![Ejemplo de sonido Bach Bouree](../img/programacion/ublocks/sonido/ej_bach.png)  
*Ejemplo de sonido Bach Bouree*

</center>

El programa sin los bloques expandidos ni los comentarios es tan simple como:

<center>

![Ejemplo de sonido Bach Bouree](../img/programacion/ublocks/sonido/ej_bach1.png)  
*Ejemplo de sonido Bach Bouree*

</center>

## <FONT COLOR=#007575>**Comunicaciones**</font>

* ![](../img/programacion/ublocks/comm/comm1.png). Abre el puerto serie a la velocidad en baudios especificada. Esto es necesario antes de empezar a utilizar la comunicación por puerto serie. El soporte de puerto serie NO está disponible para dispositivos micro:bit v1 debido a la falta de soporte de hardware.
* ![](../img/programacion/ublocks/comm/comm2png). Cierra el puerto y finaliza las comunicaciones serie.
* ![](../img/programacion/ublocks/comm/comm3.png). Devuelve una matriz de bytes de datos leídos desde el puerto serie. En los casos en que estos puedan representar valores de caracteres, es necesario convertirlos utilizando la cadena del bloque unicode en letras reales.

<center>

![](../img/programacion/ublocks/comm/comm4.png)

</center>

Las matrices de bytes contienen bytes con valores de 0 a 255.

* ![](../img/programacion/ublocks/comm/comm5.png). Escribe un byte, una cadena o una matriz de bytes en el puerto serie. Los datos a escribir deben ser 128 bytes o menos. En caso de que querer escribir una matriz de bytes en el puerto serie, podemos crearla fácilmente con el bloque ![](../img/programacion/ublocks/comm/comm6.png) del menú Datos. A continuación se muestra una imagen de la salida de ese bloque:

<center>

![](../img/programacion/ublocks/comm/comm7.png)

</center>

* ![](../img/programacion/ublocks/comm/comm8.png). Escribe una matriz de bytes en el puerto serie comenzando en el bytes dado y devuelve el número de bytes escritos. Utilizando este bloque, un bucle de MicroBlocks puede escribir eficientemente una matriz de bytes larga en el puerto serie.

## <FONT COLOR=#007575>**Magnetómetro y acelerómetro**</font>
En MicroBlocks solamente disponemos de unos cuanto bloques relacionados con el tema y los encontramos dentro de la Librería "Sensores básicos". Estos son:

* ![](../img/programacion/ublocks/compass/b1.png) ![](../img/programacion/ublocks/compass/b2.png) ![](../img/programacion/ublocks/compass/b3.png). Estos tres bloques informan de los valores de inclinación en los tres ejes. El rango normal de valores es de -100 a +100, pero los valores pueden alcanzar valores entre -200 y 200 cuando se sacude. (100 equivale a 1G de aceleración).

<center>

![](../img/programacion/ublocks/compass/pitch_roll.png)

</center>

Podemos hacer un sencillo nivel con alguna referencia al eje Z. El nivel funciona igual que en el caso de MakeCode pero si ponemos la micro:bit vertical veremos un cero como valor de Yaw y como se alterna una V con una X en la pantalla.

<center>

![Nivel](../img/programacion/ublocks/compass/nivel.png)

</center>

[Descargar el programa](../ejemplos/nivel_uB.ubp)

* ![](../img/programacion/ublocks/compass/b4.png). Devuelve la aceleración total (o "fuerza G") experimentada por la micro:bit independientemente de la dirección. Siempre es positiva, con un rango de 0 a 346. En el ejemplo vemos el resultado de mover la micro:bit tanto en forma de texto como en forma de gráfico.

<center>

![Midiendo g](../img/programacion/ublocks/compass/acel.png)

</center>

<center>

![Midiendo g](../img/programacion/ublocks/compass/acel.gif)

</center>

[Descargar el programa](../ejemplos/aceleracion_uB.ubp)

* ![](../img/programacion/ublocks/compass/b5.png). Por defecto, el rango completo del acelerómetro es +/- 200, siendo 100 = 1G, que es la aceleración de la gravedad en la Tierra. Esta es la aceleración que experimenta la micro:bit cuando permanece inmóvil sobre una mesa. El rango por defecto es suficiente para medir la inclinación o detectar sacudidas suaves. Pero también puede ser interesante medir aceleraciones mayores, como la rápida deceleración... que se produce cuando chocan objetos. Este bloque avanzado permite cambiar el rango de aceleración máxima para medir esas aceleraciones mayores. Establecer su valor, por ejemplo en 4G hace que se divida por 4 el resultado final. Lo podemos probar facilmente introduciendo el bloque en el ejemplo anterior.

* ![](../img/programacion/ublocks/compass/b6.png). Informa de la intensidad del campo magnético detectado por el acelerómetro. El rango es aproximadamente 0-100000 y el sensor es lo suficientemente sensible como para detectar el campo magnético de la Tierra o el campo magnético de la corriente eléctrica que fluye en un cable, si el cable está cerca del chip. A continuación vemos un ejemplo.

<center>

![Campo magnético](../img/programacion/ublocks/compass/magnet.png)

</center>

[Descargar el programa](../ejemplos/campo_magnetico_uB.ubp)

## <FONT COLOR=#007575>**Sensores básicos**</font>
El bloque está en una librería que acompaña al programa que tiene por nombre "Sensores básicos" y que tenedremos que añadir a las librerias del proyecto para tenerlos disponibles. La mayoría de ellos ya se han explicado en otros apartados y ahora vamos a ver este en concreto.

* ![](../img/programacion/ublocks/nivel_luz.png). El nivel de luz tiene un rango de 0 a 1023. Los sensores de luz varían en sensibilidad, incluso entre placas micro:bits de la misma versión, por lo que tendremos que experimentar para descubrir el rango de trabajo del sensor de luz de nuestra placa. Este bloque trabaja con las lecturas de los LEDs de la pantalla.
* ![](../img/programacion/ublocks/temp.png). La temperatura se indica en grados Celsius. El rango del sensor de temperatura suele ser como mínimo de 0 a 50 °C. Estos sensores de temperatura integrados no están calibrados y suelen variar de una placa a otra. Podemos comparar la medida obtenida con nuestra placa con la de un termómetro externo y fiable para poder obtener la temperatura real. Una vez calibrado no será peor que muchos sensores de temperatura integrados, que tienen una precisión de hasta uno o dos grados centígrados.

## <FONT COLOR=#007575>**Libreria de Gráficos y pantallas**</font>
Si accedemos a agregar libreria nos aparece una ventana donde se ofrecen todas las librerias disponibles, y entre ellas el grupo de "Gráficos y pantallas" que vemos:

<center>

![Grupo de librerias de Gráficos y Pantallas](../img/programacion/ublocks/LCD/lib_g.png)  
*Grupo de librerias de Gráficos y Pantallas*

</center>

Accediendo al grupo indicado vemos las librerias disponibles y entre las mismas está la que buscamos para la LCD:

<center>

![Libreria LCD Display](../img/programacion/ublocks/LCD/lib_LCD.png)  
*Libreria LCD Display*

</center>

Una vez añadida la librería se muestran los bloques que tenemos disponibles para trabajar con la LCD:

<center>

![Bloques LCD Display](../img/programacion/ublocks/LCD/bloques_LCD.png)  
*Bloques LCD Display*

</center>

En MicroBlocks la línea superior es la 1 y la inferior la 2 y las columnas se numeran desde la 1 hasta la 16. Si ponemos como columna inicial la 0 no veremos nada en la pantalla. Curiosamente cuando damos a una fila el valor 0, esta pasa a sustituir a la línea 2.

El ejemplo siguiente nos pone todo esto en claro.

<center>

![Ejemplo hola mundo con LCD](../img/programacion/ublocks/LCD/HM_LCD.png)  
*Ejemplo hola mundo con LCD*

</center>

[Descargar el programa](../ejemplos/Hola_mundo_LCD.ubp)

## <FONT COLOR=#007575>**Micrófono, solo en V2**</font>
En MicroBlocks la librería con los bloques para usar el micrófono se encuentra en "Sensores".

<center>

![Localización libreria](../img/programacion/ublocks/microf/libreria.png)  
*Localización libreria*

</center>

Esta librería da soporte de micrófono, volumen y recuento de palmadas. El bloque normalmente informa de valores entre -512 y 511, con cero para silencio. En la micro:bit V2, el micrófono debe estar encendido antes de su uso.

Los bloques disponibles son:

<center>

![Bloques para micrófono](../img/programacion/ublocks/microf/bloques.png)  
*Bloques para micrófono*

</center>

## <FONT COLOR=#007575>**Radio**</font>
MicroBlocks dispone de libreria para trabajar con radio y que se añade haciendo clic en la opción "+" de la entrada de menú "Librerias" y seleccionándola en la ventana emergente.

<center>

![Libreria radio](../img/programacion/ublocks/radio/lib_radio.png)  
*Libreria radio*

</center>

Micro:bit y otras placas con chips Nordic soportan un sistema de mensajería por radio peer-to-peer (entre iguales) fácil de usar. En este caso es el mismo sistema que utiliza MakeCode, por lo que los programas MicroBlocks y Makecode pueden intercambiar información por radio.

Un mensaje de radio consiste en una cadena corta de texto, un número, o ambos (un par).

El uso de diferentes códigos de grupo (0-255) permite que varios proyectos de radio funcionen simultáneamente en el aula. Un grupo es un canal de comunicación independiente. Cada microcontrolador envía y recibe mensajes a otros miembros de su propio grupo. Cualquier mensaje intercambiado por otros grupos es ignorado.

Los bloques de esta libreria son:

<center>

![Bloques de la libreria radio](../img/programacion/ublocks/radio/bloq_lib_radio.png)  
*Bloques de la libreria radio*

</center>

