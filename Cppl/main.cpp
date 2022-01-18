#include <iostream>

using namespace std;

int main()
{

    int *p;

    p = new int;
    int a =4;
    p = &a;

    cout<<p<<endl;
    cout<<*p<<endl;


    return 0;
}
