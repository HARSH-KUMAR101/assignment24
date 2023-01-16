//Define a function to find the highest value digit in a given number.
#include<iostream>
using namespace std;
class maxdigit
{ public:
    int x,rem;
  void highestvalue()
    { int max=0;
      while(x!=0)
       { rem=x%10;
           if(rem>max)
            max=rem;
            x=x/10;
       }
    cout<<"greatest digit in given num is "<<max;
   }
};
int main()
{  maxdigit a;
    cout<<"enter a number:";
    cin>>a.x;
  a.highestvalue();
 return 0;
}
