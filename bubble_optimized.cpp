#include<bits/stdc++.h>
// #include<iostream>
// #include<algorithm>
using namespace std ;

void print_array(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    } 
    cout<<endl;
}

void bubble_optimized(int arr[],int n)
{     bool flag;
       
    for(int i=0;i<n-1;i++)
    {  
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {   flag=true;
                swap(arr[j],arr[j+1]);

            }
        }
        cout<< "after iteratoion " << i+1<< " array :  ";
        print_array(arr,n);
        //  if(!flag)
        //    break;
    }

}
void bubble_sort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {  
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);

            }
        }

    }
}


int main()
{
    int n;
    cout<<"Enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of array "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>> arr[i];

    }
    cout<< "array before sorting algorithm :";
    print_array(arr,n);
    bubble_optimized(arr,n);
    cout<<"array after sorting:";
    print_array(arr,n);
    return 0;
}

