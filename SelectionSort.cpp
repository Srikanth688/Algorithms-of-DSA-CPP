#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int arr[5];
    cout<<"Enter The Array Elements:";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    cout<<"Before Sorting Technique:";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;

    }
    cout<<"Sorting Technique:";
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
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
    cout<<"Displaying the Sorting Technique:";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
  
    return 0;
}