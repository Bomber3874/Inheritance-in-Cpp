/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include <iostream>
using namespace std;
class Animal {
//base class
public:
    void eat() {
        cout<<"This animal eats food."<< endl;
    }
};
//Derived class
class Dog : public Animal {
public:
    void bark() {
        cout << "The dog barks." << endl;
    }
};
int main() {
    Dog myDog;
    myDog.eat();   
    myDog.bark();  
    return 0;
}
/*
Output:
This animal eats food.
The dog barks.
*/
