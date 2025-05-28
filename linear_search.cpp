#include<iostream>
using namespace std;
int main()
{
    int i;
    int n;
    int s;
    int flag=0;
    cout<<"Enter the No of Elements:";
    cin>>n;
    int arr[n];
    cout<<"Enter the Elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the Search Element:";
    cin>>s;
    for(i=0;i<n;i++)
    {
        if(s==arr[i])
        {
cout<<"Element Found:"<<endl;
flag=1;
break;
        }

    }
    if(flag==0)
    {
        cout<<"Element Not Found";
    }

return 0;

}