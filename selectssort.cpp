#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i;
    cout<<"Enter the Elements:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Selecting sorting Technique:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    for(i=0;i<5;i++)
    {
        for(int j=i+1;j<5;j++)
        {
if(arr[i]>arr[j])
{
    int temp;
    temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
        }

    }
    cout<<"After Sorting the Elements:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;



}