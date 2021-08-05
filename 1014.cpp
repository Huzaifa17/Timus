#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if(n%2==0)
    {
        return 0;
    }
    int i,j,k,m=sqrt(n);
    for(i=3;i<=m;i+=2)
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
    int i,j,k,n,m;
    cin>>n;
    if(n==0)
    {
        cout<<10<<endl;
        return 0;
    }
    if(n<10)
    {
        cout<<n<<endl;
        return 0;
    }
    if(is_prime(n))
    {
        cout<<-1<<endl;
        return 0;
    }
    int arr[8];
    memset(arr,0,sizeof(arr));
    m=9;
    while (m>1)
    {
        /* code */
        while (n%m==0)
        {
            /* code */
            arr[m-2]++;
            n/=m;
        }
        m--;
    }
    if(n!=1)
    {
        cout<<-1<<endl;
        return 0;
    }
    for(i=0;i<8;++i)
    {
        while (arr[i]!=0)
        {
            /* code */
            cout<<i+2;
            arr[i]--;
        }
    }
    cout<<endl;
    return 0;
}
