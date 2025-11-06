//Write a program that calculates the electricity bill. The rates of electricity per unit are as follows:
//If the units consumed are $\le 300$, then the cost is Rs. 2 per unit.
//If the units consumed are $> 300$ and $\le 500$, then the cost is Rs. 5 per unit.
//If the units consumed exceed $500$, then the cost per unit is Rs. 7.
//A line rent Rs. 150 is also added to the total bill and a surcharge of $5\%$ if the bill exceeds Rs. $2000$. Calculate the total bill with all the conditions given above.
#include<iostream>
using namespace std;
int main()
{
	int units,price,total;
	cout<<"Enter Your Units:";
	cin>>units;
	if(units<=300)
	{
		price=2;
		total=units*price;
			cout<<"Electricity Cost = "<<total<<endl;
			cout<<"Charges Of line Rent = 150"<<endl;
			total=total+150;
			if(total>=2000)
			{
				float subcharge;
				subcharge=(total/100)*5;
				cout<<"Total Bill After Charges ="<<total+subcharge<<endl;
			}
			else
			{
				cout<<"Total Bill After Charges ="<<total<<endl;
			}
	}
	else if(units>300 && units<=500)
	{
		price=5;
		total=units*price;
		cout<<"Electricity Cost = "<<total<<endl;
			cout<<"Charges Of line Rent = 150"<<endl;
			total=total+150;
		cout<<"Electricity Cost = "<<total<<endl;
		if(total>=2000)
			{
				float subcharge;
				subcharge=(total/100)*5;
				cout<<"Total Bill After Charges ="<<total+subcharge<<endl;
			}
			else
			{
				cout<<"Total Bill After Charges ="<<total<<endl;
			}
	}
	else if(units>500)
	{
		price=7;
		total=units*price;
		cout<<"Electricity Cost = "<<total<<endl;
			cout<<"Charges Of line Rent = 150"<<endl;
			total=total+150;
				cout<<"Electricity Cost = "<<total<<endl;
		if(total>=2000)
			{
				float subcharge;
				subcharge=(total/100)*5;
				cout<<"Total Bill After Charges = "<<total+subcharge<<endl;
			}
			else
			{
				cout<<"Total Bill After Charges = "<<total<<endl;
			}
			
	}
	else
	{
		cout<<"Invalid";
	}
	return 0;
}
