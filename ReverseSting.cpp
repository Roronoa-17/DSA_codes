#include <iostream>
using namespace std;

// Reverse using another array
string Reverse1(char *A)
{
    char B[7];
     int i;
     
     for(i=0;A[i]!='\0';i++);

     i--;

     int j;
     for(j=0; i>=0 ; i--,j++)
     {
        B[j]=A[i];
     }

     B[j]='\0';

     return string(B) ;
}

// Reverse using two pointer approach
void Reverse2(char A[], int n)
{
    int i=0, j=n;
    while(j>i)
    {
        int b = A[i];
        A[i]=A[j];
        A[j]=b;
        j--;
        i++;
    }
    A[n+1] = '\0';

    cout<<A;
}


int len(char A[])
{
    int i;
    for(i=0; A[i]!='\0';i++);
    return i;
}

int main()
{
     char *A = "python";
    
     Reverse2(A, len(A));

     return 0;
} 