int permutation(int,int);

/* function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS) */

int permutation(int n , int r)
{
    int p , n1 = 1 , n2 = 1 ;
    for (int i = n ; i>0 ; i--)
    n1 = n1 * i ;
    for (int j = n-r ; j>0 ; j--)
    n2 = n2 * j ;
    p = n1/n2 ;
    return p ;
}
