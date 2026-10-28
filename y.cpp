#include <iostream>
#include <string>

using namespace std;

int main (){

    int y,n,o,l;
    string b;

    cin >>y;
    y++;

    o=0;
    l=0;

while(l<3)
{        o=0;
        l=0;
        for (auto i : std::to_string(y))
        {   
            
            b=std::to_string(y);
            b[o]='*';

            if (b.find(i) != std::string::npos){
                break; // i found in b
            }
            else{
                l++;
                if (o==2&&l==3){
                    
                    cout<<y<<endl;
                    exit(0);
                }
            }

            o++;
            if (o==3)break;











      
    
        }

y++;

}    




    return 0;
}