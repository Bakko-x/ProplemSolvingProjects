#include <iostream>
using namespace std;

int main ()
{
    int a,b;
    char op;




    cin >> a >> op >>b;

    if (a >= 1 && b >= 1)
    {
        switch(op)
        {
            case '+':
            cout<<a+b;
            break;
            case '-':
            cout<<a-b;
            break;
            case '*':
            cout<<a*b;
            break;
            case '/':
            cout<<a/b;
            break;
            default:
            break;


        }

    }


    return 0;
}