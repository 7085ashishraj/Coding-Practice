#include<iostream>
using namespace std;


void deletion(int a[],int&n, int& element)
{
    element=a[0];

    int last=a[n-1];

    n=n-1;

    int ptr=0;
    int left=1;
    int right=2;

    while(right<=n-1)
    {
    if(last>=a[left] && last>=a[right])
    {
    a[ptr]=last;
    return;
    }
    if(a[right]<=a[left])
    {
    a[ptr]=a[left];
    ptr=left;
    }
    else
    {
    a[ptr]=a[right];
    ptr=right;
    }
    left=2*ptr;
    right=left+1;

    }
    a[ptr]=right;
}
int main()

{
int a[]={60,31,40,11,8,21,31};
int n=sizeof(a)/sizeof(a[0]);
int element = 0;
deletion(a,n,element);
cout<<"Deleted element: "<<element<<endl;
cout<<"After deletion heap is:"<<endl;
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
return 0;
}