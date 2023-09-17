#include <iostream>
using namespace std;

int main()
{
    char B[] = "Letter";

    int i;

    int U[26]={0},L[26]={0};

    for(i=0;B[i]!='\0';i++)
    {
        U[B[i]-97]++;
    }
    for(i=0;B[i]>=65 && B[i]<=90 && B[i]!='\0';i++)
    {
        L[B[i]-65]++;
    }

    for(int j = 0; j < 26; j++)
    {
        if(U[j]>1)
        {
            cout<<(char)(j+97)<<" "<<U[j]<<endl;
        }
    }

    for(int j = 0; j < 26; j++)
    {
        if(L[j]>1)
        {
            cout<<(char)(j+65)<<" "<<L[j]<<endl;
        }
    }

    return 0;
}