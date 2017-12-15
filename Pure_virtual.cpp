#include<iostream> 
using namespace std;
class Parent { public:
virtual void print( ) = 0; };

class Child : public Parent {
    public:
void print( ) {
cout << "I'm your son." << endl;
} };

int main() {
   //pure벌츄얼 펀션은 호출 불가능
   
   Child child;
   child.print();
   return 0;
    
}