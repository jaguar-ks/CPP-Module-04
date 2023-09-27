# *CPP-Module-04*

## **Navigation table:**
1. [Polymorphism in C++.](#polymorphism-in-c)
1. [Types of Polymorphism in C++.](#types-of-polymorphism-in-c)
    1. [Compile Time Polymorphism.](#compile-time-polymorphism)
    1. [Runtime Polymorphism.](#runtime-polymorphism)
1. [Virtual Functions.](#virtual-functions)
1. [VTABLE & VPTR.](#vtable--vptr)

## **Polymorphism in C++:**
Polymorphism word is the combination of "poly," which means many + "morphs," which means forms, which together means many forms. Polymorphism in C++ is when the behavior of the same object or function is different in different contexts. Let's take a real-world example of the word right can mean different things in a different context.

+ I was right. In the above sentence, the word right means "correct".
+ Please take a right turn. The word right refers to the "right direction" in the above sentence.

## **Types of Polymorphism in C++:**
There is two types of Polymorphism:

### ***Compile Time Polymorphism:***
Compile-time polymorphism is done by overloading an operator or function. It is also known as "static" or "early binding".

For example:
```cpp
    #include <iostream>
    using namespace std;

    int Sum( int a, int b ){
        return a + b;
    }
    int Sum( int a, int b, int c ){
        return a + b + c; 
    }

    int main ( void ){
        cout << "The sum of 1 + 2 is: " << Sum(1, 2) << endl;
        cout << "The sum of 1 + 2 + 3 is: " << Sum(1, 2, 3) << endl;
    }
```
the provided code will output:
> The sum of 1 + 2 is: 3
>
> The sum of 1 + 2 + 3 is: 6 

It called compile-time polymorphism because overloaded functions are called by comparing the data types and number of parameters. This type of information is available to the compiler at the compile time.

### ***Runtime Polymorphism:***
Runtime polymorphism occurs when functions are resolved at runtime rather than compile time when a call to an overridden method is resolved dynamically at runtime rather than compile time. It's also known as late binding or dynamic binding.

> Runtime polymorphism is achieved using a combination of function overriding and virtual functions.

---

## **Virtual Functions:**
A virtual function is a member function which is declared within a base class and is overridden by a derived class. Now, when you refer to a derived class object using a pointer to the base class, you can call a virtual function for that object and execute the derived class’s version of that particular function.

The syntax of virtual functions is as follows:

```cpp
    virtual <FuncReturnType> <FuncName> (<Parametes>);
```
>Virtual functions in C++ must be members of some class, also they cannot be static members of the class. Hence, virtual functions belong to the objects of the class, not the class itself, and once they are defined as virtual in the base class no need to be marked as virtual in derived classes, in addition to that functions prototype of a designated as a virtual function must be similar in the base class and all the derived classes.

## **VTABLE & VPTR:**
To accomplish late binding, the compiler creates a single table (called the VTABLE) for each class that contains virtual functions. The compiler places the addresses of the virtual functions for that particular class in the VTABLE. In each class with virtual functions, it secretly places a pointer, called the vpointer (abbreviated as VPTR), which points to the VTABLE for that object. When you make a virtual function call through a base-class pointer (that is, when you make a polymorphic call), the compiler quietly inserts code to fetch the VPTR and look up the function address in the VTABLE, thus calling the right function and causing late binding to take place, this happen in two actions:

+ Every new object created of a class with at least one virtual function defined in it consists of a virtual pointer (VPTR). This virtual pointer is inserted into the newly created object by the C++ compiler, as one of the object’s data members. This virtual pointer points to VTABLE.

+ At the class level, there exists a static data member, namely VTABLE., it belongs to the class, & not its objects is modeled as a static array consisting of function pointers, each array bucket (cell) of VTABLE consisting of a function pointer, points to some virtual function in the class.

![vtables and vptrs](https://www.equestionanswers.com/cpp/images/vptr-vtable-vfunctions.gif)
