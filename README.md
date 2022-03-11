# PG-VisitorPattern
## Intro
This is the playground for visitor pattern implemented in C++ 

[An Amazing Tutorial Video](https://www.youtube.com/watch?v=pL4mOUDi54o)

## Visitor Pattern
`Visitor.h` is the virtual base class that describes **what classes can be visited**.

`VisitorImpl.h` describes **all types of Visitor** that visit the same classes in different ways.

`Visitable.h` is the virtual base class that states the `accept` function.

`VisitableItems.h` is the head file for the visited classes and they must implement `accept` function which must contain the call of `visit` function. The `visit` function uses subtype polymorphism to decide which in `Visitor.h` to call.

`TaxVisitor.cpp` implements the **all types of Visitor** and the corresponding `visit` functions.