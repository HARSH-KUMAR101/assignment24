//Define a function to check whether a given number is a term in a Fibonacci series or not.
#include<iostream>
using namespace std;
void fib(int n)
{ int a=1,b=0,c,i,flag=0;
    for(i=0;i<=n;i++)
    { c=a+b;
        if(c==n)
        { flag=1;
            break;
        }
      a=b;
      b=c;
    }
  if(flag!=1)
      cout<<"given number is not in the term in fibonacci series ";
  else
      cout<<"given number is in the term in fibonacci series ";
}
int main()
{ int n;
    cout<<"enter a number to check in fibonacci series:";
    cin>>n;
  fib(n);
return 0;
}
