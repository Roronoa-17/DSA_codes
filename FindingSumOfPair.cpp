#include <iostream>
using namespace std;

void TargetPair(int arr[], int n, int t)
{
    for(int i = 0; i < n-1 ; i++)
    {
        for(int j = i+1; j<n ; j++)
        {
            if(arr[i]+arr[j]==t)
            {
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    TargetPair(A, 10, 6);

    return 0;
}

