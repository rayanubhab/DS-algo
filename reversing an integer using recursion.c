#include<stdio.h>

 

int revint(int n)
{
    int d;
    static int r=0;
    if(n==0)
    {
        return 0;
        
    }
    else
    {
        d=n%10;
        r=r*10+d;
        revint(n/10);
        return r;
    }
}

 

int main()
{
    int n;
    printf("Enter an integer ");
    scanf("%d", &n);
    
    printf("Reverse of %d is %d", n,revint(n));
}
