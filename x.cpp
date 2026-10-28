#include <iostream>
using namespace std;


int main (){
    int n,i,x,a;
    i=0;
    cin >>n;
    x=0;
    while((n-x)>=0){
            x=x+i;
            if ((n-x)<=0){
                break;
            }
            n-=x;
            x+=i;
            i++;
                     

        };
        
        
        cout <<i<<endl;


    return 0;
}