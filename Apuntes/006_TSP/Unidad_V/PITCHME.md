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
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Entry Criteria)
- The entry criteria for the requirements process are as follows:
    + You have a development strategy and plan.
    + You have the conceptual design, which was produced during strategy development.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 1. Need Statement Review
    + The development manager leads the team to formulate questions about the functions to be performed by the product and how these functions are to be used.
    + All the questions must be clarified among the team members or noted for discussion with the client.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 2. Need Statement Clarification
    + The development manager review the list of questions and the team's clarification notes wit the client.
    + The development manager can have a private meeting with the client or hold the review in a team meeting.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 3. Requirements Task
    + The development manager leads the team through outlining the SRS document and the work to produce it

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 4. Task Allocation
    + The team leader helps allocate the tasks among the team members and obtains commitments for when they will complete these tasks

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 5. Requirements Documentation
    + Each team member produces and reviews his or her portions of the SRS document.
    + Provides these to the development manager.
    + The developer manager produces the SRS draft.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 6. System Test Plan
    + The development manager leads the team in producing and review the system test plan

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 7. Requirements and System Test Plan Inspection
    + The quality/process manager leads the team througth:
        * Inspection the SRS draft and System Test Plan.
        * Indentifying questions and problems.
        * Defining who will resolve each question and problem.
        * Documenting the inspection.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 8. Requirements Update
    + The development manager obtains the updated SRS sections and combines them into a final SRS.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 9. User SRS Review
    + The development manager provides a copy of the final SRS to the client for approval.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Activities)
- 10. Requirements Baseline
    + The support manager baselines the SRS.

---
### @color[brown](4.2. Proceso de requerimientos)
#### @color[orange](Exit Criteria)
- A completed and inspected SRS document and system test plan.
- A completed time, defect and size data entered in the TSP support system.

---
### @color[brown](4.3. Especificación de requerimientos de software)
- The Software Requirements Specification (SRS) describes what do you plan to develop and how you intend the product to perform. 
- There are many standars for SRS documents, however, you will concentrate on the functional and operational requirements.

---
### @color[brown](4.3. Especificación de requerimientos de software)
- The principal topics to address ares:
    + Functional requirements: inputs, outputs, calculations, and use cases.
    + External interface requirements: user, hardware, software, communications.
    + Design constraints: file formats, languages, standars, compatibility.

---
### @color[brown](4.3. Especificación de requerimientos de software)
- The principal topics to address ares:
    + Attributes: availability, security, maintainability, conversion.
    + Other requirements: database, installation.

---
### @color[brown](4.3. Especificación de requerimientos de software)
#### @color[orange](Some Approaches)
- [QuARS Tool](https://resources.sei.cmu.edu/library/asset-view.cfm?assetid=7681)
- [UML Requirements Model](https://sparxsystems.com.au/downloads/whitepapers/Requirements_Management_in_Enterprise_Architect.pdf)
- [Z.150 User Requirements Notation](http://www.jsoftware.us/vol6/jsw0605-1.pdf)
- [Z notation](http://www.cs.cmu.edu/~15819/zedbook.pdf)
- [KAOS](http://www.cs.toronto.edu/~jm/2507S/Notes04/KAOS.pdf)

---
### @color[brown](Bibliografía)
- Introduction to the Team Software Process<sup>SM</sup> (TSPi<sup>SM</sup>) Watts S. Humphrey. Addison Wesley. 2000.
