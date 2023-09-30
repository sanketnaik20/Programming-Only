#include<iostream>
using namespace std;
int main()
{
    int a[100],i,size,target,flag;
    cout<<"enter size of array:"<<endl;
    cin>>size;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<endl;
    cout<<"enter target"<<endl;
    cin>>target;
    for(i=0;i<size;i++)
    {
      if(a[i]==target)
      {
        cout<<"element found and the element position is:  "<<i+1<<endl;
        flag=1;
        break;
      }
    }
    if(flag==0)
    {
        cout<<"element not found"<<endl;
    }
}
//time complexity is 0(n)
//space complexity is 0(1)
// bcoz size of array is constant so 0(1) 
