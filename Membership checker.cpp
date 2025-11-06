#include<iostream>
using namespace std;
int main()
{
bool isamember;
int cups;
cout<<" Is Your Are A Member For More Than A Year(any number for Yes 0 For No):";
cin>>isamember;
if(isamember==0)
{
	cout<<"How Many Cups You have Purchased:";
	cin>>cups;
	if(cups>12) 
	{
		cout<<" You Have qualified for a 10% discount";
	}
	else
	{
		cout<<"Your Not Qualified For A 10% Discount";
	}
}
else if(isamember==1)
{
	cout<<" You Have qualified for a 10% discount";
}
	return 0;
}
