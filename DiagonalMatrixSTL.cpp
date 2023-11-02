#include <bits/stdc++.h>/
using namespace std;

void Set(vector <int> &l, int i , int j , int x)
{
    if(i==j)
    {
        l[i-1] = x;
    }
}

int Get(vector<int> &p, int i , int j)
{
    if(i==j)
    {
        return p[i-1];
    }
    else 
    {
        return 0;
    }
}

void Show(vector<int> &v, int n)
{
    int i ,j;
    for(i = 0 ; i < n; i++)
    {
        for(j = 0 ; j < n; j++)
        {
            if(i==j)
            {
                cout<<v[i]<<" ";
            }
            else
            {
                cout<<0<<" ";
            }
        }
        cout<<endl; 
    }
}


int main()
{
    vector <int> k(10, 0);
    int n = 4; // no of elements
    Set(k,1,1,6);
    Set(k,2,2, 4);
    Set(k, 3,3, 5);
    Set(k, 4,4,6);

    Show(k, n);

}


  