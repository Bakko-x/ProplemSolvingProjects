#include <iostream>
using namespace std;


int main (){


    int n,i,x;
    i=0;
    cin >>n;
    x=0;
    while((n-x)>=0)
    {
    i++;
    x+=i;
    if ((n-x)<0){
        i--;
        break;
    }
    n-=x;
    
    
    }

    cout <<i<<endl;

    return 0;
}