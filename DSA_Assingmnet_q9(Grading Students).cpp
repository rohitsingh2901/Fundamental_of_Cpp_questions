#include<iostream>
using namespace std;
int n,x[20],grade[100];
int main(){
    cin>>n;
    for (int i=0;i<n;i++)
    {
        cin>>grade[i];
    }
    for(int k=0;k<20;k++)
    {
        x[k]=5*(k+1);
        for(int l=0; l<n;l++)
        {
            if(grade[l]>=38 and x[k]-grade[l]>=0 and x[k]-grade[l]<3)
            {
                grade[l]=x[k];
            }
            else{
                grade[l]=grade[l];
            }
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<grade[j]<<endl;
    }
return 0;


}
