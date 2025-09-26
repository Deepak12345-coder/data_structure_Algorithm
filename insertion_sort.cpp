#include<iostream>
#include<algorithm>

using namespace std;
void insertion_sort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int key=arr[i];
        int j=i-1;
        while(arr[j]>key && j>=0)
         {
             arr[j+1]=arr[j];
             j--;
         }
        arr[j+1]=key;
    }
}
void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];

    }
    cout<<"array before swapping:";
    
    print_array(arr,n);
    
    insertion_sort(arr,n);
    cout<<"array after sorting";
    print_array(arr,n);


}