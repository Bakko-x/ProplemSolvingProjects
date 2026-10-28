#include <iostream>
#include <list>
using namespace std;

int main()
{

    int a,b,c;
    list<int> numbers;

    cin >>a>>b>>c;

    numbers.push_back(a);
    numbers.push_back(b);
    numbers.push_back(c);

    numbers.sort();

    cout<<numbers.front()<<" "<<numbers.back();

    return 0;
}