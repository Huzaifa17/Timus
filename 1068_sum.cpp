#include<iostream>
int main()
{
    int s,n,i;
    std::cin>>n;
    if(n>0)
    {
        s=(n*(n+1))/2;
    }
    else if(n<0)
    {
        n=n*(-1);
        s=(n*(n+1))/2;
        s=s*(-1);
        s+=1;
    }
    else{
        s=1;
    }
    std::cout<<s<<std::endl;
    return 0;
}
