#include <stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return fact(n-1)*n;
    }
}

int Ifact(int n)
{
    int f=1;
    int i;
    for(i=1;i<=n;i++)
    {
        f*=i;
    }
    return f;
}

int main()
{
    int r;
    r=fact(5);
    printf("%d ", r);
    return 0;
}