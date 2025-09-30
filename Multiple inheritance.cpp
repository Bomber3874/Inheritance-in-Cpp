/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
    string company="Toyota";
    void type(){
        cout<<"Supra"<<endl;
    }
};
class Specs {
    public:
    string mileage="12 kmpl";
    void colour(){
        cout<<"Red"<<endl;
    }
};
class Car: public Vehicle, public Specs {
    public:
    string seater="2 seater";
};

int main(){
    Car f2;
    f2.colour();
    cout<<f2.company<<" ";
    f2.type();
    cout<<"("<<f2.seater<<")"<<endl<<"MILEAGE: "<<f2.mileage<<endl;
}
/*
output:
Red
Toyota Supra
(2 seater)
MILEAGE: 12 kmpl
*/
