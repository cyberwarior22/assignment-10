
#include <stdio.h>

 int Even_odd(int a)//function definition
{ 
   int n;
   printf("Enter the number :");
scanf("%d",&n);
if(n%2==0)
    {
    	return 1;
    	
	}
	else
	return 0;
}


int main()
{ 
int n;
printf("%d",Even_odd(n));//function calling

    return 0;
}

