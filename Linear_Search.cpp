#include<iostream>
using namespace std;
int main()
{
    int flag=0;
    int n;
    cout<<"Enter the No Of Array Elements:";
    cin>>n;
    int array[n];
    cout<<"Enter the array elements:";
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
    int s;
    cout<<"Enter the Search Element:";
    cin>>s;
    for(int i=0;i<n;i++)
    {
        if(array[i]==s)
        {
            cout<<"The Element is Found";
            flag=1;
            break;
        }

    }
    if(flag==0)
    {
        cout<<"The Search Element is Not found";

    }
    return 0;
}
