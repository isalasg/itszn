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
>boton.Click += new System.EventHandler(boton_Click);
- donde @color[green](boton.Click) es el evento @color[green](EventHandler) es el manejador del evento de C# y @color[green](button_Click) es el método asociado al evento.
@ulend

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Algoritmo -cont-)
- Una receta de cocina es un algoritmo; si bien podríamos cuestionar que algunos pasos son ambiguos (¿cuánto es «una pizca de sal»? ¿qué significa «agregar a gusto»?), en general las instrucciones están lo suficientemente @color[green](bien definidas) para que uno las pueda seguir sin problemas.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Algoritmo -cont-)
- La entrada de una receta son los ingredientes y algunos datos como: ¿para cuántas personas se cocinará? El proceso es la serie de pasos para manipular los ingredientes. La salida es el plato terminado.
- En principio, si una receta está suficientemente bien explicada, podría permitir preparar un plato a alguien que no sepa nada de cocina.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Algoritmo -cont-)
- El método para multiplicar números a mano que aprendimos en el colegio es un algoritmo. Dado cualquier par de números enteros, si seguimos paso a paso el procedimiento siempre obtendremos el producto.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Algoritmo -cont-)
- La entrada del algoritmo de multiplicación son los dos factores. El proceso es la secuencia de pasos en que los dígitos van siendo multiplicados las reservas van siendo sumadas, y los productos intermedios son finalmente sumados. La salida del algoritmo es el producto obtenido.
- Un algoritmo debe poder ser usado mecánicamente, sin necesidad de usar inteligencia, intuición ni habilidad.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Programa)
- Es una serie de @color[green](instrucciones) que le indican a la computadora cuáles son las @color[green](tareas) que tiene que @color[green](realizar) para lograr un fin específico. Debe tener una estructura y organización determinadas, y quien lo ejecuta tiene que seguir una secuencia de acciones para que el resultado sea el deseado.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Programación)
- Es el proceso de @color[green](diseñar), @color[green](codificar), @color[green](depurar) y @color[green](mantener) el @color[green](código) fuente de programas computacionales.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Paradigma de programación)
- Un paradigma de programación indica un @color[green](método) de realizar cómputos y la manera en que se deben @color[green](estructurar) y @color[green](organizar) las @color[green](tareas) que debe llevar a cabo un programa.
- Los paradigmas fundamentales están asociados a determinados modelos de cómputo.
- También se asocian a un determinado estilo de programación.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Paradigma de programación -cont-)
- Los lenguajes de programación suelen implementar, a menudo de forma parcial, varios paradigmas.
- Los paradigmas fundamentales están basados en diferentes modelos de cómputo y por lo tanto afectan a las construcciones más básicas de un programa.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Paradigma de programación -cont-)
- La división principal reside en el enfoque imperativo (indicar el cómo se debe calcular) y el enfoque declarativo (indicar el qué se debe calcular).
    - El enfoque declarativo tiene varias ramas diferenciadas: el paradigma funcional, el paradigma lógico, la programación reactiva y los lenguajes descriptivos.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Paradigma de programación -cont-)
- Otros paradigmas se centran en la estructura y organización de los programas, y son compatibles con los fundamentales:
    - Ejemplos: @color[blue](Programación estructurada), @color[blue](modular), @color[blue](orientada a objetos), @color[blue](orientada a eventos), @color[blue](programación genérica).

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Tipo de dato)
- Un tipo de dato es la @color[green](propiedad) de un valor que determina su @color[green](dominio) (qué valores puede tomar), qué @color[green](operaciones) se le pueden aplicar y cómo es representado internamente por el computador.
- Todos los valores que aparecen en un programa tienen un tipo.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Tipo de dato -cont-)
- Números enteros
    - El tipo entero (integer) permite representar números enteros.
    - Los valores que puede tomar son todos los números enteros: @color[blue](-3, -2, -1, 0, 1, 2, 3, etc.)

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Tipo de dato -cont-)
- Números reales
    - El tipo real o flotante (float, doublé) permite representar números reales.
    - El nombre viene del término punto flotante, que es la manera en que el computador representa internamente los números reales.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Tipo de dato -cont-)
- Valores lógicos
    - Los valores lógicos True y False @color[green](verdadero y falso).
- Texto
    - A los valores que representan texto se les llama cadenas (strings).

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Constante)
- Una constante es un objeto nombrado capaz de contener un dato cuyo @color[green](valor) asignado @color[green](no) puede ser @color[green](cambiado) durante la ejecución de programa.

#### @color[orange](Variable)
- Una variable es un objeto nombrado capaz de contener un dato que @color[green](puede ser modificado) durante la ejecución de programa

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores)
- Un operador es un @color[green](símbolo) en una expresión que representa una @color[green](operación) aplicada a los valores sobre los que actúa.
- Los valores sobre los que actúa un operador se llaman operandos. Un operador binario es el que tiene dos operandos, mientras que un operador unario es el que tiene sólo uno.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Por ejemplo, en la expresión @color[blue](2.0 + x) el operador @color[blue](+) es un operador binario que en este contexto representa la operación de adición. Sus operandos son @color[blue](2.0 y x).
- Las operaciones más comunes se pueden clasificar en: aritméticas, relacionales y lógicas.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Operadores aritméticos
    - Las operaciones aritméticas son las que operan sobre valores numéricos y entregan otro valor numérico como resultado. Los valores numéricos son los que tienen tipo entero o real.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Operadores aritméticos -cont-
    - Algunas operaciones aritméticas básicas son:
        - la suma +;
        - la resta -;
        - la multiplicación *;
        - la división /;
        - el módulo % (resto de la división).

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Operadores relacionales
    - Las operaciones relacionales sirven para @color[green](comparar valores). Sus operandos son cualquier cosa que pueda ser comparada, y sus resultados siempre son valores lógicos.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Operadores relacionales -cont-
    - Algunos operadores relacionales son:
        - el igual a == (no confundir con el = de las asignaciones);
        - el distinto a !=;
        - el mayor que >;
        - el mayor o igual que >=;
        - el menor que <;
        - el menor o igual que <=.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Operaciones lógicas
  - Los operadores lógicos son los que tienen operandos y resultado de tipo lógico.
    - la conjunción lógica and (en español: «y»), representada en algunos lenguajes por &&,
    - la disyunción lógica or (en español: «o»), representada en algunos lenguajes por || y
    - la negación lógica not (en español: «no»), representada en algunos lenguajes por !.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Diagrama de flujo)
- Es la @color[green](representación gráfica) del algoritmo o proceso utilizando símbolos con significados definidos que representan los pasos del algoritmo, y representan el flujo de ejecución mediante flechas que conectan los puntos de inicio y de fin de proceso.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Seudocódigo)
- Es una @color[green](descripción informal) de alto nivel de un algoritmo informático de programación, compacto e informal, que utiliza las convenciones estructurales de un lenguaje de programación verdadero.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Lenguaje de programación)
@ul
- Es un lenguaje diseñado para @color[green](describir el conjunto de acciones) consecutivas que una computadora debe ejecutar.
@ulend

---
### @color[brown](Bibliografía)
- UTFSM. (s.f.). Programación UTFSM. Obtenido de http://progra.usm.cl/apunte/materia/index.html
