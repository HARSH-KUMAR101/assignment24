//Write a function using the default argument that is able to add 2 or 3 numbers.
#include<iostream>
using namespace std;
int add(int a,int b,int c=0)
{
  return a+b+c;
}
int main()
{ int x=10,y=20,z=30;
    cout<<"addition of x and y is "<<add(x,y)<<endl;
    cout<<"addition of x,y and z is "<<add(x,y,z)<<endl;
 return 0;
}
