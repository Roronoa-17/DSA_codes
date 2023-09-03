#include <iostream>
using namespace std;

int main()
{
    char *n = "Hello";

    int i;
    for(i=0; n[i]!='\0'; i++);

    cout<<"The length: "<<i<<endl; 

    return 0;    
}