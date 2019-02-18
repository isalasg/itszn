# Tópicos Avanzados de Programación

### @color[brown](Unidad I)
### @color[brown](Eventos)

---
### @color[brown](Contenido)
- 1.1. Tipos de eventos
- 1.2. Generación y propagación de eventos
- 1.3. Métodos de control de eventos
- 1.4. Creación de eventos

---
### @color[brown](1.1 Tipos de eventos)
#### @color[orange](Introducción)
@ul
- Los eventos son todas las acciones que el usuario inicia, dar clic sobre un botón, presionar las teclas del teclado, etc. Cada vez que se produce un evento, se crea un objeto. La clase padre de los eventos, dependiendo del lenguaje puede ser @color[blue](java.awt.event) en Java o @color[blue](Sytem.EventHandler) en C#. 
@ulend

---
### @color[brown](1.1 Tipos de eventos)
#### @color[orange](Introducción)
@ul
- Eventos externos. Son aquellos producidos por el usuario, por ejemplo al dar click sobre algún control,o presionar cierta tecla.
- Eventos internos. Son aquellos producidos por el sistema o la aplicación, por ejemplo el vencimiento de un temporizador, o recepción de datos en líneas de comunicaciones.
@ulend

---
### @color[brown](1.1 Tipos de eventos)
#### @color[orange](Eventos de ventana)
@ul
- Eventos de ventana más comunes
    + Open
    + Close
    + Resize
    + Move
@ulend

---
### @color[brown](1.1 Tipos de eventos)
#### @color[orange](Eventos de teclado)
@ul
- Eventos de teclado más comunes
    + KeyPress
    + KeyUp
    + KeyDown
@ulend

---
### @color[brown](1.1 Tipos de eventos)
#### @color[orange](Eventos de ratón)
@ul
- Eventos de ratón más comunes
    + MouseClick
    + MouseDoubleClick
    + MouseHover
    + MouseEnter
    + MouseLeave
@ulend

---
### @color[brown](1.2. Generación y propagación de eventos)
#### @color[orange](Introducción)
@ul
- Se llama suscripción a un evento, cuando queremos que el Manejador de Eventos del lenguaje, esté atento al disparo de dicho evento. Por ejemplo, puede suscribirse al evento click de un botón para que la aplicación realice alguna operación cuando el usuario haga clic en el botón.
@ulend

---
### @color[brown](1.2. Generación y propagación de eventos)
#### @color[orange](Suscripción automática)
@ul
- Los lenguajes visuales actuales, pueden hacer la suscripción a los eventos de forma automática, simplemente dando doble click sobre el control (que se suscribirá al evento más común dependiendo del control), o seleccionando desde la ventana de propiedades el evento deseado. Este suscribe el control al evento y genera el método asociado al evento.
@ulend

---
### @color[brown](1.2. Generación y propagación de eventos)
#### @color[orange](Suscripción manual)
@ul
- La forma depende del lenguaje, pero en general una vez creado el control, este se suscribe al evento mediante el operador @color[green](+=), por ejemplo en C#, para suscribir un botón al evento click sería:
    + boton.Click += new System.EventHandler(boton_Click);
- donde @color[green](boton.Click) es el evento @color[green](EventHandler) es el manejador del evento de C# y @color[green](button_Click) es el método asociado al evento.
@ulend

---
### @color[brown](1.3. Métodos de control de Eventos)
@ul
- Un método de control de eventos es un procedimiento del código que determina las acciones que se han de ejecutar cuando se produce un evento, como cuando un usuario hace clic en un botón. Cuando se produce un evento, se ejecuta el controlador o los controladores de eventos que reciben dicho evento. Los eventos se pueden asignar a varios controladores, y los métodos que controlan los distintos eventos se pueden cambiar dinámicamente.
@ulend

---
### @color[brown](1.4 Creación de Eventos)
@ul
- En C# los pasos para crear un envento de forma manual son:
    + Un evento se genera a partir de un delegado, el cual mantiene la firma (sus parámetros y retorno), la misma clase donde se declara será encargada de definir la propagación del evento, donde se manda llamar como si fuese un método, respetando la firma del delegado.
@ulend


---
### @color[brown](1.4 Creación de Eventos)
@ul
- En C# los pasos para crear un envento de forma manual son:
    + Asociado a un evento, existe un método que cumple con la firma del delegado, generalmente, todos los métodos asociados a los eventos se encuentran en una clase.
@ulend

---
### @color[brown](1.4 Creación de Eventos)
@ul
- En C# los pasos para crear un envento de forma manual son:
    + Con el evento creado, el código que lo lanzará o propagará, y la clase que manejará los métodos asociados al evento, se procede a inscribir el evento, esto es, se asocia el evento del objeto al método del objeto que lo manejará. Los eventos que no han sido asociados a un método controlador, no se lanzarán, aunque se cumplan las condiciones para ello. 
@ulend

---
### @color[brown](Bibliografía)
- Programación Orientada a Objetos. Eventos, excepciones y errores. 11/04/2011. [Link](http://progra.usm.cl/apunte/materia/index.html)
- Microsoft. Procedimiento Suscribir y cancelar la suscripción a eventos. [Link](https://docs.microsoft.com/es-es/dotnet/csharp/programming-guide/events/how-to-subscribe-to-and-unsubscribe-from-events)
