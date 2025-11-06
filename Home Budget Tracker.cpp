#include<iostream>
using namespace std;
int main()
{
	double expenses,salary,remainingamount;
	int option;
	cout<<"                                  HOME BUDJET TRACKOR"<<endl;
	while(true)
	{
		cout<<"Enter Your Total Income Per Month:";
	cin>>salary;
	cout<<"Enter Your Total Expenses Per Month:";
	cin>>expenses;
	remainingamount=salary-expenses;
	cout<<"Leftout Amount After Expense = "<<remainingamount<<endl;
	if(remainingamount<=0)
	{
		cout<<"You're Overspending"<<"\nTipe:Take a control on Your Expenses Avoid Unnecessary Spending"<<"\n1.Reuse        0.End"<<"\nEnter";
		cin>>option;
		if(option==0)
		{
			cout<<"Thanks for Using";
			break;
		}
			else if(option==1)
		{
			continue;
		}
		else
		{
			cout<<"Invalid\n";
			continue;
		}
	}
	else if(remainingamount>0)
	{
		cout<<"Good You're Saving Your Income"<<"\nTip:Analyze You're Expenses and Save More Money"<<"\n1.Reuse        0.End"<<"\nEnter";
		cin>>option;
		if(option==0)
		{
			cout<<"Thanks for Using";
			break;
		}
		else if(option==1)
		{
			continue;
		}
		else
		{
			cout<<"Invalid\n";
			continue;
		}
	}
	
	}
	return 0;
}
