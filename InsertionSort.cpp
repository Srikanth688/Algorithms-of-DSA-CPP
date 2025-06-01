#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n=5;
    int temp;
    int arr[n];
    cout<<"Enter the No of Array elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting Technique:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(i=1;i<n;i++)
    {
        for(j=i-1;j>=0;j--)
        {
if(arr[j]>arr[j+1])
{
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=temp;
}
        }
    }
    cout<<"After Sorting technique:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}