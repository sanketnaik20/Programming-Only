#include <iostream>
using namespace std;
int main()
{
    int a[50], size, i,j,k,flag=0;
    cout << "enter size of array:" << endl;
    cin >> size;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];

    }
    cout<<"array is :"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<a[i]<<" "<<endl;
    }
    //checking if array is sorted or not;
    // for(i=0;i<size;i++)
    // {
    //     for(j=i+1;j<size;j++)
    //     {
    //         if(a[i]<=a[j])
    //         {
    //             k=a[i];
    //             a[j]=a[i];
    //             a[j]=k;
    //             flag=1;
                


    //         }
    //     }

    // }
    for(i=0;i<size;i++)
    {
    if(a[i+1<=a[i]])
    {
        
    }
    else{
        return false;

    }
    }
  return true;
    
}