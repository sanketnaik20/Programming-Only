#include<iostream>
using namespace std;
//endl is used to change the lines just like how we used to change the line in c by using \n
//cin is used to take input from the user
//cout is used to take output from the user
//using namespace is used after header file #include<ilostream> which contains all the code for cin and cout fucntion
//return 0 is used when you use int main if you use void  main () then no need to use return 0
int main()
{
    int a[100],i,size;
    int sum=0;
    cout<<"enter size of array:"<<endl;
    cin>>size;
    cout<<"enter elements of array:"<<endl;
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    cout<<"array is:"<<endl;
    for(i=0;i<size;i++)
    {
        cout<<" "<<a[i];
    }
    for(i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    cout<<endl<<"sum is " ""<< sum <<endl;

    return 0;
}

