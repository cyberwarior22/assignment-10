void prime_factor(int);

// function to print all prime factors of a given number.(TSRN)

void prime_factor(int n)
{
    printf("\nPrime factors are : ");
    for (int i=2 ; i<=n ; i++)
    {
        while(n%i==0)
        {
            printf("%d " ,i);
            n = n / i ;
        }
    }
}
