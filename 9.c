int contains_digit(int , int);

// function to check whether a given number contains a given digit or not. (TSRS)

int contains_digit(int n , int digit)
{
    int s ;
    for (int i = n ; i!=0 ; ) 
    {
        s = i % 10 ;
        if(s==digit)
        return 1 ;
        i = i / 10 ;
    }
}
