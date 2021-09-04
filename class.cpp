#include<iostream>
#include<conio.h>

using namespace std;
class Student{
public:
    int id;
    int age;
    double cgpa;
    Student(int i,int a,double c);
    void display(int n);



};
// Constructor definition outside the class
Student :: Student(int i,int a,double c){
        id = i;
        age = a;
        cgpa = c;

}
//Method/function definition outside the class
void Student :: display(int n){
        cout << n<< ".\nID = " << id << ",\nAGE = " << age <<", \nCGPA = " << cgpa <<endl<<endl;

}

int main(){
    //dipta details
    cout << "Dipta Details:" <<endl;
    Student dipta(11712644,27,2.5);
    dipta.display(1);
    //keya details
    cout << "Keya Details:" << endl;
    Student keya(446655,23,3.5);
    keya.display(2);


getch();
return 0;
}
