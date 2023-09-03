#include <iostream>
using namespace std;

int main()
{
    int A[10] = {1,2,3,5,6,4,8,9,11,23};
    int min = A[0], max = A[0];
    for(int i = 0; i<10 ; i++)
    {
        if(A[i]<min)
        {
            min = A[i];
        }
        else if(A[i]>max)
        {
            max = A[i];
        }
    }

    cout<<min<<" "<<max<<endl;

    return 0;
}