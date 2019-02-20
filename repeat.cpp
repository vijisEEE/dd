#include<bits/stdc++.h>
using namespace std;
void print(int arr[],int low,int high)
{
if(low>high)
return -1;
int mid=(low+high)/2;
if(arr[mid]!=mid+1)
{
if(mid>0 && arr[mid]==arr[mid-1])
return mid;
return print(arr,low,mid-1);
}
return print(arr,mid+1,high);
}
int main()
{
int arr[]={1,2,3,2,3,4,3};
int n=sizeof(arr)/sizeof(arr[0]);
int index=print(arr,0,n-1);
if(index!=-1)
cout<<arr[index];
return 0;
}
