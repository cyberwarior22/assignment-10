

#include <stdio.h>
int factorial(int);

int main()
{ int n;
printf("Enter the number :");
scanf("%d",&n);
 printf("factorial of %d is : %d ",n,factorial(n));

    return 0;
}
int factorial(int a)
{ int fact=1;
 if (a==0)
 {return 1;}
    for(int i=1;i<=a;i++)
     fact=fact*i;
   return fact;

}
