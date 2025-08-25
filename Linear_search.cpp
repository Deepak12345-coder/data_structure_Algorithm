#include<iostream>
using namespace std;  

int linear_search(int arr[],int n ,int target)
{  
     for(int i=0;i<n;i++)
     {
        if(arr[i]==target)
           {
            return 1;
           }
     }
   return 0
}

int main()
{
    // 
    int n;
    cout<<"Enter the value of n";
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    // int n=sizeof(arr)/sizeof(arr[0]); 
    int target=7;
    int flag=linear_search(arr,n,target);
    if(flag==1)
    {
        cout<<"target value present in array ";
    }
    else{
        cout<<"Element is not present in array ";
    }
    return 0;
}


// incrreasing   1 3 4 6 7 90  105 
// decreaseing   105 90 7  6 4 3 1
// non - increasing  105 90 90 34  5 1
//  non -decreasing 