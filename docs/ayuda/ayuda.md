# <FONT COLOR=#8B008B>Ayuda</font>

Esta es una sección de ayuda para iniciar una web con la plantilla y para cuando tengas problemas escribiendola. Úsalo como consulta mientras la estás redactando (la web), pero recuerda comentarlo en el `mkdocs.yml` para que no aparezca en tu web.

## <FONT COLOR=#007575>**Resumen del proceso a seguir**</font>
Crear repositorio en la nube
    • Le ponemos nombre y descripción
    • Le añadimos README.md.
    • Le añadimos Licencia MIT
    • Le añadimos .gitignore
    • Arreglamos README.md y ponemos [Acceso a contenidos]() con la dirección web que nos da en Settings → Pages
    • Le añadimos rama gh-pages
Nos dirigimos al directorio en el que vamos a trabajar y hacemos 
    • $ git clone … (añadimos la dirección https que obtenemos de Code)
Copiamos de Plantilla:
    • Carpeta docs
    • mkdocs.yml
    • Pipfile
    • .gitignore
    • requirements.txt
    • LICENSE
    • guia

Tenemos que preparar el equipo para trabajar con la plantilla. Nos situamos en la carpeta con la que vamos a trabajar, abrimos una terminal y creamos el entorno virtual e instalamos todas las dependencias con:

    • Creamos el entorno virtual: python3 -m venv env
    • Activamos el entorno virtual: source env/bin/activate
    • Instalamos las dependencias: pip install -r requirements.txt

Abrimos VSCode y configuramos mkdocs.yml para tener un índice operativo comentando todo lo pendiente.

Trabajamos el directorio Miscelanea y sus archivos para dejarlo todo funcionando.

    • Activar el entorno virtual si no está activado: source env/bin/activate
    • Correr el servidor: mkdocs serve. Si se genera el error -- ERROR   -  Config value 'plugins': The "glightbox" plugin is not installed – procedemos a instalar el plugin con ‘pip install mkdocs-glightbox’.

Cerrar Server para hacer el primer despliegue y comprobar que todo es correcto con: pipenv run mkdocs gh-deploy

## <FONT COLOR=#007575>**Aspecto final del navegador**</font>

`mkdocs.yml` -> Debe quedar el punto 4 más o menos así

```yml
...

# 4. Navegación
nav:
  - Manual de Sanp¡:
    - 1. Bloques, Scripts y Sprites: index.md
    - 1.1. Sprites y paralelismo: 1/1_1.md
    - 1.2. Anidamiento de Sprites. Anclajes y Partes: 1/1_2.md
    - 1.3. Bloques informadores y expresiones: 1/1_3.md
    - 1.4. Predicados y evaluación condicional: 1/1_4.md
    - 1.5. Variables: 1/1_5.md
  - 2. Salvando y cargando proyectos y media:
    ...

#- Ayuda:
    #- Chuleta: /ayuda/ayuda.md
    #- Chuleta de Markdown: ayuda/markdown.md
    #- Chuleta de Material Design: ayuda/material.md

 - Miscelanea:
    - Autor: Miscelanea/about.md 
    - Licencias: Miscelanea/lic.md
    - Webgrafia/Bibliografía: Miscelanea/webgrafia.md
    - Software utilizado: Miscelanea/soft.md

...
```

Tienes una ayuda básica para desenvolverte con Markdown. Y otra para poder sacarle más partido al tema Material Design:

1. [Escribir Markdown](markdown.md)
2. [Sacarle jugo al tema Material Design](material.md)

## <FONT COLOR=#007575>**Guia con mi formato y otras cosas**</font>
Establecer color, tamaño y negrita con html:

<FONT COLOR=#BB00FF><font size="5"><b>aa</font color></font size></b>

Colores para los tres primeros niveles del índice:

# <FONT COLOR=#8B008B>Nivel indice 1</font>

## <FONT COLOR=#007575>**Nivel indice 2**</font>

### <FONT COLOR=#AA0000>Nivel indice 3</font>

Idea base para imágnes y gif animados:

<center>

![aa](../img/actividades/A0x/A0x_nn.png)  
*aa*

</center>

Idea básica para imágenes y gif mas acceso a programa, enlace, etc:

<center>

![aa](../img/actividades/A0x/A0x_nn.png)  
*aa*  
Aqui ponemos acceso a programa, enlace u otra cosa

</center>

Como crear un índice de enlaces internos con html

<a name="item00"></a>

[Entrada 1](#item01)
<br> [Entrada 2](#item02)</br><br>
[Entrada 3](#item03)</br><br>
[Entrada 4](#item04)</br>

[Volver](#item00
<a name="item01"></a>

<hr width=100%  size=10 noshade="noshade">

