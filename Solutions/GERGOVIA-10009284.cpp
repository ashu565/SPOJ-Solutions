#include<stdio.h>
#include<iostream>
#include<cmath>
#define REP(i,n) for(i=0;i<n;i++)
using namespace std;

int main()
{
    long long sum,ans;
    int i,x,n;
    while(n!=0)
    {
        scanf("%d",&n);
        if(n==0){break;}
        sum=ans=0;
        REP(i,n)
        {
            scanf("%d",&x);
            sum+=x;
            ans+=(long long)abs((double)sum);
        }
        printf("%lld\n",ans);
    }
    return 0;
}

