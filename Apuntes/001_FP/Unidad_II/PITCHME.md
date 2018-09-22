# Fundamentos de programación

### @color[brown](Unidad II)
### @color[brown](Introducción a la Programación)

---
### @color[brown](Contenido)
@ol
2.1 Conceptos básicos.   
2.2 Características del lenguaje de programación.   
2.3 Estructura básica de un programa.   
2.4 Elementos del lenguaje
@olend

---
### @color[brown](2.1 Conceptos básicos)
#### @color[orange](Paradigmas de programación)
- Un paradigma de programación indica un método de realizar cómputos y la manera en que se deben estructurar y organizarlas tareas que debe llevar a cabo un programa
- Los paradigmas fundamentales están asociados a determinados modelos de cómputo.

---
### @color[brown](2.1 Conceptos básicos)
#### @color[orange](Paradigmas de programación)
- Tambien se asocian a un determinado estilo de programación
- Los lenguajes de programación suelen implementar, a menudo de forma parcial, varios paradigmas.
- Los paradigmas fundamentales están basados en diferentes modelos de cómputo y por lo tanto afectan a las construcciones más básicas de un programa. 

---
### @color[brown](2.1 Conceptos básicos)
#### @color[orange](Paradigmas de programación)
- La división principal reside en el enfoque imperativo (indicar el cómo se debe calcular) y el enfoque declarativo (indicar el qué se debe calcular).
    + El enfoque declarativo tiene varias ramas diferenciadas: el paradigma funcional, el paradigma lógico, la programación reactiva y los lenguajes descriptivos.

---
### @color[brown](2.1 Conceptos básicos)
#### @color[orange](Paradigmas de programación)
- Otros paradigmas se centran en la estructura y organización de los programas, y son compatibles con los fundamentales:
    + Ejemplos: Programación estructurada, modular, orientada a objetos, orientada a eventos, programación genérica.
- Por último, existen paradigmas asociados a la concurrenciay a los sistemas de tipado.

---
### @color[brown](2.1 Conceptos básicos)
#### @color[orange](Paradigmas de programación)
- Ejemplo de lenguajes con paradigma imperativo:
    + C++
    + Java
    + C#
    + Python

---
### @color[brown](2.1 Conceptos básicos)
#### @color[orange](Paradigmas de programación)
- Ejemplo de lenguajes con paradigma declarativo:
    + Haskell
    + Scala
    + Prolog

---
### @color[brown](2.2 Características del lenguaje de programación.)
#### @color[orange](Scala)
- Scala es un lenguaje de programación moderno multi-paradigma diseñado para expresar patrones de programación comunes de una forma concisa, elegante, y de tipado seguro. Integra fácilmente características de lenguajes orientados a objetos y funcionales.

---
### @color[brown](2.2 Características del lenguaje de programación.)
#### @color[orange](Scala)
- Scala es un lenguaje puramente orientado a objetos en el sentido de que todo es un objeto. Los tipos y comportamientos de objetos son descritos por clases y traits (que podría ser traducido como un “rasgo”). Las clases pueden ser extendidas a través de subclases y un mecanismo flexible de composición mezclada que provee un claro remplazo a la herencia múltiple

---
### @color[brown](2.2 Características del lenguaje de programación.)
#### @color[orange](Scala)
- Scala es también un lenguaje funcional en el sentido que toda función es un valor. Scala provee una sintaxis ligera para definir funciones anónimas. Soporta funciones de primer orden, permite que las funciones sean anidadas, y soporta currying. 

---
### @color[brown](2.3 Estructura básica de un programa.)
- Un programa en Scala utilizando su intérprete no necesita construcciones ni declaraciones iniciales, el código fuente se guarda en un archivo de texto con extensión .scala, por ejemplo, el archivo hola.scala puede contener la siguiente línea:
> println("Hola mundo")

---
### @color[brown](2.3 Estructura básica de un programa.)
- Para ejecutar el código anterior, ejecutamos el intérprete:
> scala hola.scala
- Y producirá el siguiente resultado:
> Hola mundo

---
### @color[brown](2.4 Elementos del lenguaje)
#### @color[orange](Tipos de datos)
|Tipo   |Descripción      |
|-------|-----------------|
|Int    |Entero           |
|Float  |Número flotante  |
|Double |Doble precisión  |
|Long   |Entero largo     |

---
### @color[brown](2.4 Elementos del lenguaje)
#### @color[orange](Tipos de datos)
|Tipo   |Descripción      |
|-------|-----------------|
|Short  |Entero corto     |
|Char   |Caracter         |
|Boolean|Booleano         |
|String |Cadena           |

---
### @color[brown](2.4 Elementos del lenguaje)
#### @color[orange](Literales)
- Un literal es un valor de tipo entero, real, lógico, carácter o cadena que puede aparecer dentro de un programa.
- Una literal numérica puede ser real \(4.5, 12.56\) o entera \(1, 5\)
- Una literal de cadena va encerrada entre comillas \("Hola"\)
- Una literal de caracter va encerrada entre comillas simples \('F'\)
- Una literal lógica o booleana puede tener los valors __true__ o __false__

---
### @color[brown](2.4 Elementos del lenguaje)
#### @color[orange](Constantes)
- Una constante es un valor que no cambia durante el programa, por ejemplo el valor de PI, la constante gravitacional, entre otras.
- En Scala, una constante se declara con la palabra reservada __val__
> val PI = 3.1416

---
### @color[brown](2.4 Elementos del lenguaje)
#### @color[orange](Constantes)
- Una variable es un valor que puede ser modificado a lo largo del programa
- En Scala, una variable se declara con la palabra reservada __var__
> var contador = 0

---
### @color[brown](2.4 Elementos del lenguaje)
#### @color[orange](Identificadores) 
- Un identificador en Scala debe cumplir con las siguiente reglas:
    + No debe iniciar con un número
    + No debe contener espacios en blanco
    + No debe tener caracteres especiales como letras acentuadas o la ñ

---
### @color[brown](Bibliografía)
- Paradigmas de Programación. César Vaca Rodríguez. Departamento de Informática, 2011. [Enlace de descarga](https://www.infor.uva.es/~cvaca/asigs/docpar/intro.pdf)
- Tour of Scala, Introducción. docs Scala Lang. [Enlace de página](https://docs.scala-lang.org/es/tour/tour-of-scala.html)