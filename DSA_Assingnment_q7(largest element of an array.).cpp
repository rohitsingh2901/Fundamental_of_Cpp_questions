#include<iostream>
using namespace std;
int main (){
    int n,max;
    int arr[100];
    cout<<"Enter the number of elements you want in array: ";
    cin>>n;
    cout<<"Enter your numbers:\n";
    for(int i=0;i<n;i++)
    {
    scanf("%d",&arr[i]);
    }
    max=arr[0];
    for (int j = 0; j < n; j++)
    { 
        if(arr[j]>max)
        {
            max = arr[j];
        }
    }
    cout<<"Max is "<<max<<endl;
    return 0;
    

}
