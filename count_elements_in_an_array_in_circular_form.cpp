#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],c=0,i;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<n-1;i++)
    {
        if((a[i-1]%2==0 && a[i+1]%2==1) || (a[i-1]%2==1 && a[i+1]%2==0))
        {
            c++;
        }
    }
    if((a[n-1]%2==0 && a[1]%2==1) || (a[n-1]%2==1 && a[1]%2==0))
    {
        c++;
    }
    if((a[0]%2==0 && a[n-2]%2==1) || (a[0]%2==1 && a[n-2]%2==0))
    {
        c++;
    }
    cout<<c<<endl;
    return 0;
}