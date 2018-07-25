# Fundamentos de programación

### Unidad I

---

### Contenido

1.1 Conceptos básicos.  
1.2 Representación de algoritmos: gráfica y pseudocódigo.  
1.3 Diseño de algoritmos.  
1.4 Diseño de funciones.

---

### 1.1 Conceptos básicos
#### Algoritmo
Secuencia finita de instrucciones, reglas o pasos que describen de forma precisa las operaciones de un ordenador debe realizar para llevar a cabo una tarea en un tiempo más finito.  
Todo el mundo conoce y utiliza algoritmos a diario, incluso sin darse cuenta:  
Una receta de cocina es un algoritmo; si bien podríamos cuestionar que algunos pasos son ambiguos (¿cuánto es «una pizca de sal»? ¿qué significa «agregar a gusto»?), en general las instrucciones están lo suficientemente bien definidas para que uno las pueda seguir sin problemas.  
La entrada de una receta son los ingredientes y algunos datos como: ¿para cuántas personas se cocinará? El proceso es la serie de pasos para manipular los ingredientes. La salida es el plato terminado.  
En principio, si una receta está suficientemente bien explicada, podría permitir preparar un plato a alguien que no sepa nada de cocina.  
El método para multiplicar números a mano que aprendimos en el colegio es un algoritmo. Dado cualquier par de números enteros, si seguimos paso a paso el procedimiento siempre obtendremos el producto.  
La entrada del algoritmo de multiplicación son los dos factores. El proceso es la secuencia de pasos en que los dígitos van siendo multiplicados las reservas van siendo sumadas, y los productos intermedios son finalmente sumados. La salida del algoritmo es el producto obtenido.  
Un algoritmo debe poder ser usado mecánicamente, sin necesidad de usar inteligencia, intuición ni habilidad.

---?code=sample/go/server.go&lang=golang&title=Golang File

@[1,3-6](Present code found within any repo source file.)
@[8-18](Without ever leaving your slideshow.)
@[19-28](Using GitPitch code-presenting with (optional) annotations.)

---

@title[JavaScript Block]

<p><span class="slide-title">JavaScript Block</span></p>

```javascript
// Include http module.
var http = require("http");

// Create the server. Function passed as parameter
// is called on every request made.
http.createServer(function (request, response) {
  // Attach listener on end event.  This event is
  // called when client sent, awaiting response.
  request.on("end", function () {
    // Write headers to the response.
    // HTTP 200 status, Content-Type text/plain.
    response.writeHead(200, {
      'Content-Type': 'text/plain'
    });
    // Send data and end response.
    response.end('Hello HTTP!');
  });

// Listen on the 8080 port.
}).listen(8080);
```

@[1,2](You can present code inlined within your slide markdown too.)
@[9-17](Displayed using code-syntax highlighting just like your IDE.)
@[19-20](Again, all of this without ever leaving your slideshow.)

---?gist=onetapbeyond/494e0fecaf0d6a2aa2acadfb8eb9d6e8&lang=scala&title=Scala GIST

@[23](You can even present code found within any GitHub GIST.)
@[41-53](GIST source code is beautifully rendered on any slide.)
@[57-62](And code-presenting works seamlessly for GIST too, both online and offline.)

---

## Template Help

- [Code Presenting](https://github.com/gitpitch/gitpitch/wiki/Code-Presenting)
  + [Repo Source](https://github.com/gitpitch/gitpitch/wiki/Code-Delimiter-Slides), [Static Blocks](https://github.com/gitpitch/gitpitch/wiki/Code-Slides), [GIST](https://github.com/gitpitch/gitpitch/wiki/GIST-Slides) 
- [Custom CSS Styling](https://github.com/gitpitch/gitpitch/wiki/Slideshow-Custom-CSS)
- [Slideshow Background Image](https://github.com/gitpitch/gitpitch/wiki/Background-Setting)
- [Slide-specific Background Images](https://github.com/gitpitch/gitpitch/wiki/Image-Slides#background)
- [Custom Logo](https://github.com/gitpitch/gitpitch/wiki/Logo-Setting), [TOC](https://github.com/gitpitch/gitpitch/wiki/Table-of-Contents), and [Footnotes](https://github.com/gitpitch/gitpitch/wiki/Footnote-Setting)

---

## Go GitPitch Pro!

<br>
<div class="left">
    <i class="fa fa-user-secret fa-5x" aria-hidden="true"> </i><br>
    <a href="https://gitpitch.com/pro-features" class="pro-link">
    More details here.</a>
</div>
<div class="right">
    <ul>
        <li>Private Repos</li>
        <li>Private URLs</li>
        <li>Password-Protection</li>
        <li>Image Opacity</li>
        <li>SVG Image Support</li>
    </ul>
</div>

---

### Questions?

<br>

@fa[twitter gp-contact](@gitpitch)

@fa[github gp-contact](gitpitch)

@fa[medium gp-contact](@gitpitch)

---?image=assets/image/gitpitch-audience.jpg&opacity=100

@title[Download this Template!]

### <span class="white">Get your presentation started!</span>
### [Download this template @fa[external-link gp-download]](https://gitpitch.com/template/download/white-binary)

