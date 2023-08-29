#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("Elements are\n");
    for(int i=0;i<arr.length;i++)
    {
        printf("%d ",arr.A[i]);
    }
}

void Append(struct Array *arr, int x)
{
    if(arr->length < arr->size)
    {
        arr->A[arr->length++] = x;
    }
}

void Insert(struct Array *arr, int index, int x)
{
    if(index>=0 && index <= arr->length)
    {
        for(int i = arr->length; i>index; i--)
        {
            arr->A[i]=arr->A[i-1];
        }
        arr->A[index]=x;
        arr->length++;
    }
}

int Delete(struct Array *arr, int index)
{
    int x = 0;

    if(index>=0 && index<arr->length)
    {
        x = arr->A[index];
        for(int i = index ; i < arr->length-1; i++)
        {
            arr->A[i]=arr->A[i+1];
        }
        arr->length--;
        return x;
    }
    return 0;
}

void swap(int *x, int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

int LinearSearch(struct Array *arr, int key)
{
    for(int i = 0; i<arr->length ; i++)
    {
        if(key==arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}

int BinarySearch(struct Array arr, int key)
{
    int l,mid,h;
    l=0;
    h=arr.length-1;

    while(l<=h)
    {
        mid=(l+h)/2;
        if(key==arr.A[mid])
        {
            return mid;
        }
        else if(key<arr.A[mid])
        {
            h=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }

    return -1;
}

int RBinarySearch(int a[], int l, int h, int key)
{
    if(l<=h)
    {
        int mid = (l+h)/2;

        if(key==a[mid])
        {
            return mid;
        }
        else if(key<a[mid])
        {
            return RBinarySearch(a, l, mid-1, key);
        }
        else
        {
            return RBinarySearch(a, mid+1, h, key);
        }
    }

    return -1;
}

int Get(struct Array arr, int index)
{
    if(index>=0 && index<arr.length)
    {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array *arr, int index, int x)
{
    if(index>=0 && index<arr->length)
    {
        arr->A[index]=x;
    }
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for(int i=1;i<arr.length; i++)
    {
        if(arr.A[i]>max)
        {
            max = arr.A[i];
        }
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for(int i=1;i<arr.length; i++)
    {
        if(arr.A[i]<min)
        {
            min = arr.A[i];
        }
    }
    return min;
}

int Sum(struct Array arr)
{
    int sum  = 0;
    for(int i = 0; i<arr.length; i++)
    {
        sum+=arr.A[i];
    }
    return sum;
}

float Avg(struct Array arr)
{
    return (float)Sum(arr)/arr.length;
}

// Normal approach
void Reverse(struct Array *arr)
{
    int *B;
    
    B = (int *)malloc(arr->length*sizeof(int));
    for(int i = arr->length-1, j = 0; i>=0; i--,j++)
    {
        B[j]=arr->A[i];
    }
    for(int i = 0; i<arr->length; i++)
    {
        arr->A[i]=B[i];
    }
}

// Two pointer approach
void Reverse2(struct Array *arr)
{
    for(int i=0,j=arr->length-1; i<j; i++, j--)
    {
        // int temp = arr->A[i];
        // arr->A[i]=arr->A[j];
        // arr->A[j]=temp;
        swap(&arr->A[i],&arr->A[j]);
    }
}


//Inserting and sorting an array
void InsertSort(struct Array *arr, int x)
{
    int i = arr->length-1;
    if(arr->length == arr->size)
    {
        return;
    }
    while(i>=0 && arr->A[i]>x)
    {
        arr->A[i+1]=arr->A[i];
        i--;
    }
    arr->A[i+1]=x;
    arr->length++;
} 

// Checking array is sorted or not
int IsSorted(struct Array arr)
{
    for(int i = 0; i<arr.length-1; i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            return 0;
        }
    }
    return 1;
}

// Rearranging negative elements to left side and positive elements to right side 
void  Rearranging(struct Array *arr)
{
     int i = 0 , j = arr->length-1;

     while(i < j)
     {
        while(arr->A[i] < 0)
        {
            i++;
        }
        while(arr->A[j] >= 0)
        {
            j--;
        }
        if(i<j)
        {
            swap(&arr->A[i], &arr->A[j]);
        }
     }
}

int main()
{
    struct Array arr = {{2,-3,4,5,-6, 7, -9}, 10, 7};
    
    //Append(&arr, 10);
    //Insert(&arr, 0, 10);
    //printf("%d\n", RBinarySearch(arr.A,0,arr.length, 9));
    //printf("%d\n", Get(arr,0));
    //printf("%d\n", Max(arr));
    //printf("%d\n", Min(arr));
    //printf("%d\n", Sum(arr));
    //printf("%f\n", Avg(arr));
    //Reverse2(&arr);
    //InsertSort(&arr, 8);
    //printf("%d\n", IsSorted(arr));
    Rearranging(&arr);
    Display(arr);

    return 0;
}