# Club de Programación
## @color[red](Sesión 2)
### @color[brown](Entrada y salida)

---
### @color[brown](Contenido)
- 2.1 Salida
- 2.2 Entrada
- 2.3 Ejemplos

---
### @color[brown](2.1 Salida)
@ul
- La salida estándar en C++ es *cout*
- *cout* es parte de la biblioteca *iostream* que se incluye al inicio del programa
- pertenece al espacio de nombres *std* el cual se especifica después de las bibliotecas
@ulend

---
### @color[brown](2.1 Salida)
@ul
- La sintaxis de cout es:
    + cout << "texto"; // para imprimir texto
    + cout << 10; // para imprimir valores o variables
- Se puede combinar texto con valores, separándolos con el operador de inserción *<<*
    + cout << "Edad: " << 10 << " años.";
@ulend

---
### @color[brown](2.1 Salida)
#### @color[yellow](Secuencias de escape)
@ul
- Es recomendable introducir un salto de línea al finalizar la impresión con *cout*, esto se logra con la secuencia de escape *\n*
    + cout << "texto\n";
    + cout << 10 << "\n";
- Existen varias secuencias de escape que indican cierta acción en la salida del programa que puede ser o no imprimible
@ulend

---
### @color[brown](2.1 Salida)
#### @color[yellow](Secuencias de escape)
@ul
- Las secuencias de escape más comunes son:
    + *\a* beep del sistema
    + *\b* backspace
    + *\n* nueva línea
    + *\t* tabulador
    + *\'* apóstrofo
    + *\"* comillas
    + *\\\* diagonal invertida
    + 
@ulend

---
### @color[brown](2.2 Entrada)
- La entrada en C++ se realiza con la instrucción *cin*
- *cin* es parte de la biblioteca *iostream* que se incluye al inicio del programa
- pertenece al espacio de nombres *std* el cual se especifica después de las bibliotecas

---
### @color[brown](2.2 Entrada)
- La sintaxis de *cin* es la siguiente
    + cin >> identificador;
- Donde la donde el identificador es una variable de un tipo de dato simple de C++, como entero, flotante, char, etc., los cuales se verán en la siguiente sesión.

---
### @color[brown](2.3 Ejemplos)
---?code=Cursos/001_ClubPrg/002_Sesion2/src/002_Salida.cpp&lang=cpp&title=Hola mundo
@[6](Imprime texto)
@[7](Imprime valor)
@[8](Imprime texto y valor)

---?code=Cursos/001_ClubPrg/002_Sesion2/src/003_EntradaSalida.cpp&lang=cpp&title=Hola mundo
@[6](Declaración de variable nombre)
@[8](Imprimimos texto solicitando el nombre)
@[9](Leemos y guardamos en variable nombre)
@[10](Imprimimos salida con texto y variable)

---
### @color[brown](Contenido)
- Regresar a inicio [Sesión 2 - IDE y estructura básica](https://gitpitch.com/isalasg/itszn/master?p=Cursos/001_ClubPrg/002_Sesion2)
- Regresar a [Introducción](https://gitpitch.com/isalasg/itszn/master?p=Cursos/001_ClubPrg)
- Seguir a [Sesión 3 - Tipos de datos, variables, operadores](https://gitpitch.com/isalasg/itszn/master?p=Cursos/001_ClubPrg/003_Sesion3)
