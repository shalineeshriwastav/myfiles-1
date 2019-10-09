#include<iostream>
using namespace std;
int main()
{
    int n;
    int arr[n];
    cout<<"enter the array element "<<"\n";
    for(int k=0;k<n;k++)
    {
    cin>>arr[k];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
                int x;
                x=arr[i];
                arr[i]=arr[j];
                arr[j]=x;
            }

        }
         cout<<arr[i]<<"\n";
    }

    return 0;
}
