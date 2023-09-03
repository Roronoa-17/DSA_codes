#include <iostream>
using namespace std;

int main()
{
    char A[] = "hElLO";

    for(int i = 0; A[i]!='\0' ; i++)
    {
        if(A[i]>=65 && A[i]<=90)
        {
            A[i] = A[i] + 32;
        }
        else if (A[i]>=97 && A[i]<=122)
        {
            A[i] = A[i] - 32;
        }
    }

    cout<<A;

    return 0;
}