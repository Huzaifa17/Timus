#include<bits/stdc++.h>
using namespace std;
bool prime_num(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    int last=sqrt(n);
    for(int i=3;i<=last;i=i+2)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int i,j,k,n,m,t;
    int arr[15001];
    arr[1]=2;
    i=2;
    n=3;
    while (i<=15000)
    {
        /* code */
        if(prime_num(n))
        {
            arr[i]=n;
            i++;
        }
        n+=2;
    }
    cin>>t;
    for(i=0;i<t;++i)
    {
        cin>>n;
        cout<<arr[n]<<endl;
    }
    return 0;
}
