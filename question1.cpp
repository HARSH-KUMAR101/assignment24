#include<iostream>
using namespace std;
class primenumber
{ public:
    int n,flag=0;
   void checkprimenum()
   { for(int i=2;i<=n/2;i++)
       { if(n%i==0)
           { flag=1;
               break;
           }
       }
       if(flag==1)
        cout<<n<<" is not a prime number";
      else
        cout<<n<<" is prime number";
   }

};
int main()
{ primenumber a;
     cout<<"enter a number:";
     cin>>a.n;
   a.checkprimenum();
 return 0;
}
