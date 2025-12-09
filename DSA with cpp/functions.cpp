#include <iostream>
using namespace std;
void SWAP (int a,int b)
{
    int t;
    t=a;
    a=b;
    b=t;
    cout<< "The swaping values are"<<a<<b<<endl;
}
int main ()
{
    int a,b;
    cin>>a>>b;
    SWAP(a,b);
    cout<<"The value after swaping are "<<a<<b;
    return 0;
}