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

void TargetPairHash(int arr[], int n, int t)
{
    int H[100]={0};
    for(int i = 0; i<n ; i++)
    {
        if(H[t-arr[i]]==1)
        {
            cout<<arr[i]<<" "<<t-arr[i]<<endl;
        }
        H[arr[i]]++;
    }
}

int main()
{
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    TargetPairHash(A, 10, 6);

    return 0;
}

