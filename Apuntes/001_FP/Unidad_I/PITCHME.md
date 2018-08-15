# Fundamentos de programación

### @color[brown](Unidad I)

---
### @color[brown](Contenido)
@ol
    1.1 Conceptos básicos.  
    1.2 Representación de algoritmos: gráfica y pseudocódigo (Ejercicios en cuaderno). [Resumen de Diagramas de Actividad](rda.pdf).  
    1.3 Diseño de algoritmos (Ejercicios en cuaderno).  
    1.4 Diseño de funciones (Ejercicios en cuaderno).
@olend

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Algoritmo)
- Secuencia finita de @color[green](instrucciones), @color[green](reglas) o @color[green](pasos) que describen de forma precisa las operaciones de un ordenador debe realizar para llevar a cabo una @color[green](tarea) en un tiempo más finito.
- Todo el mundo conoce y utiliza algoritmos a diario, incluso sin darse cuenta:

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Algoritmo -cont-)
- Una receta de cocina es un algoritmo; si bien podríamos cuestionar que algunos pasos son ambiguos (¿cuánto es «una pizca de sal»? ¿qué significa «agregar a gusto»?), en general las instrucciones están lo suficientemente bien definidas para que uno las pueda seguir sin problemas.  

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
- Es una serie de instrucciones que le indican a la computadora cuáles son las tareas que tiene que realizar para lograr un fin específico. Debe tener una estructura y organización determinadas, y quien lo ejecuta tiene que seguir una secuencia de acciones para que el resultado sea el deseado.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Programación)
- Es el proceso de diseñar, codificar, depurar y mantener el código fuente de programas computacionales.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Paradigma de programación)
- Un paradigma de programación indica un método de realizar cómputos y la manera en que se deben estructurar y organizar las tareas que debe llevar a cabo un programa.
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
    - Ejemplos: Programación estructurada, modular, orientada a objetos, orientada a eventos, programación genérica.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Tipo de dato)
- Un tipo de dato es la propiedad de un valor que determina su dominio (qué valores puede tomar), qué operaciones se le pueden aplicar y cómo es representado internamente por el computador.
- Todos los valores que aparecen en un programa tienen un tipo.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Tipo de dato -cont-)
- Números enteros
    - El tipo entero (integer) permite representar números enteros.
    - Los valores que puede tomar son todos los números enteros: -3, -2, -1, 0, 1, 2, 3, etc.

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
    - Los valores lógicos True y False (verdadero y falso).
- Texto
    - A los valores que representan texto se les llama cadenas (strings).

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Constante)
- Una constante es un objeto nombrado capaz de contener un dato cuyo valor asignado no puede ser cambiado durante la ejecución de programa.

#### @color[orange](Variable)
- Una variable es un objeto nombrado capaz de contener un dato que puede ser modificado durante la ejecución de programa

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores)
- Un operador es un símbolo en una expresión que representa una operación aplicada a los valores sobre los que actúa.
- Los valores sobre los que actúa un operador se llaman operandos. Un operador binario es el que tiene dos operandos, mientras que un operador unario es el que tiene sólo uno.  

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Operadores -cont-)
- Por ejemplo, en la expresión 2.0 + x el operador + es un operador binario que en este contexto representa la operación de adición. Sus operandos son 2.0 y x.
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
    - Las operaciones relacionales sirven para comparar valores. Sus operandos son cualquier cosa que pueda ser comparada, y sus resultados siempre son valores lógicos.  

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
- Es la representación gráfica del algoritmo o proceso utilizando símbolos con significados definidos que representan los pasos del algoritmo, y representan el flujo de ejecución mediante flechas que conectan los puntos de inicio y de fin de proceso.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Seudocódigo)
- Es una descripción informal1 de alto nivel de un algoritmo informático de programación, compacto e informal, que utiliza las convenciones estructurales de un lenguaje de programación verdadero.

---
### @color[brown](1.1 Conceptos básicos)
#### @color[orange](Lenguaje de programación)
@ul
- Es un lenguaje diseñado para describir el conjunto de acciones consecutivas que una computadora debe ejecutar.
@ulend

---
### @color[brown](Bibliografía)
- UTFSM. (s.f.). Programación UTFSM. Obtenido de http://progra.usm.cl/apunte/materia/index.html
