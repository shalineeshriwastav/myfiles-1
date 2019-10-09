#include<iostream>
using namespace std;
int main()
{
    int arr[5]={3,5,1,8,9};
    for(int i=0;i<5;i++)
    {
        for(int j=i+1;j<=4;j++)
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
