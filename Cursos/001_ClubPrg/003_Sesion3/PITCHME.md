# Club de Programación
## @color[red](Sesión 3)
### @color[brown](Identificadores, tipos de datos, variables y constantes)

---
### @color[brown](Contenido)
- 3.1 Identificadores
- 3.2 Tipos de datos
- 3.3 Variables y constantes

---
### @color[brown](3.1 Identificadores)
@ul
- Un identificador es una secuencia arbitraria de digitos, guiones bajos y letras mayúsculas y minúsculas. 
- Un identificador válido no debe empezar con un dígito, no debe contener espacios y caracteres especiales como letras acentuadas o la ñ. 
- Los identificadores son sensitivos a mayúsculas y minúsculas.
@ulend

---
### @color[brown](3.1 Identificadores)
@ul
- Un identificador se puede usar para nombrar objetos, referencias, funciones, enumeraciones, tipos, miembros de clase, espacios de nombre, plantillas (template), especialización de plantillas, paquetes de parámetros, etiquetas de goto, y otras entidades
- Un identificador que nombra a una variable, función, o enumerador se pueden utilizar como una expresión.
@ulend

---
### @color[brown](3.1 Identificadores)
@ul
- Ejemplos de identificadores correctos:
    + Numeros
    + Precio
    + contador_1
    + contador2
@ulend

---
### @color[brown](3.2 Tipos de datos)
@ul
- Los tipos de datos fundamentales de C++ son:
    + void - sin tipo
    + float - número de punto flotante
    + double - número de punto flotante de doble precisión
    + long double - numero de punto flotante doble precisión largo
    + bool - lógico
@ulend

---
### @color[brown](3.2 Tipos de datos)
@ul
- Los tipos de datos fundamentales de C++ son (cont...):
    + char - caracter
    + signed char - caracter con signo
    + unsigned char - caracter sin signo
    + short int - entero corto
    + int - entero
@ulend

---
### @color[brown](3.2 Tipos de datos)
@ul
- Los tipos de datos fundamentales de C++ son (cont...):
    + long int - entero largo
    + long long int - entero doble largo
    + unsigned short int - entero corto sin signo
    + unsigned int - entero sin signo
    + unsigned long int - entero largo sin signo
    + unsigned long long int - entero doble largo sin signo
@ulend

---
### @color[brown](3.3 Variables y constantes)
#### @color[yellow](Variables)
@ul
- Una variable es un identificador que tiene un tipo de dato y que representa el almacenamiento en memoria, puede modificarse a lo largo del programa.
- La sintaxis para declarar una variables es:
    + tipo identificador;
- Por ejemplo:
    + int Edad;
    + float Sueldo;
@ulend

---
### @color[brown](3.3 Variables y constantes)
#### @color[yellow](Constantes)
@ul
- Una constante es un identificador que tiene un valor que no puede cambiar a lo largo del programa.
- Una constante puede definirse de dos maneras, mediante la palabra reservada *const* o mediante la directiva de compilador *define*.
- Una constante generalmente se escribe en mayúsculas.
@ulend

---
### @color[brown](3.3 Variables y constantes)
#### @color[yellow](Constantes)
@ul
- La sintaxis para declarar una constante es:
    + const tipo identificador = valor;
    + #define identificador valor;
- Por ejemplo:
    + const int TAMANYO = 10;
    + #define PI 3.1416;
@ulend


---
### @color[brown](Referencias)
- [cppreference.com](https://es.cppreference.com/w/)

---
### @color[brown](Contenido)
- Regresar a inicio [Sesión 3 - Identificadores, tipos de datos, variables y constantes](https://gitpitch.com/isalasg/itszn/master?p=Cursos/001_ClubPrg/003_Sesion3)
- Regresar a [Introducción](https://gitpitch.com/isalasg/itszn/master?p=Cursos/001_ClubPrg)
- Seguir a [Sesión 4 - Operadores](https://gitpitch.com/isalasg/itszn/master?p=Cursos/001_ClubPrg/004_Sesion4)
