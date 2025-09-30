/*
Sanidhya Singh
24070123140
ENTC B2
*/

#include<iostream>
#include<string>
using namespace std;

class Book {
    public:
    string genre="Science Fiction";
    void type(){
        cout<<"Novel"<<endl;
    }
};

class Title: public Book {
    public:
    string title="Dune";
};

class Library: public Title {
    public:
    string name="Central Library";
};

int main(){
    Library b3;
    b3.type();
    cout<<b3.genre<<": "<<b3.title<<endl;
    cout<<"Library: "<<b3.name;
}
/*
output:
Novel
Science Fiction: Dune
Library: Central Library
*/
