#include<iostream>
#include<string>
using namespace std;
int main()
{
	int type,test,totalnumber;
	string Q1,options1,Q2,options2,Q3,options3,Q4,options4,Q5,options5,name;
	char correct1,correct2,correct3,correct4,correct5,correctoption1,correctoption2,correctoption3,correctoption4,correctoption5;
	cout<<"1.Teacher                   2.Student\nEnter:";
	cin>>type;
	if(type==1)
	{
		cout<<"Enter Q1:";
		cin.ignore();
		getline(cin, Q1);
		cout<<"Enter Options(a,b,c,d):";
		getline(cin, options1);
		cout<<"Enter Rigth option:";
		cin>>correct1;
		cout<<"Enter Q2:";
		cin.ignore();
		getline(cin, Q2);
		cout<<"Enter Options(a,b,c,d):";
		getline(cin, options2);
		cout<<"Enter Rigth option:";
		cin>>correct2;
		cout<<"Enter Q3:";
		cin.ignore();
		getline(cin, Q3);
		cout<<"Enter Options(a,b,c,d):";
		getline(cin, options3);
		cout<<"Enter Rigth option:";
		cin>>correct3;
		cout<<"Enter Q4:";
		cin.ignore();
		getline(cin, Q4);
		cout<<"Enter Options(a,b,c,d):";
		getline(cin, options4);
		cout<<"Enter Rigth option:";
		cin>>correct4;
		cout<<"Enter Q5:";
		cin.ignore();
		getline(cin, Q5);
		cout<<"Enter Options(a,b,c,d):";
		getline(cin, options5);
		cout<<"Enter Rigth option:";
		cin>>correct5;
		cout<<"1.Start Test                2.Save Test\nEnter:";
		cin>>test;
		if(test==1)
		{
		system("cls");
		cout<<"                                             QUIZ"<<endl;
		cout<<"Enter Your Name:";
		cin>>name;
		cout<<"Q1."<<Q1<<endl;
		cout<<options1<<"\nEnter:";
		cin>>correctoption1;
		if(correctoption1==correct1)
		totalnumber+=2;
		else 
		totalnumber=totalnumber+0;
		cout<<"Q2."<<Q2<<endl;
		cout<<options2<<"\nEnter:";
		cin>>correctoption2;
		if(correctoption2==correct2)
	totalnumber=totalnumber+2;
		else 
		totalnumber=totalnumber+0;
		cout<<"Q3."<<Q3<<endl;
		cout<<options3<<"\nEnter:";
		cin>>correctoption3;
		if(correctoption3==correct3)
		totalnumber=totalnumber+2;
		else 
		totalnumber=totalnumber+0;
		cout<<"Q4."<<Q4<<endl;
		cout<<options4<<"\nEnter:";
		cin>>correctoption4;
		if(correctoption4==correct4)
		totalnumber=totalnumber+2;
		else 
		totalnumber=totalnumber+0;
		cout<<"Q5."<<Q5<<endl;
		cout<<options5<<"\nEnter:";
		cin>>correctoption5;
		if(correctoption5==correct5)
		totalnumber=totalnumber+2;
		else 
		totalnumber=totalnumber+0;
	cout<<"                                                 RESULT"<<endl;
		cout<<"Name:"<<name<<endl;
		if(totalnumber==10)
		{
			cout<<"10/10 Extraordinary";
			
		}
else 	if(totalnumber>=6)
		{
			cout<<totalnumber<<"/10 Good";
		}
		else if(totalnumber<6)
		{
			cout<<totalnumber<<"/10 Need hardwork";
		}
	else	if(totalnumber==0)
		{
			cout<<"0/10 Better Try again";
	}	
	}
	else	if(test==2)
		{
			cout<<"Test is Successfully Saved";
		}
}
else if(type==2)
{
	cout<<"No test is Avalible";
}
else
{
	cout<<"Invalid";
}
}

