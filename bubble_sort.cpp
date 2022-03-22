#include<bits/stdc++.h>
using namespace std;
void bubblesort(int *arr,int len)
{
    if(len==0 || len <0)
    {
        return;
    }
    for(int i=0; i<len-1; i++)
    {
         int flag=0;
        for(int j=0; j<len-1-i; j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap(arr[i],arr[j+1]);
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }

        }
        if(flag==0)
        {
            break;
        }
    }
}

int main()
{

    int arr[]= {16,14,5,6,8};
    int len=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr,len);
    for(int i=0;i<len;i++)
    {
        cout<< arr[i]<< " ";
    }
}
