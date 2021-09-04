#include<iostream>
#include<conio.h>

using namespace std;
class Student{
public:
    int id;
    const int regNo ,marks;
    Student(int x , int y , int z);


};
Student :: Student(int x , int y , int z)
: regNo(y),marks(z)
{
    id = x;
    cout << id <<" , " << regNo <<" , " << marks;

}

int main(){

Student s(3,5,80);

return 0;
}
