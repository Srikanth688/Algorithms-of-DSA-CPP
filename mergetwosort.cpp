#include<iostream>
#include<vector>
using namespace std;
void merge(int ar[],int br[],vector<int>&c,int f,int s)
{
    int ptr1=0;
    int ptr2=0;
    
    while(ptr1<f&&ptr2<s)
    {
        if(ar[ptr1]<br[ptr2])
        {
            c.push_back(ar[ptr1]);
            ptr1++;
            
        }
        else{
            c.push_back(br[ptr2]);
            ptr2++;
        }
    }
    if(ptr1<5)
    {
        while(ptr1<5)
        {
c.push_back(ar[ptr1]);
ptr1++;


        }
    }
    else{
        while(ptr2<3)
        {
            c.push_back(br[ptr2]);
            ptr2++;
            
        }

    }

}
int main()
{
    int a[5],b[3];
    vector<int>array;
    cout<<"Enter the array elements:";
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
    cout<<"The first array elements are:";
    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    cout<<"Enter the second array elements:";
    for(int i=0;i<3;i++)
    {
        cin>>b[i];
    }
        cout<<"The second array elements are:";
    for(int i=0;i<3;i++)
    {
        cout<<b[i]<<" ";
    }
    cout<<endl;
    cout<<"after merge two sorted:";
    merge(a,b,array,5,3);
    for(int arrays:array)
    {
        cout<<arrays<<" ";
    }
    

    return 0;
}