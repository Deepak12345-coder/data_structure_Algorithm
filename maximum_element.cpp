#include<iostream>
using namespace std;  
int  maximum_element(int arr[],int n)
{
    int maxi=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>maxi)
        {
            maxi=arr[i];
        }
    }  
    return maxi ;
}    


 // find second largest element in array 
 // reverse the array using another array  

int main()
{
    int arr[]={1,2,3,4,5,6,78,90};
    int n=sizeof(arr)/sizeof(arr[0]);
 int maxi=  maximum_element(arr,n);
 cout<<maxi;



}