#include <iostream>
using namespace std;

int main ()
{
    int a,b,x;
    cin>>a,cin>>b;
    a>b? x=a%b:x=b%a;
    if (x==0){
        cout<<"Multiples";
    }
    else {cout<<"No Multiples";};

}