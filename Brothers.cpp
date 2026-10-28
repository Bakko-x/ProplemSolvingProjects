#include <iostream>
using namespace std;

int main ()
{

    string p1;
    string p2;

    getline(cin,p1);
    getline(cin,p2);

    size_t pos1=p1.find(" ");
    size_t pos2=p2.find(" ");

    
    if (p1.substr(pos1+1) ==p2.substr(pos2+1)){
        cout<<"ARE Brothers";
    }
    else{
        cout<<"NOT";
    }


    return 0;
}
