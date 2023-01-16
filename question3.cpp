//Define a function to calculate x raised to the power y.
#include<iostream>
using namespace std;
class power
{ public:
    int x,y,result=1;
    void numpower(){
       while(y!=0)
       { result=result*x;
        y--;
       }
      cout<<"x power y is "<<result;
    }
};
int main()
{ power a;
     cout<<"enter a number: ";
     cin>>a.x;
     cout<<"enter power: ";
     cin>>a.y;
  a.numpower();
return 0;
}
