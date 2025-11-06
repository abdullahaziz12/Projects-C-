#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int interest;
	const float rate = 11;
	double amount,time,interestamount,totalamount;
	cout<<"                                              INTEREST CALCULATOR"<<endl;
	cout<<"Enter Principal Amount:";
	cin>>amount;
	cout<<"Enter Time Duration in Years:";
	cin>>time;
	cout<<"1.Simple Interest (SI)\n2.EMI\nEnter:";
	cin>>interest;
	switch(interest)
	{
		case 1:
//			(Principal × Rate × Time) / 100
          interestamount=(amount*rate*time)/100;
          cout<<"Total interest on "<<amount<<" Amount = "<<interestamount<<endl;
          totalamount=interestamount+amount;
          cout<<"Total Payable Amount With Interest in "<<time<<" Years = "<<totalamount;
          break;
          case 2:
          	double EMI,r,N;
          	N=time*12;
          	r=rate/12/100;
          	 EMI = (amount * r * pow(1 + r, N)) / (pow(1 + r, N) - 1);
          	cout<<"Amount Pay Every Month = "<<EMI<<endl;
          	cout<<"Total Amount Payable = "<<EMI*N;
          	break;
          	default:
				  cout<<"Invalid";
	}
	
}
