#include<iostream>
#include<vector>
using namespace std;
int partation(vector<int> &arr,int low,int high)
{
     int pivot=arr[low];
    int i=low,j=high;
    int temp;
    while(i<j)
    {
        while(arr[i]<=pivot)
        {
            i++;
        }
        while(arr[j]>pivot)
        {
            j--;
        }
        if(i<j)
        {
            
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    temp=arr[low];
    arr[low]=arr[j];
    arr[j]=temp;
    return j;


}
void quicksort(vector<int> &arr,int low,int high)
{
    if(low<high)
    {
    int p=partation(arr,low,high);
    quicksort(arr,low,p-1);
    quicksort(arr,p+1,high);

}
}

int main()
{
    vector<int>arr={100,245,654,789,660,450};
    quicksort(arr,0,arr.size()-1);
    for(int val:arr)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
