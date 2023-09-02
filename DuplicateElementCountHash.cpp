#include <iostream>
using namespace std;

int main()
{
    int A[13] = {1,2,3,4,5,5,1,6,6,6,7,7,8};

    int C[100]={0};

    for(int i = 0 ; i< 13 ; i++)
    {
        C[A[i]]++;
    }

    for(int i = 1; i<=8 ;i++)
    {
        cout<<i<<" "<<C[i]<<endl;
    }


    return 0;
}