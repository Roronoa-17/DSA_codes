#include <iostream>
using namespace std;

void Missing_hash(int arr[], int h, int l, int n)
{
    int H[h]={0};
    for(int i = 0; i<n ; i++)
    {
        H[arr[i]]++;
    }

    for(int i = l; i<=h ; i++)
    {
        if(H[i]==0)
        {
            cout<<i<<" ";
        }
    }
}

int main()
{
    int A[10] = {1, 2, 3, 5, 6, 8, 11, 14, 16, 18};

    Missing_hash(A, 18, 1, 10);

    return 0;
}