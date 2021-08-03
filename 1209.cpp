#include<bits/stdc++.h>
using namespace std;
int perfect_square(double k)
{
    k=8*k-7;
    double n,m,r;
    n=sqrt(k);
    m=((int)n);
    if(m==n)
    {
        return 1;
    }
    return 0;
}

int main()
{
    int i,j,k,n,m;
    cin>>n;
    int arr[n];
    double r;
    for(i=0;i<n;++i)
    {
        cin>>r;
        arr[i]=perfect_square(r);
    }
    for(i=0;i<n;++i)
    {
        if(i==0)
        {
            cout<<arr[i];
        }
        else
        {
            cout<<' '<<arr[i];
        }
    }
    cout<<endl;
    return 0;
}
