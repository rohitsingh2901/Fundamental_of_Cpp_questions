 #include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter the year number: ";
    cin>>x;
    if(x%4==0)
    {
    cout<<"The "<<x<<" is leap year"<<endl;    
    }
    else if(x%100==0)
    {
    cout<<"The "<<x<<" is leap year"<<endl;    
    }
    else if(x%400==0)
    {
    cout<<"The "<<x<<" is leap year"<<endl; 
    }
    else{
    cout<<"The "<<x<<" is not a leap year"<<endl;    
    }
    return 0;
}
