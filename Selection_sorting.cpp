#include<iostream>
using namespace std;
int main()
{
    int n;
    int i,j;
    cout<<"Enter the Number of Elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Array Elemets:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
cout<<"Before Sorting the Elements:";
for(i=0;i<n;i++)
{
    cout<<arr[i]<<endl;
}
//After Sorting the Elements//
for(i=0;i<n;i++)
{
    for(j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }

    }
    
    }

    cout<<"After Sorting Elements are:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i];
}
return 0;
}