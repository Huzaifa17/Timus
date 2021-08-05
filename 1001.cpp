#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k;
    vector<long long int> arr;
    long long int n;
    double res;
    while (cin>>n&&n!=EOF)
    {
        /* code */
        arr.push_back(n);
    }
    for(i=arr.size()-1;i>=0;--i)
    {
        res=sqrt(arr[i]);
        cout<<fixed<<setprecision(4)<<res<<endl;
    }
    return 0;
}
