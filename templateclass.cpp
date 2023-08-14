#include<bits/stdc++.h>
using namespace std;

template<typename T>
class Arithmetic
{
    private:
    T a;
    T b;

    public:
    Arithmetic(T a, T b);
    T add();
    T sub();
};

template<typename T>
Arithmetic<T>::Arithmetic(T a, T b)
{
    this->a=a;
    this->b=b;
}

template<typename T>
T Arithmetic<T>::add()
{
    T c;
    c=a+b;
    return c;
}

template<typename T>
T Arithmetic<T>::sub()
{
    T c;
    c=a-b;
    return c;
}

int main()
{
    Arithmetic<int> ar(10,5);
    cout<<ar.add()<<endl;

    Arithmetic<float>ar1(1.6, 1.2);
    cout<<ar1.add();
}