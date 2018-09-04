# Estructura de datos

### @color[brown](Unidad II)
### @color[brown](Recursividad)

---
### @color[brown](Contenido)
@ol
2.1 Definición   
2.2 Procedimientos recursivos   
2.3 Ejemplos de casos recursivos
@olend

---
### @color[brown](2.1 Definición)
- El concepto de recursividad es un concepto muy abstracto y complejo que tiene que ver tanto con la lógica como también con la matemática y otras ciencias. Podemos definir a la recursividad como un método de @color[green](definir un proceso a través del uso de premisas que no dan más información que el método en sí mismo) o que utilizan los mismos términos que ya aparecen en su nombre, por ejemplo cuando se dice que la definición de algo es ese algo mismo.

---
### @color[brown](2.1 Definición)
- Recurrencia, recursión o recursividad es la forma en la cual se especifica un proceso basado en su propia definición, siendo ésta característica discernible en términos de autorreferencialidad, autopoiesis, fractalidad, o, en otras palabras, @color[green](construcción a partir de un mismo tipo). Con ánimo de una mayor precisión, y para evitar la aparente circularidad en esta definición, se formula el concepto de recursión de la siguiente manera:

---
### @color[brown](2.1 Definición)
- Un problema que pueda ser definido en función de su tamaño, sea este N, pueda ser dividido en instancias más pequeñas (< N) del mismo problema y se conozca la @color[green](solución explícita) a las instancias más simples, lo que se conoce como @color[green](casos base), se puede aplicar inducción sobre las llamadas más pequeñas y suponer que estas quedan resueltas.

---
### @color[brown](2.2 Procedimientos recursivos)
- Un algoritmo recursivo es un algoritmo que expresa la solución de un problema en términos de una llamada a sí mismo. La llamada a sí mismo se conoce como llamada recursiva o recurrente.

---
### @color[brown](2.2 Procedimientos recursivos)
- Generalmente, si la primera llamada al subprograma se plantea sobre un problema de tamaño u orden N, cada nueva ejecución recurrente del mismo se planteará sobre problemas, de igual naturaleza que el original, pero de un tamaño menor que N. 

---
### @color[brown](2.2 Procedimientos recursivos)
- De esta forma, al ir reduciendo progresivamente la complejidad del problema que resolver, llegará un momento en que su resolución sea más o menos trivial (o, al menos, suficientemente manejable como para resolverlo de forma no recursiva). En esa situación diremos que estamos ante un caso base de la recursividad.

---
### @color[brown](2.2 Procedimientos recursivos)
- Las claves para construir un subprograma recurrente son:
    + Cada llamada recurrente se debería definir sobre un problema de menor complejidad (algo más fácil de resolver).
    + Ha de existir al menos un caso base para evitar que la recurrencia sea infinita.

---
### @color[brown](2.3 Ejemplos de casos recursivos)
- Un ejemplo clásico de una subrutina recursiva es la función usada para calcular el factorial de un entero.
- Definición de la función:
    + f(n) = n * f(n-1)
    + f(0) = 1

---
### @color[brown](2.3 Ejemplos de casos recursivos)
- En C++ el la función quedaría como:   
![Factorial](https://raw.githubusercontent.com/isalasg/itszn/master/Apuntes/003_ED/Unidad_II/assets/image/fact.png)

---
### @color[brown](2.3 Ejemplos de casos recursivos)
- Cualquier ciclo puede convertirse en recursivo, habrá que tener en cuenta que la recursión es menos eficiente que los ciclos, pero en funciones matemáticas el camino de solución más práctico es la recursión.
- Por ejemplo, un algoritmos que imprime __n__ veces un texto en pantalla.

---
### @color[brown](2.3 Ejemplos de casos recursivos)
- De manera cíclica en C++:   
![SaludarCiclo](https://github.com/isalasg/itszn/blob/master/Apuntes/003_ED/Unidad_II/assets/image/saludarciclo.png?raw=true)

---
### @color[brown](2.3 Ejemplos de casos recursivos)
- De manera recursiva en C++:   
![SaludarRecursivo](https://raw.githubusercontent.com/isalasg/itszn/master/Apuntes/003_ED/Unidad_II/assets/image/saludarrec.png)

---
### @color[brown](Bibliografía)
- Definición de Recursividad. Definicion ABC. Obtenido de: - https://www.definicionabc.com/comunicacion/recursividad.php 
- Recursión. (2018, 18 de julio). Wikipedia, La enciclopedia libre. Fecha de consulta: 12:45, septiembre 4, 2018 desde https://es.wikipedia.org/w/index.php?title=Recursi%C3%B3n&oldid=109359459.

---
### @color[brown](Bibliografía)
- Recursión (ciencias de computación). (2018, 12 de abril). Wikipedia, La enciclopedia libre. Fecha de consulta: 13:02, septiembre 4, 2018 desde https://es.wikipedia.org/w/index.php?title=Recursi%C3%B3n_(ciencias_de_computaci%C3%B3n)&oldid=106984112.