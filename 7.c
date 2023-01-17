

#include <stdio.h>
int factorial(int n)
{ int a=1;
if(n==0)
  return 0;

for(int i=1;i<=n;i++)
     a=a*i;
  return a;
}
int permutation(int,int);
int main()
{
   int n,r;
   printf("Enter the value of items ");
   scanf("%d",&n);
   printf("Enter the value of r ");
   scanf("%d",&r);
   printf("combinations is : %d",factorial(n)/(factorial(n-r)*factorial(r)));

    return 0;
}


