//Write functions using function overloading to add two numbers having different data types.
#include<iostream>
using namespace std;
void add(int a,int b)
{
  cout<<"addition of 2 integer number is "<<a+b<<endl;
}
void add(float a,int b)
{
  cout<<"addition of one real and one integer number is "<<a+b<<endl;
}
void add(float a,float b)
{
  cout<<"addition of 2 real number is "<<a+b<<endl;
}
int main()
{ int a=10,b=20;
  float x=1.5,y=12.6;
    add(a,b);
    add(y,a);
    add(x,y);
return 0;
}

