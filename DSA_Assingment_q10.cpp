#include<iostream>
using namespace std;
int main(){
    string s;
    int size,count=0;
    cin>>s;
    size=s.length();
    for(int i=0; i<size; ++i)
    {
        if(s[i]>='A' and s[i]<='Z')
        {
            count=count+1;
        }
    }
    cout<<count+1<<endl;
}