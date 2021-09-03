#include<iostream>
#include<conio.h>

using namespace std;
class Student{
public:
    int id;
    int age;
    double cgpa;
    void display(){
        cout << "ID = " << id << ",\nAGE = " << age <<", \nCGPA = " << cgpa <<endl<<endl;

    }



};

int main(){
    Student dipta,keya;
    //dipta details
    cout << "Dipta Details:" <<endl;
    dipta.age = 27;
    dipta.cgpa = 2.5;
    dipta.id = 11712644;
    dipta.display();
    //keya details
    cout << "Keya Details:" << endl;
    keya.age = 23;
    keya.cgpa = 3.5;
    keya.id = 446655;
    keya.display();


getch();
return 0;
}
