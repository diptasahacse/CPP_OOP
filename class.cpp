#include<iostream>
#include<conio.h>

using namespace std;
class Student{
public:
    void display1();
    void display2();

};
void Student :: display1(){
    cout << "Function is called using normal way" << endl;
}

void Student :: display2(){
    cout << "Function is called using another way" << endl;
}

int main(){

Student s1;
s1.display1(); // one way to call the function
Student *p = &s1;
p -> display2(); // another way to call the function


return 0;
}
