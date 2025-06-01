#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter The No of Array Elements:";
    cin>>n;
    int arr[n];
    int i,j;
    cout<<"Enter the array Elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting Elements:";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(int i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                int temp;
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"After Sorting Technique:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}