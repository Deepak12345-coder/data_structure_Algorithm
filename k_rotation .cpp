

void reverse_array(int arr[],int n ,int low,int high)
{
    while(low<=high)
    {
        int temp;
        temp=arr[low];
        arr[low]=arr[high];
        arr[high]=temp;
        low++;
        high--;

    }
}  
int main()
{
    int n;
    cout<<"Enter the value of n";
    cin>>n;
     int arr[n];
    cout<<"Enter element of array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>ar r[i];
    }
    cout<<endl;
    reverse_array(arr,n,0,n-1);
    reverse_array(arr,n,0,k-1);
    reverse_array(arr,n,k,n-1);
    
    cout<<"reverse array: "<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0; 
}