# Fundamentos de programación

### Unidad I

---
### @color[orange](Contenido)
@ol
    1.1 Conceptos básicos.  
    1.2 Representación de algoritmos: gráfica y pseudocódigo (Ejercicios en cuaderno).  
    1.3 Diseño de algoritmos (Ejercicios en cuaderno).  
    1.4 Diseño de funciones (Ejercicios en cuaderno).
@olend

---
### 1.1 Conceptos básicos
#### Algoritmo (cont)
- Secuencia finita de instrucciones, reglas o pasos que describen de forma precisa las operaciones de un ordenador debe realizar para llevar a cabo una tarea en un tiempo más finito.
- Todo el mundo conoce y utiliza algoritmos a diario, incluso sin darse cuenta:

---
### 1.1 Conceptos básicos
#### Algoritmo (cont)
- Una receta de cocina es un algoritmo; si bien podríamos cuestionar que algunos pasos son ambiguos (¿cuánto es «una pizca de sal»? ¿qué significa «agregar a gusto»?), en general las instrucciones están lo suficientemente bien definidas para que uno las pueda seguir sin problemas.  

---
### 1.1 Conceptos básicos
#### Algoritmo (cont)
- La entrada de una receta son los ingredientes y algunos datos como: ¿para cuántas personas se cocinará? El proceso es la serie de pasos para manipular los ingredientes. La salida es el plato terminado.
- En principio, si una receta está suficientemente bien explicada, podría permitir preparar un plato a alguien que no sepa nada de cocina.  

---
### 1.1 Conceptos básicos
#### Algoritmo (cont)
- El método para multiplicar números a mano que aprendimos en el colegio es un algoritmo. Dado cualquier par de números enteros, si seguimos paso a paso el procedimiento siempre obtendremos el producto.  

---
### 1.1 Conceptos básicos
#### Algoritmo (cont)
- La entrada del algoritmo de multiplicación son los dos factores. El proceso es la secuencia de pasos en que los dígitos van siendo multiplicados las reservas van siendo sumadas, y los productos intermedios son finalmente sumados. La salida del algoritmo es el producto obtenido.
- Un algoritmo debe poder ser usado mecánicamente, sin necesidad de usar inteligencia, intuición ni habilidad.

---
### 1.1 Conceptos básicos
#### Programa
- Es una serie de instrucciones que le indican a la computadora cuáles son las tareas que tiene que realizar para lograr un fin específico. Debe tener una estructura y organización determinadas, y quien lo ejecuta tiene que seguir una secuencia de acciones para que el resultado sea el deseado.

---
### 1.1 Conceptos básicos
#### Programación
- Es el proceso de diseñar, codificar, depurar y mantener el código fuente de programas computacionales.

---
### 1.1 Conceptos básicos
#### Paradigma de programación
- Un paradigma de programación indica un método de realizar cómputos y la manera en que se deben estructurar y organizar las tareas que debe llevar a cabo un programa.
- Los paradigmas fundamentales están asociados a determinados modelos de cómputo.
- También se asocian a un determinado estilo de programación.

---
### 1.1 Conceptos básicos
#### Paradigma de programación (cont)
- Los lenguajes de programación suelen implementar, a menudo de forma parcial, varios paradigmas.
- Los paradigmas fundamentales están basados en diferentes modelos de cómputo y por lo tanto afectan a las construcciones más básicas de un programa.

---
### 1.1 Conceptos básicos
#### Paradigma de programación (cont)
- La división principal reside en el enfoque imperativo (indicar el cómo se debe calcular) y el enfoque declarativo (indicar el qué se debe calcular).
    - El enfoque declarativo tiene varias ramas diferenciadas: el paradigma funcional, el paradigma lógico, la programación reactiva y los lenguajes descriptivos.

---
### 1.1 Conceptos básicos
#### Paradigma de programación (cont)
- Otros paradigmas se centran en la estructura y organización de los programas, y son compatibles con los fundamentales:
    - Ejemplos: Programación estructurada, modular, orientada a objetos, orientada a eventos, programación genérica.

---
### 1.1 Conceptos básicos
#### Tipo de dato
- Un tipo de dato es la propiedad de un valor que determina su dominio (qué valores puede tomar), qué operaciones se le pueden aplicar y cómo es representado internamente por el computador.
- Todos los valores que aparecen en un programa tienen un tipo.

---
### 1.1 Conceptos básicos
#### Tipo de dato (cont)
- Números enteros
    - El tipo entero (integer) permite representar números enteros.
    - Los valores que puede tomar son todos los números enteros: -3, -2, -1, 0, 1, 2, 3, etc.

---
### 1.1 Conceptos básicos
#### Tipo de dato (cont)
- Números reales
    - El tipo real o flotante (float, doublé) permite representar números reales.
    - El nombre viene del término punto flotante, que es la manera en que el computador representa internamente los números reales.

---
### 1.1 Conceptos básicos
#### Tipo de dato (cont)
- Valores lógicos
    - Los valores lógicos True y False (verdadero y falso).
- Texto
    - A los valores que representan texto se les llama cadenas (strings).

---
### 1.1 Conceptos básicos
#### Constante
- Una constante es un objeto nombrado capaz de contener un dato cuyo valor asignado no puede ser cambiado durante la ejecución de programa.

#### Variable
- Una variable es un objeto nombrado capaz de contener un dato que puede ser modificado durante la ejecución de programa

---
### 1.1 Conceptos básicos
#### Operadores
- Un operador es un símbolo en una expresión que representa una operación aplicada a los valores sobre los que actúa.
- Los valores sobre los que actúa un operador se llaman operandos. Un operador binario es el que tiene dos operandos, mientras que un operador unario es el que tiene sólo uno.  

---
### 1.1 Conceptos básicos
#### Operadores (cont)
- Por ejemplo, en la expresión 2.0 + x el operador + es un operador binario que en este contexto representa la operación de adición. Sus operandos son 2.0 y x.
- Las operaciones más comunes se pueden clasificar en: aritméticas, relacionales y lógicas.

---
### 1.1 Conceptos básicos
#### Operadores (cont)
- Operadores aritméticos
    - Las operaciones aritméticas son las que operan sobre valores numéricos y entregan otro valor numérico como resultado. Los valores numéricos son los que tienen tipo entero o real.  

---
### 1.1 Conceptos básicos
#### Operadores (cont)
- Operadores aritméticos (cont)
    - Algunas operaciones aritméticas básicas son:
        - la suma +;
        - la resta -;
        - la multiplicación *;
        - la división /;
        - el módulo % (resto de la división).

---
### 1.1 Conceptos básicos
#### Operadores (cont)
- Operadores relacionales
    - Las operaciones relacionales sirven para comparar valores. Sus operandos son cualquier cosa que pueda ser comparada, y sus resultados siempre son valores lógicos.  

---
### 1.1 Conceptos básicos
#### Operadores (cont)
- Operadores relacionales (cont)
    - Algunos operadores relacionales son:
        - el igual a == (no confundir con el = de las asignaciones);
        - el distinto a !=;
        - el mayor que >;
        - el mayor o igual que >=;
        - el menor que <;
        - el menor o igual que <=.

---
### 1.1 Conceptos básicos
#### Operadores (cont)
- Operaciones lógicas
  - Los operadores lógicos son los que tienen operandos y resultado de tipo lógico.
    - la conjunción lógica and (en español: «y»), representada en algunos lenguajes por &&,
    - la disyunción lógica or (en español: «o»), representada en algunos lenguajes por || y
    - la negación lógica not (en español: «no»), representada en algunos lenguajes por !.

---
### 1.1 Conceptos básicos
#### Diagrama de flujo
- Es la representación gráfica del algoritmo o proceso utilizando símbolos con significados definidos que representan los pasos del algoritmo, y representan el flujo de ejecución mediante flechas que conectan los puntos de inicio y de fin de proceso.

---
### 1.1 Conceptos básicos
#### Seudocódigo
- Es una descripción informal1 de alto nivel de un algoritmo informático de programación, compacto e informal, que utiliza las convenciones estructurales de un lenguaje de programación verdadero.

---
### 1.1 Conceptos básicos
#### Lenguaje de programación
- Es un lenguaje diseñado para describir el conjunto de acciones consecutivas que una computadora debe ejecutar.

---
### Bibliografía
- UTFSM. (s.f.). Programación UTFSM. Obtenido de http://progra.usm.cl/apunte/materia/index.html
