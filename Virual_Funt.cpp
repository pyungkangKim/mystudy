#include<iostream>
using namespace std;

class Parent { 
    public:

 virtual void print( ) {
cout << "I'm your father." << endl;
} };

class Child : public Parent {
    public:
void print( ) {
cout << "I'm your son." << endl;
} };


int main() {
Child *child = new Child( );
child->print( );
Parent *father = new Parent();
father->print( ); 

cout<<"Dynamic binding:";
father=child; //Dynamic binding
father->print();
delete child;
return 0;
}