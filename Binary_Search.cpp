#include<iostream>
using namespace std;
int main(){

    int n,f,l,flag=0;
    int s;
    cout<<"Enter the no of Integers:";
    cin>>n;
    int i;
    int arr[n];
    cout<<"Enter the elements:";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter the search Element:";
    cin>>s;
    f=0;
    l=n;
    while(f<=l)
    {
        int m=(f+l)/2;
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
        cout<<"The Element are not Found:";
    }
    return 0;
}
