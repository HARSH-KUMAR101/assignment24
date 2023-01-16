//Define a function to swap data of two int variables using call by reference
#include<iostream>
using namespace std;
void swapnum(int &p,int &q)
{ int temp=p;
   p=q;
   q=temp;
}
int main()
{ int x=10,y=20;
    swapnum(x,y);
    cout<<"after swapping x = "<<x<<" and y = "<<y;

 return 0;
}
