#include<bits/stdc++.h>
using namespace std;
int binarysearch(int *arr,int l,int h,int key)
{

    if(l>h)
    {
        return 0;
    }
    int mid=(l+h)/2;
    cout<< "Mid:"<<mid<<endl;
    if(key==arr[mid])
    {
        return mid;
    }
    if(key>arr[mid])
    {
        l=mid+1;
        binarysearch(arr,l,h,key);
    }
    if(key<arr[mid])
    {
        cout<< "Key is less  than mid"<<endl;
        h=mid-1;
        binarysearch(arr,l,h,key);
    }
}

int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<< "Give a search key:";
    cin>>key;
    int ans=binarysearch(arr,arr[0],arr[len-1],key);
    cout<< "position " << ans+1 << "th: " <<arr[ans] <<endl;
}
