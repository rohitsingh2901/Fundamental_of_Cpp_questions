#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if (n%2==0 and n!=2)
    {
        cout<<"Number is not prime."<<endl;
    }
    else if(n%3==0 and n!=3)
    {
        cout<<"Number is not prime."<<endl;
        
    }
    else if(n%5==0 and n!=5)
    {
        cout<<"Number is not prime."<<endl;
    }
    else if (n%7==0 and n!=7)
    {
        cout<<"Number is not prime."<<endl;
    }
    else if(n%11==0 and n!=11)
    {
        cout<<"Number is not prime."<<endl;
    }
    else if (n==1)
    {
        cout<<"Number is not prime."<<endl;

    }
    else if (n<0)
    {
        cout<<"Negative numbers cannot be prime"<<endl;
    }
    else {
        cout<<"Number is prime."<<endl;

    }
    return 0;
}