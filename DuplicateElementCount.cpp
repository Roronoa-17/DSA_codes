#include <iostream>
using namespace std;

void DuplicateCount(int arr[], int n)
{
    for(int i = 0; i<n-1; i++)
    {
        int j = 0;
        if(arr[i]==arr[i+1])
        {
            j = i + 1;
            while(arr[j]==arr[i])j++;
            cout<<arr[i]<<" "<<j-i<<endl;
            i = j - 1;
        }
    }
}

int main()
{
    int A[10] = {1, 1, 2, 3,3, 4,4, 5, 6,2};

    DuplicateCount(A, 10);

    return 0;
}