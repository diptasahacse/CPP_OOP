#include<iostream>
#include<conio.h>

using namespace std;
class Student{
public:
    int id;
    int age;
    double cgpa;



};

int main(){
    Student dipta,keya;
    //dipta details
    cout << "Dipta Details:" <<endl;
    dipta.age = 27;
    dipta.cgpa = 2.5;
    dipta.id = 11712644;
    cout << "ID = " << dipta.id << ",\nAGE = " << dipta.age <<", \nCGPA = " << dipta.cgpa <<endl<<endl;
    //keya details
    cout << "Keya Details:" << endl;
    keya.age = 23;
    keya.cgpa = 3.5;
    keya.id = 446655;
    cout << "ID = " << keya.id << ",\nAGE = " << keya.age <<", \nCGPA = " << keya.cgpa ;


getch();
return 0;
}
