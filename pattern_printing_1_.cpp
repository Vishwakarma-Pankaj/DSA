//pattern printing 1 is to make square shaped image of any number.

#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"Enter a number: ";
    cin>>n;

    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            cout<<" "<<"*"<<" ";
        }
        cout<<endl;
    }
}
