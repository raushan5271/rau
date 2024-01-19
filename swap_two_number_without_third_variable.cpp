#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter number ";
    cin>>a>>b;
    cout<<"a="<<a<<"b="<<b<<endl;
    cout<<"Before swap number is "<<a<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout<<"after swap number is "<<a<<b;
    return 0;
}