#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
	float value;
	cout<<"                                           Countdown"<<endl;
	cout<<"Enter The Starting Value(in Seconds):";
	cin>>value;
	while(value>0)
	{
		cout<<value<<" Seconds"<<endl;
		value--;
		Sleep(1000);
	}
	cout<<"Time Out";
return 0;
}
