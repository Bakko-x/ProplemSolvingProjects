#include <iostream>
using namespace std;

int main (){

    int x,y,g;
    cin >>x;
    int c=x-1;

    int A[x]={};

    for (x=0;x<=c;x++){
        cin>>y;
        A[x]=y;
}




    for (x=0;x<c;x++)
    {
        if (A[x]>A[x+1]){
            g=A[x];
            A[x]=A[x+1];
            A[x+1]=g;
        }
        else{

            g=A[x+1];
        }


    }

    cout <<g<<endl;

    
















    return 0;
}