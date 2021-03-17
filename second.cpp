/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
class student
{
    public:
    student()//default
    {
        cout<<"\nmy name is jhonny";
    }
    student(int a,int b)//parameterized
    {
        cout<<"\nvalue of number:"<<a<<b;
    }
    ~student()///destructor
    {
        cout<<"\ndestructor arrived :(";
    }
};
int main()
{
    student obj;
    student obj1(2,3);
    return 0;
}

