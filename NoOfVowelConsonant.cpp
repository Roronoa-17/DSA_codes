#include <iostream>
using namespace std;

int main()
{
    char A[] = "Hello Brother";
    int v = 0, c=0;

    for(int i = 0; A[i]!='\0';i++)
    {
        if(A[i]=='a' || A[i]=='e' || A[i]=='i' || A[i]=='o' || A[i]=='u')
        {
            v++;
        }
        else if ((A[i]>=65 && A[i]<=90) || (A[i]>=97 && A[i]<=122))
        {
            c++;
        }
    }

    cout<<v<<" "<<c<<endl;

    return 0;
}