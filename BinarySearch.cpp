#include<iostream>
using namespace std;
int main()
{
    int i;
    int flag=0;
    int n;
    int f=0;
  
    int m;
    int s;
    cout<<"Enter the No of Array Elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Search Element:";
    cin>>s;
    cout<<"Enter the Array Elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
      int l=n-1;
    while(f<=l)
    {
        m=((f+l)/2)+1;
        if(s==arr[m])
        {
            cout<<"Element Found:";
            flag=1;
            break;
        }
        if(s>arr[m])
        {
            f=m+1;
        }
        if(s<arr[m])
        {
            l=m-1;
        }
    }
    if(flag==0)
    {
        cout<<"Element Not found";
    }
    return 0;

}