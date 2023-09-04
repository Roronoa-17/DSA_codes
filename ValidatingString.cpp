#include <iostream>
using namespace std;

bool validate(char *n)
{
    for(int i = 0; n[i]!='\0'; i++)
    {
        if(!(n[i]>=65 && n[i]<=90) && !(n[i]>=97 && n[i]<=122) && !(n[i]>=48 && n[i]<=57))
        {
            return 0;
        }
        return 1;
    }

}

int main()
{
    char *A = "PRiyesh17";

    cout<<validate(A)<<endl;
    return 0;
}