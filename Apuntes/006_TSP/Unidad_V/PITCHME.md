# Proceso de Software en Equipo

### @color[brown](Unidad V)
### @color[brown](Diseño del producto)

---
### @color[brown](Contenido)
@ol
5.1. Introducción  
5.2. Principios de diseño  
5.3. Proceso de diseño  
@olend

---
### @color[brown](5.1. Introducción)
- In TSP, the design phase focuses on the system's overall structure. This phase produces the software design specification (SDS), which documents the high-level design. The next design level, or the detailed design, is addressed in the implementation phase.

---
### @color[brown](5.1. Introducción)
- The principal objective of the design process is to produce a precise, high-quality foundation for product implementation. If this high-level design is not clear, precise, and well-conceived, the systems parts will no work together. This is often the reason that the integration and the system testing phases of many projects take a long time.

---
### @color[brown](5.1. Introducción)
- This time is devoted largely to finding and fixing the high-level design problems that should have been resolved during the design phase. 

---
### @color[brown](5.2. Principios de diseño)
- Design is the creative process of deciding how to build a product. It must produce more than just general ideas: it must produce a complete and precise specification of how the product is to be built. A complete design defines the principal parts of a product, describes how these parts interact, and specifies how they are put together to produce the finished result. 

---
### @color[brown](5.2. Principios de diseño)
- After the requirements have been defined, the entire software process concerns various levels of design. High-level design differs from detailed design and implementation only in scope and detail. For example, at the highest design level, you break the product into parts that can be separately designed and implemented. The high-level design must therefore produce a specification that several engineers can use as they work independently to design the parts. 

---
### @color[brown](5.2. Principios de diseño)
- When the design is vague or imprecise, the engineers waste time during detailed design filling the gaps in the high-level specifications. Each engineer must individually resolve these questions as they arise, and there is no easy way to ensure that all they separate decisions are consistent. This situation often produces component incompatibilities that cannot be detected until integration and system test. It not only wastes time in implementing the wrong design, but it also causes a serious schedule overrun. 

---
### @color[brown](5.2. Principios de diseño)
- When the high-level design is complete and precise. engineers can quickly produce the detailed designs of the components. To do this, they need to know the complete functional specifications of each component, its interfaces, and its state behavior. Then, to produce the final product, the implementing engineers need a design that defines the logical structure, all the loop initialization and stepping conditions, the detailed state structure, and the state transitions for every program. 


---
### @color[brown](5.2. Principios de diseño)
- The implementation engineers then produce the code that implements the design. Their objective is source code correctly performs all the specified functions, that properly uses all system facilities, that incorporates available reuse functions, and that follows all coding and system standards and conventions. The final implemented product should be a source program that compiles and runs without any errors or problems. 

---
### @color[brown](Bibliografía)
- Introduction to the Team Software Process<sup>SM</sup> (TSPi<sup>SM</sup>) Watts S. Humphrey. Addison Wesley. 2000.
