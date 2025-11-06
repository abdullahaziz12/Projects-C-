#include<iostream>
using namespace std;
int main()
{
	float a,b,ans;
	char op;
	cout<<"Enter Your Number:";
	cin>>a;
	ans=a;
	while(true)
	{
		cout<<"Enter Your operator(+,-,/,*,p for Percentage,=for end):";
		cin>>op;
		if(op=='=')
		{
			cout<<"Answer="<<ans;
			break;
		}
		if(op=='p')
		{
			cout<<"Percentage="<<ans/100<<endl;
			continue;
		}
		cout<<"Enter Your Second Number:";
		cin>>b;
		if(op=='+')
		{
			ans=ans+b;
		}
		else	if(op=='-')
		{
			ans=ans-b;
		}
		else	if(op=='*')
		{
			ans=ans*b;
		}
			else	if(op=='/')
		{
			ans=ans/b;
		}
	
	}
		return 0;
}
