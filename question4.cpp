//Define a function to print Pascal Triangle up to N lines.
#include<iostream>
using namespace std;
int factorial(int n)
{ int fact=1,i;
    for(i=1;i<=n;i++)
        fact=fact*i;
 return fact;
}
int comb(int n,int r)
{ return factorial(n)/(factorial(n-r)*factorial(r));
}
int main()
{ int n=5,i,j,k;
  int space=n;
    for(i=0;i<=n;i++)
    { for(k=1;k<=space;k++)
        {
          cout<<" ";
        }
        space--;
        for(j=0;j<=i;j++)
        {
          cout<<comb(i,j);
          cout<<" ";
        }
        cout<<endl;
    }
 return 0;
}
