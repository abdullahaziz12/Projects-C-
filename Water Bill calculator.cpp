#include<iostream>
using namespace std;
int main()
{
	float marla,bill,servicecharge,salestax,total;
	int totalbill;
	string name;
	cout<<"                                              WATER BILL CALCULATOR"<<endl;
	cout<<"Enter Your Name:";
	cin>>name;
	cout<<"Enter Your House Size in Marlas(1 kanal=20 marla):";
	cin>>marla;
	if(marla<=3)
	{
		bill=470;
	}
	else if(marla==4 || marla==5)
	{
		bill=938;
	}
	else if(marla==6 || marla==7)
	{
		bill=1160;
	}
	else if(marla>=8 && marla<=10)
	{
		bill=1450;
	}
	else if(marla>10 && marla<=15)
	{
		bill=1603;
	}
		else if(marla>15 && marla<=20)
	{
		bill=2183;
	}
	else if(marla>20 && marla<=40)
	{
		bill=2765;
	}
	else if(marla>40)
	{
		bill=3925;
	}
	cout<<"                                              BILL"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<"Sewarage Charges = "<<bill<<"PKR"<<endl;
	servicecharge=bill*0.05;
	total=bill+servicecharge;
	salestax=total*0.12;
	totalbill=total+salestax;
	cout<<"Service Charge (5% of Bill) = "<<servicecharge<<"PKR"<<endl;
	cout<<"Sales Tax GST(12% of Totalbill) = "<<salestax<<"PKR"<<endl;
	cout<<"Total Payable Amount = "<<totalbill<<"PKR";
	return 0;
	
}
