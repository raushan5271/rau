#include<iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"enter number ";
    cin>>a>>b;
    cout<<"a="<<a<<"b="<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<b;
    return 0;
}