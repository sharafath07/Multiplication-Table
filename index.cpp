#include <iostream>
using namespace std;
int main()
{
    int num, i;

    cout<<"Enter a Number : ";
    cin>>num;

    for(i=1;i<=12;i++)
        cout<<i<<" x "<<num<<" = "<<i*num<<"\n";

    return 0;
}