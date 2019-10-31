# About the use of virtual function in C++

### Ambiguity of diamond problem solved by use of virtual keyword

Diamond problem is a famous problem which is occured because of the multipath inheritance. Problem arises when the
inherited classes have function with same name, in such a case, when the function i called for the base class then the compiler gets confused that which function should it actually call. 

This problem is solved by the use of the virtual keyword, this is the concept of run time polymorphism. 
