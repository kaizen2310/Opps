/*
ENCAPSULATION =>
1.DEFINATION:
*Encapsulation is a mechanism that binds data and methods in a single unit (Class)
*like a capsule it combines them together

function of encapsulation
1 it provides security layer
2 it hides internal implementation of code and data from class
3 exposes only necessary information to the world


as we are hiding data from the world , encapsulation is also know as data hiding

the goal is to implement classes in a way that prevents unauthorized access to or
modification of original contents of a class by its instances (or objects)
the underlying algorithms of one class need not be known to another class,
twi class can still comunicate with each other as if they are sharing information

--------------------
-                  -
|   PRIVATE DATA   |
|    & METHODS     |
-------------------- 
|                  |
| PUBLIC INTERFACE |
| (GETTERS + SETTERS)|
--------------------




    encapsulation is the mechanism of wrapping data 
    (Attributes / variables) and code acting on the data (functions / methods)
    together as a single unit (Class):

    * Basically its also called as data hiding

2.WHY WE USE IT:
    - to protect the data from the outside world :
    - to provide abstraction to the user :
    - to provide control over the data :

3. HOW WE USE IT:
    - we use private access specifier to make the data 
      private :
    - we use public access specifier to make the data
      public :
    - we use protected access specifier to make the data
      protected :

4. EXAMPLE:-
*/
        encapsulation is the mechanism of wrapping data 
    (Attributes / variables) and code acting on the data (functions / methods)
    together as a single unit (Class):

    * Basically its also called as data hiding

2.WHY WE USE IT:
    - to protect the data from the outside world :
    - to provide abstraction to the user :
    - to provide control over the data :

3. HOW WE USE IT:
    - we use private access specifier to make the data 
      private :
    - we use public access specifier to make the data
      public :
    - we use protected access specifier to make the data
      protected :

4. EXAMPLE:-
    




Acees modifiers:
 way of access of attributes and methods of the class : 

 1public:
  members decleared as public can be accessible from any part of program 
  they can be acessed by object of the class and external code;

 2private:
 *members decleared as private are accessible only within the class
 * they are not accessible outside the class, icluding derived clasees
 
 3protected:
 *members decleared as protected are accessible within the class and derived classes
 *they are not directly accessible from external code
