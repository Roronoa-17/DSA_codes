#include <bits/stdc++.h>
using namespace std;

class Diagonal
{
    private:
    int *A, n;
    Diagonal(int n);
    void create();
    int Get(int i, int j);
    void set(int i, int j ,int x);
    void Display();
    ~Diagonal();
};

Diagonal::Diagonal(int n)
{
    this->n = n;
    A = new int[n]; 
}

Diagonal::~Diagonal()
{
    delete []A;
}

void Diagonal::create()
{
    for(int i = 1; i<=n ; i++)
    {
        for(int j = 1; j <= n; j++)
        {
            cin>>x;
            if(i==j)
            {
                A[i-1] = x;
            }
        }
    }
}

void Diagonal::Display()
{
    for(int i = 1; i <= n ; i++)
    {
        for(int j = 1; j <= n ; j++)
        {
             if(i >= j)
             {
                cout<<A[i*(i-1)/2 + j-1]<<" ";
             }
             else
             {
                cout<<"0 ";
             }
        }
        cout<<endl;
    }
}