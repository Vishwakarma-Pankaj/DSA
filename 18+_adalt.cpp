#include<iostream>
using namespace std;

int main ()
{
    int age;
    cout<<"Enter age :";
    cin>>age;
     
    if(age>18) 
    {
        cout<<"adult";
    }else{
        cout<<"minor";
    }
}