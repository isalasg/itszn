# Estructura de datos

### @color[brown](Unidad I)
### @color[brown](Introducción a las estructuras de datos)
---
### @color[brown](Contenido)
@ol
1.1 Clasificación de las estructuras de datos   
1.2 Tipos de datos abstractos (TDA)   
1.3 Ejemplos de TDA’s   
1.4 Manejo de memoria   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.4.1 Memoria estática   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.4.2 Memoria dinámica   
1.5 Análisis de algoritmos   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.5.1 Complejidad en el tiempo   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.5.2 Complejidad en el espacio   
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;1.5.3 Eficiencia de los algoritmos
@olend

---
### @color[brown](1.1 Clasificación de las estructuras de datos)
- Las estructuras de datos pueden ser clasificadas de tres formas, que pueden ser:
    + De acuerdo a su ubicación en memoria
    + De acuerdo a los datos que contengan
    + De acuerdo a su tamaño

---
### @color[brown](1.1 Clasificación de las estructuras de datos)
#### @color[orange](De acuerdo a su ubicación en memoria)
- En memoria, las estructuras pueden almacenarse de forma @color[green](lineal) o @color[green](no lineal).
- Las estructuras de datos @color[green](lineales) son por ejemplo @color[blue](arreglos y listas).
- Las estructuras de datos @color[green](no lineas) son por ejemplo @color[blue](árboles y grafos).

---
### @color[brown](1.1 Clasificación de las estructuras de datos)
#### @color[orange](De acuerdo a los datos que contengan)
- Las estructuras pueden guardar datos @color[green](homogeneos), es decir, todo el contenido de la estructura solo es de tipo de dato simple o compuesto, y otras tienen datos @color[green](heterogeneos), que son distinto tipos de dato simple o compuesto en la misma estructura.

---
### @color[brown](1.1 Clasificación de las estructuras de datos)
#### @color[orange](De acuerdo a su tamaño)
- Las estructuras @color[green](estáticas) solo pueden guardar un número predeterminado de datos, definidos en tiempo de programación, y las estructuras @color[green](dinámicas) pueden ir cambiado su tamaño, de acuerdo a las necesidades del usuario en tiempo de ejecución.
- Estructura estática: @color[blue](arreglos)
- Estructura dinámica: @color[blue](listas)

---
### @color[brown](1.2 Tipos de datos abstractos)
- Un tipo de dato abstracto (TDA) es una manera de ver una estructura de datos:
enfocándose en el "@color[green](qué hace)" e ignorando el "@color[green](cómo lo hace)".
- En un TDA, el concepto de un cierto tipo de estructura de dato es separado de su implementación. @color[blue](Pilas) y @color[blue](Colas) pueden ser considerados ejemplos de tipos de datos abstractos.
- Una pila y una cola pueden ser implementados tanto en arreglos como en listas enlazadas, pero lo que nos importa de estas estructuras es el uso de Push() y Pop() sin necesidad de saber su implementación. 

---
### @color[brown](1.2 Tipos de datos abstractos)
- En programación orientada a objetos, un tipo de dato abstracto es una clase sin considerar su implementación. Es una descripción de los datos en la clase (atributos), una lista de operaciones (métodos). Específicamente lo que se excluye son detalles de cómo los métodos realizan su tares. Como usuario de una clase, sabemos que métodos llamar, como llamarlos y el resultado que esperamos, pero no como ellos trabajan. 

---
### @color[brown](1.3 Ejemplos de TDA’s)
- Un ejemplo clásico de TDA, es la pila de Java (stack), que se encuentra en java.util.Stack.
- Esta puede definir una pila con los métodos asociados push y pop para meter y sacar datos, por lo que sabemos que hacen, pero no sabemos cómo lo hacen, ni siquera sabemos en que estructura tenga almacenados los datos.

---
### @color[brown](1.4 Manejo de memoria)
#### @color[orange](1.4.1 Memoria estática)
- El manejo estático de memoria consiste en asignar memoria en @color[green](tiempo de programación) antes de que el programa sea ejecutado, el manejo de esta memoria está a cargo del lenguaje, apartando la memoria al momento de declarar las variables, y liberándola al momento de finalizar el programa. El espacio en memoria en este caso no cambia, por ejemplo un @color[blue](arreglo) declarado de 10 posiciones siempre tendrá este tamaño fijo durente toda la ejecución.

---
### @color[brown](1.4 Manejo de memoria)
#### @color[orange](1.4.2 Memoria dinámica)
- El manejo dinámico de memoria consiste en asignar memoria en @color[green](tiempo de ejecución), o sea, cuando el programa está corriendo, el manejo de esta memoria está a cargo del programador, dándole posibilidades al usuario del sistema de crear nuevos espacios en memoria y liberarlos cuando ya no sean necesarios. El espacio en memoria en este caso puede cambiar, por ejemplo una @color[blue](lista enlazada) inicia con 0 elementos y puede cambiar de tamaño (agrandarse o reducirse) de acuerdo a las necesidades del usuario.

---
### @color[brown](1.5 Análisis de algoritmos)
- Un algoritmo será mas eficiente comparado con otro, siempre que consuma menos recursos, como el tiempo y espacio de memoria necesarios para ejecutarlo. La eficiencia de un algoritmo puede ser cuantificada con las siguientes medidas de complejidad:
    + Complejidad Temporal o Tiempo de ejecución.
    + Complejidad Espacial

---
### @color[brown](1.5 Análisis de algoritmos)
#### @color[orange](1.5.1 Complejidad en el tiempo)
- El tiempo de ejecución de un programa se mide en función de N, lo que designaremos como T(N).
- Esta función se puede calcular físicamente ejecutando el programa acompañados de un reloj, o calcularse directamente sobre el código, contando las instrucciones a ser ejecutadas y multiplicando por el tiempo requerido por cada instrucción.

---
### @color[brown](1.5 Análisis de algoritmos)
#### @color[orange](1.5.1 Complejidad en el tiempo)
- Por ejemplo:
>S1;
>for(x = 0; x < N; x++)
>S2; 
- Demanda: T(N) = t1 + t2 * N 
- Donde t1 es el tiempo que lleva ejecutar la serie S1 de sentencias, y t2 es el que lleva la serie S2.


---
### @color[brown](Bibliografía)
- Tipos y estructuras de datos. Ariadna Fuentes, Francisco Grimaldo. Universidad de Valencia. Obtenido de: https://www.uv.es/afuertes/Informatica/ficheros/Tema4-Castellano.pdf
