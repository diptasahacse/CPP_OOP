#include<iostream>
#include<conio.h>

using namespace std;
class Student{
public:
    Student(); //constructor
    ~Student(); //destructor
    void display();

};
//constructor definition
Student :: Student(){
    cout << "Constructor is called" <<endl;
}

//destructor definition
Student :: ~Student(){
    cout << "Destructor is called" << endl;
}
void Student :: display(){
    cout << "Function is called" << endl;
}


int main(){

Student s1;
s1.display();


return 0;
}
