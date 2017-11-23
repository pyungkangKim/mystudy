#include<iostream>
using namespace std;

class Human{
    private:
    int age;
    double height;
    char *name;
    void Aging();
    void Growing();
    
    public:
    // Human();
    Human(int, double, char*);
    void AskName(Human);
    void AskAge(Human);
    int GetAge();
    char* GetName();
    void What_is_your_name();
    void How_old_are_you();
};

int Human::GetAge(){
    return age;
}

char* Human::GetName(){
    return name;
}

void Human::AskName(Human other_person){
    cout<<GetName()<<":"<<"Hi, What is your name?"<<endl;
    other_person.What_is_your_name();
}

void Human::AskAge(Human other_person){
    cout<<GetName()<<":"<<"How old are you?"<<endl;
    other_person.How_old_are_you();
}

void Human::What_is_your_name(){
    cout<<GetName()<<":"<<"Hello, I am"<<GetName()<<endl;
}

void Human::How_old_are_you(){
    cout<<GetName()<<":"<<"I am"<<GetAge()<<"."<<endl;
}

// Human::Human(){
//     age=-1;
//     height=0.0;
//     name="";
    
// }

Human::Human(int Age,double Height, char* Name){
    age=Age;
    height=Height;
    name=Name;
}

void Human::Aging(){
    age++;
}

void Human::Growing(){
    height+=0.5;
}

int main(){
    Human kpk(22, 163, "Kim, Pyungkang");
    Human sjh(22, 162, "Shin, Jihyun");
    
    cout<<"Greeting"<<endl;
    kpk.AskName(sjh);
    sjh.AskName(kpk);
    kpk.AskAge(sjh);
    sjh.AskAge(kpk);
}