#include<iostream>
using namespace std;
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum1=0,element,n=size+1;
    int sum=n*(n+1)/2;
    for(int i=0;i<size;i++)
    {
        sum1+=arr[i];
    }
    element=sum-sum1;
    cout<<element<<endl;
    return 0;
}
