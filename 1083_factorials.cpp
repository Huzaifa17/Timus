#include<bits/stdc++.h>
using namespace std;
int main()
{
    int sum,n,i,k,l;
    char s[50];
    cin>>n>>s;
    k=strlen(s);
    sum=1;
    int first=n;
    int last;
    if(n%k==0)
    {
        last=k;
    }
    else{
        last=n%k;
    }
    for(i=0,first=n;first>=last;first=n-(k*i))
    {
        sum*=first;
        i++;
    }
    cout<<sum<<endl;
    return 0;
}
