#include<iostream>
using namespace std;
int max_of_four(int a,int b,int c,int d)
{
	int max=0;
	if((a>b)&&(a>c)&&(a>d))
	max=a;
	else if((b>a)&&(b>c)&&(b>d))
	max=b;
	else if((c>b)&&(c>a)&&(c>d))
	max=c;
	else
	max=d;
	return max;
}
int main()
{
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	cout<<max_of_four(a,b,c,d);
}
