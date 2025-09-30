/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
#include<string>
using namespace std;

class Fruit {
    public:
    string type[3]= {"Apple", "Banana", "Cherry"};
    void supplier(){
        cout<<"Fresh Farms Ltd."<<endl;
    }
};

class Apple: public Fruit {
    public:
    string color="Red";
};

class Banana: public Fruit {
    public:
    string color="Yellow";
};

class Cherry: public Fruit {
    public:
    string color="Dark Red";
};

int main(){
    Apple f1;
    cout<<endl;
    f1.supplier();
    cout<<f1.type[0]<<": "<<f1.color<<endl;

    Banana f2;
    cout<<endl;
    f2.supplier();
    cout<<f2.type[1]<<": "<<f2.color<<endl;

    Cherry f3;
    cout<<endl;
    f3.supplier();
    cout<<f3.type[2]<<": "<<f3.color<<endl;
}
/*
output:
Fresh Farms Ltd.
Apple: Red

Fresh Farms Ltd.
Banana: Yellow

Fresh Farms Ltd.
Cherry: Dark Red
*/
