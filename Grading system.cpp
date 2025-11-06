#include<iostream>
using namespace std;
int main()
{
	int subject1,subject2,subject3,subject4,subject5,total;
	float Percentage;
	cout<<"Enter Your Subject 1:";
	cin>>subject1;
	cout<<"Enter Your Subject 2:";
	cin>>subject2;
		cout<<"Enter Your Subject 3:";
	cin>>subject3;
		cout<<"Enter Your Subject 4:";
	cin>>subject4;
		cout<<"Enter Your Subject 5:";
	cin>>subject5;
	total=subject1+subject2+subject3+subject4+subject5;
	Percentage=(total/500)*100;
if(Percentage>=80)
	{
		cout<<"Your Grade is A+";
	}
	else if(Percentage>=70)
	{
		cout<<"Your Grade is A";
	}
	else if(Percentage>=60)
	{
		cout<<"Your Grade is B+";
		
	}
	else if(Percentage>=50)
	{
		cout<<"Your Grade is B";
	}
	else
	{
		cout<<"Your Grade is F";
	}
	return 0;
}
