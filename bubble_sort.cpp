
#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value of n";

    cin>>n;
    int arr[n];
    //array from user
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    } 
    cout<<"array before sorting:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;//



    // selection  sort code  
    for(int i=0;i<n-1;i++)
    {
        int min_index=i;
        for(int j=i+1;;j<n;j++)
        {
            if(arr[min_index]>arr[j])
            {

                min_index=j;
            }
        }   

        // i th index element with minimum index element ;
          int temp=arr[i];
          arr[i]=arr[min_index];
          arr[min_index]=temp;

        // print the output of every iteration 
       cout<<"iteration " <<i+1<<":";
        for(int k=0;k<n;k++)
        {
           cout<<arr[k]<<" ";
        }
   cout<<endl;
   




    }
    
    

    // print array 
  cout<<"array after sorting :";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}