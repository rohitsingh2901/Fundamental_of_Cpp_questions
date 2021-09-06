#include<iostream>
using namespace std;
int main(){
    int n,x=0,y=1,i,z;
    cout<<"Enter the number upto which you want to print fibonacci series: ";
    cin>>n;
    cout<<x<<" "<<y<<" ";
    for (i=0 ; i<n-2 ; i++ )
    {
        z=x+y;
        cout<<" "<<z<<" ";
        x=y;
        y=z;
    }
    return 0;
}