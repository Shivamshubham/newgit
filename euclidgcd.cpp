#include<iostream>
using namespace std;
int gcd(int a,int b)
{
	while(b!=0)
	{
	int r=a%b;
	a=b;
	b=r;
    }
    return a;
}
int main()
{
	int t,m,n;
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>m>>n;
	    int f=gcd(m,n);
	    cout<<f;
	}
}
