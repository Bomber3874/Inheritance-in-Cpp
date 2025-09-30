# Inheritance-in-Cpp

# Aim

To study and implement the concept of inheritance in C++, including different types of inheritance such as single, multiple, multilevel, and hierarchical inheritance, demonstrating how classes can derive properties and behaviors from other classes to promote code reusability and establish relationships between objects.

# Software Used

Compiler: GNU GCC (g++)

IDE: Visual Studio Code

Operating System: Windows/Linux

# Theory

Inheritance is a fundamental concept in object-oriented programming that allows a new class to inherit properties and behaviors (member variables and functions) from an existing class. This powerful mechanism enables code reusability, establishes hierarchical relationships between classes, and supports the "is-a" relationship in object modeling.

Key Concepts:

Base Class (Parent/Superclass): The class whose properties are inherited by another class.
Derived Class (Child/Subclass): The class that inherits properties from the base class.
Access Specifiers: Control the visibility of inherited members:
    
    public: Members remain accessible as they were in the base class
    
    protected: Public members become protected in derived class
    
    private: All inherited members become private in derived class

Types of Inheritance:
    
    Single Inheritance: A derived class inherits from only one base class
    
    Multiple Inheritance: A derived class inherits from multiple base classes
    
    Multilevel Inheritance: A class is derived from another derived class
    
    Hierarchical Inheritance: Multiple classes are derived from a single base class
    
    Hybrid Inheritance: Combination of two or more types of inheritance

Benefits:

    Promotes code reusability
    
    Establishes natural relationships between objects
    
    Supports polymorphism
    
    Reduces code duplication
    
    Enhances maintainability

# Algorithms

# 1. Access Specifier in Inheritance (Protected Access)

Algorithm:

    Start the program
    
    Define a base class Parent with:
    
      A protected member variable protectedValue initialized to 42
      
      A public default constructor
    
    Define a derived class Child that publicly inherits from Parent:
    
      Implement a public member function showProtected() that accesses and displays the protected member from the base class
    
    In main() function:
    
      Create an object of Child class
      
      Call the showProtected() method to display the inherited protected value
    
    End the program

Key Learning: Demonstrates how protected members are accessible in derived classes but not outside the class hierarchy.

# 2. Hierarchical Inheritance

Algorithm:

    Start the program
    
    Define a base class Fruit with:
    
      A public string array type containing {"Apple", "Banana", "Cherry"}
      
      A public member function supplier() that displays "Fresh Farms Ltd."
    
    Define three derived classes that publicly inherit from Fruit:
    
      Apple class with public string member color = "Red"
      
      Banana class with public string member color = "Yellow"
      
      Cherry class with public string member color = "Dark Red"
      
    In main() function:
    
      Create objects of each derived class (Apple, Banana, Cherry)
    
      For each object:
      
        Call the inherited supplier() method
        
        Display the fruit type and specific color
    
    End the program

Key Learning: Shows how multiple classes can inherit from a single base class, sharing common functionality while having specialized attributes.

# 3. Multilevel Inheritance

Algorithm:

    Start the program
    
    Define a base class Book with:
    
      A public string member genre = "Science Fiction"
      
      A public member function type() that displays "Novel"
    
    Define an intermediate class Title that publicly inherits from Book:
    
      Add a public string member title = "Dune"
      
    Define a derived class Library that publicly inherits from Title:
      
      Add a public string member name = "Central Library"
    
    In main() function:
    
      Create an object of the most derived class Library
      
      Call the inherited type() method from the base class
      
      Display the genre and title inherited through multiple levels
      
      Display the library name from the current class
    
    End the program

Key Learning: Demonstrates inheritance chain where properties are passed through multiple levels of classes.

# 4. Multiple Inheritance

Algorithm:

    Start the program
    
    Define first base class Vehicle with:
    
      A public string member company = "Toyota"
      
      A public member function type() that displays "Supra"
    
    Define second base class Specs with:
    
      A public string member mileage = "12 kmpl"
      
      A public member function colour() that displays "Red"
    
    Define a derived class Car that publicly inherits from both Vehicle and Specs:
    
      Add a public string member seater = "2 seater"
    
    In main() function:
    
      Create an object of Car class
      
      Call the colour() method inherited from Specs class
      
      Display the company name and call type() method inherited from Vehicle class
      
      Display the seater information and mileage inherited from base classes
    
    End the program

Key Learning: Illustrates how a class can inherit properties and behaviors from multiple base classes.

# Conclusion

This experiment successfully demonstrated the powerful concept of inheritance in C++ through practical implementations:

    Access Specifiers: Understood how protected members facilitate controlled access within class hierarchies while maintaining encapsulation.
    
    Hierarchical Inheritance: Implemented a scenario where multiple specialized classes (Apple, Banana, Cherry) inherit common properties from a general base class (Fruit), promoting code reuse and logical organization.
    
    Multilevel Inheritance: Created an inheritance chain (Book → Title → Library) showing how properties and methods can be inherited through multiple levels, establishing natural hierarchical relationships.
    
    Multiple Inheritance: Demonstrated how a class can combine features from multiple base classes (Vehicle and Specs), enabling complex object modeling.

Through these programs, the importance of inheritance in enhancing code reusability, establishing logical relationships between classes, and promoting maintainable object-oriented design was clearly understood. Inheritance is a fundamental pillar of object-oriented programming that enables efficient code organization and natural modeling of real-world relationships.

