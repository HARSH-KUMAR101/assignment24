//Define overloaded functions to calculate area of circle, area of rectangle and area of triangle
#include<iostream>
using namespace std;
void area(float radius)
{
  cout<<"area of circle is "<<3.14*radius*radius<<endl;
}
void area(float l,float b)
{
  cout<<"area of rectangle is "<<l*b<<endl;
}
void area(int base,int height)
{
    cout<<"area of triangle is "<<0.5*base*height<<endl;
}
int main()
{
   area(7.5);
   area(5,5.5);
   area(10,15);
return 0;
}
