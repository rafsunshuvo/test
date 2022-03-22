#include<iostream>
using namespace std;
int binarysearch(int *arr,int len,int key)
{
    int l=1,h=len,mid;
    if(len==0 || len<0)
    {
        return 0;
    }
    while(l<=h)
    {
        mid=(l+h)/2;
        //cout<< "Mid:"<<mid <<endl;

        if(key==arr[mid])
        {
            cout<< "found"<<endl;
            return mid;
        }
        if(key>arr[mid])
        {
            cout<< "Key is bigger"<<endl;
            l=mid+1;
        }
        if(key<arr[mid])
        {
            cout<< "Key is not bigger"<<endl;
            h=mid-1;
        }
    }


}
int main()
{
    int arr[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,200};
    int len=sizeof(arr)/sizeof(arr[0]);
    int key;
    cout<< "Give a search key:";
    cin>>key;
    int ans=binarysearch(arr,len,key);
    cout<< "position " << ans+1 << "th: " <<arr[ans] <<endl;
}
