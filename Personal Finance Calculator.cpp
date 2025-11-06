#include<iostream>
using namespace std;
int main()
{
	double grocery,bill1,bill2,bill3,fees,other,salary,totalbills,totalexpense,leftout;
	int option;
	cout<<"                                       PERSONAL FINANCE CALCULATOR"<<endl;
	while(true)
	{
		cout<<"Enter Total Income Of this Month:";
		cin>>salary;
		cout<<"Enter Your Expenses on Grocery:";
		cin>>grocery;
		cout<<"Enter Amount of your Electricity Bill:";
		cin>>bill1;
		cout<<"Enter Amount of your Gas Bill:";
		cin>>bill2;
		cout<<"Enter Amount of your Water Bill:";
		cin>>bill3;
		cout<<"Enter Fees of Childern or any thing:";
		cin>>fees;
		cout<<"Enter Amount Of any other Expenses:";
		cin>>other;
		cout<<"                                                  RESULT"<<endl;
		totalbills=bill1+bill2+bill3;
		totalexpense=totalbills+grocery+fees+other;
		cout<<"Expenses on Grocery = "<<grocery<<endl;
		cout<<"Total Amount spent on bills = "<<totalbills<<endl;
		cout<<"Expenses on Fees = "<<fees<<endl;
		cout<<"Other Expenses = "<<other<<endl;
		cout<<"Total Expense of this month = "<<totalexpense<<endl;
		leftout=salary-totalexpense;
		cout<<"Leftout Amount from Salary = "<<leftout<<endl;
		if(leftout==0)
		{
			cout<<"                                       Good But Try to Save Money"<<"\n1.Re-Calculation             0.Exit"<<"\nEnter:";
			cin>>option;
			if(option==1)
			{
				system("cls");
				cout<<"                                    PERSONAL FINANCE CALCULATOR"<<endl;                                   
				continue;
			}
			else if(option==0)
			{
				cout<<"Thanks For Using";
				break;
			}
		}
			if(leftout<0)
		{
			cout<<"                                       You're Budget Deficiate"<<"\n1.Re-Calculation             0.Exit"<<"\nEnter:";
			cin>>option;
			if(option==1)
			{
				system("cls");
				cout<<"                                    PERSONAL FINANCE CALCULATOR"<<endl;
				continue;
			}
			else if(option==0)
			{
				cout<<"Thanks For Using";
				break;
			}
		}
			if(leftout>0)
		{
			cout<<"                                       Good You're Saving Money"<<"\n1.Re-Calculation             0.Exit"<<"\nEnter:";
			cin>>option;
			if(option==1)
			{
				system("cls");
				cout<<"                                    PERSONAL FINANCE CALCULATOR"<<endl;
				continue;
			}
			else if(option==0)
			{
				cout<<"Thanks For Using";
				break;
			}
		}
}
return 0;
}
