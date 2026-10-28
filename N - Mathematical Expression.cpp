#include <iostream>
using namespace std;


int main()
{
    int a,b,c;
    char o,x;
    cin >>a>>o>>b>>x>>c;
    switch (o)
    {
    case '+':
        if (a+b ==c){
            cout<<"Yes";
        }else{
            cout << a+b;
        }
        break;
    case '-':
        if (a-b ==c){
            cout<<"Yes";
        }else{
            cout << a-b;
        }
        break;
    case '*':
        if (a*b ==c){
            cout<<"Yes";
        }else{
            cout << a*b;
        }
        break;
    case '/':
        if (a/b ==c){
            cout<<"Yes";
        }else{
            cout << a/b;
        }
        break;
    default:
        break;
    }

    
    
    return 0;
}






