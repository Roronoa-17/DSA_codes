#include <iostream>
using namespace std;

void Missing(int arr[], int l, int h, int n)
{
    int diff = arr[0] - 0;
    for(int i = 0; i < n ; i++)
    {
        if( arr[i] - i != diff)
        {
            while(diff < arr[i] - i)
            {
                cout<<diff + i<<" ";
                diff++;
            }
        }
    }
}


int main()
{
    int A[10] = {1, 2, 3, 5, 6, 8, 11, 14, 16, 18};

    Missing(A, 1, 18, 10);

    return 0;
}