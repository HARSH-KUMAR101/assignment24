//Write functions using function overloading to find a maximum of two numbers and both the numbers can be integer or real.
#include<iostream>
using namespace std;
void maxnum(int a,int b)
{
  a>b?cout<<"maximum number is "<<a:cout<<"maximum number is "<<b<<endl;
}
void maxnum(float a,float b)
{
  a>b?cout<<"maximum number is "<<a:cout<<"maximum number is "<<b<<endl;
}
int main()
{ int x=10,y=20;
  float a=1.5,b=0.5;
    maxnum(x,y);
    maxnum(a,b);
 return 0;
}
