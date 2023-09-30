#include<iostream>
using namespace std;
int main()
{
int size,i,j,k;
cout<<"enter size of array:"<<endl;
cin>>size;
int *a=(int *)malloc(sizeof(int)*size);
cout<<"enter elements of array:"<<endl;
for(i=0;i<size;i++)
{
    cin>>a[i];
}
cout<< endl <<"array is:"<<endl;
for(i=0;i<size;i++)
{
    cout<<" "<<a[i];
}
cout<<endl;
for(i=0;i<size-1;i++)
{
    for(j=0;j<size-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            k=a[j];
            a[j]=a[j+1];
            a[j+1]=k;
        }
    }
}
cout<<"sorted array is:"<<endl;
for(i=0;i<size;i++)
{
    cout<<" "<<a[i];
}
cout<<endl;
}