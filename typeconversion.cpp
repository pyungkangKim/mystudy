#include <iostream> 
using namespace std;
class Person { public:
void Sleep() { cout<<"Sleep"<<endl; } };


class Student : public Person { public:
void Study() { cout<<"Study"<<endl; } };


class Undergraduate : public Student { public:
void Research() { cout<<"Research"<<endl; } };


int main() {
Person *p1 = new Person;
//*p2 = new Person; Undergraduate 
//*p3 = new Person;
p1->Sleep(); 
//p2->Sleep(); 
//p3->Sleep(); 
return 0;
}
