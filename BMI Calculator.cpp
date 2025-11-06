#include<iostream>
using namespace std;
int main()
{
	float a,b,c;
	cout<<"                                           BMI Calculater"<<endl;
	cout<<"Enter Your Weigth(in Kilograms):";
	cin>>a;
	cout<<"Enter Your Heigth(in Meters):";
	cin>>b;
	c=a/(b*b);
	if(c<18.5)
	{
		cout<<"You'r Underweigth";
	}
	else if(c=18.5 && c<=24.9)
	{
		cout<<"You'r Normal weight";
	}
		else if(c=25 && c<=29.9)
	{
		cout<<"You'r Overweight";
	}
	else if(c>30)
	{
		cout<<"You'r Obese'";
	}
	else
	{
		cout<<"invalid";
	}
	return 0;
}


