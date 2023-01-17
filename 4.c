

#include <stdio.h>
void natural(int a)//function definition
{ 
  for (int i=1;i<=a;i++)
{
	 printf("%d ",i);
}

}


int main()
{ int n;
printf("Enter the value of N :");
scanf("%d",&n);
 natural(n);//function calling

    return 0;
}

