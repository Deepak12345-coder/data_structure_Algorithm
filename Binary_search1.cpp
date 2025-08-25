#include<iostream>
using namespace std;
 int binary_search(int arr[],int n,int target)
 {
    int left=0;
     int right= n-1;  

    while(left<=right)
    {
        int mid=(left+right)/2;
        if(arr[mid]==target)
        {
            return mid;
        }
        if(arr[mid]<target)
        {
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    } 
    return -1;
 }
int main()
{
    int arr[]={1,4,5,68,89,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int target=68;
    int result=binary_search(arr,n,target);
    if(result!=-1)
    {
        cout<<"target is found ";
    }
    else{
        cout<<"target is not found";
    }

   return 0; 
}  


/// find count of target in array and print it 
// revefse the array using third array 
// reverse the array using while loop 
// rotate array left and write one time,2 times ,k times 