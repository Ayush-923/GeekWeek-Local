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
    student(int a,int b)// if parameter is mentioned
    {
        cout<<"value of a:"<<a;
        cout<<"\nvalue of b:"<<b;
        cout<<"\nvision died";
    }
    ~student()//destuctor
    {
        cout<<"\nthanos snapped";
    }
};
int main()
{
    student obj(2,3);
    return 0;
}
