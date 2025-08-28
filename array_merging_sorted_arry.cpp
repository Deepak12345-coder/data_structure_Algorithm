#include<iostream>
using namespace std;

int main()
{
    int N; // no of element in first array;
     cout<<"Enter the value of N"<<endl;

     cin>>N;
     int arr1[N];
     cout<<"Enter the elemetns of first array"<<endl;
     // taking input array from user 
     for(int i=0;i<N;i++)
     {
        cin>>arr1[i];
     }
     cout<<endl; 
     int M; 
     cout<< "Enter the value  of M "<<endl;
     cin>>M;
     int arr2[M];
     cout<<"Enter the second array"<<endl;
     for(int i=0;i<M;i++)
     {
         cin>>arr2[i];
     }
     cout<<endl;
     cout<<"Second array:";
     for(int i=0;i<M;i++)
     {
        cout<<arr2[i]<<" ";
     }
     cout<<endl;
     // merge array in third array;

     int i=0;
     int j=0;
     int k=0;
     int arr3[N+M];
     while(i<N && j<M)
     {
        if(arr1[i]<=arr2[j])
        {
            arr3[k]=arr1[i]; 
            i++;

        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
     }
     // out two array any can be left 
      while(i<N)
      {
        arr3[k]=arr1[i];
        i++;
        k++;

      }
      //
      while(j<M)
      {
        arr3[k]=arr2[j];
        j++;
        k++;
      }
     // print the third array
     cout<<"third array : ";
     for(int index=0;index<M+N;index++)
     {
        cout<<arr3[index]<<" ";
     }
     return 0;
}