#include <iostream>

using namespace std;

int fibonacci(int k)
{
    if(k==0)
        return 0;
    if(k==1)
        return 1;
    int a1=0;
    int a2=1;
    unsigned long long sum=0;
    for(int i=2;i<=k;i++)
    {
        sum=a1+a2;
        a1=a2;
        a2=sum;
    }
    return sum;
}
int main()
{
    int k;
    while(1)
    {


    cin>>k;
    unsigned long long ks=fibonacci(k);
    cout<<ks<<endl;
    }
}
