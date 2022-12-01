#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],i,c=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==1 || a[i]==0)
        {
            c++;
        }
    }
    if(c==n)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}
