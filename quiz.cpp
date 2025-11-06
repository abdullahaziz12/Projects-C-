#include<iostream>
using namespace std;
int main()
{
	char answer1,answer2,answer3,answer4,answer5;
	string name;
	int choice;
	cout<<"                                                      MINI QUIZ GAME"<<endl;
	cout<<"Enter Your Name:";
	cin>>name;
	while(true)
	{
		int totalmarks=0;
		cout<<"Q1. What is the capital city of Pakistan?"<<"\n A) Karachi    B) Lahore    C) Islamabad    D) Quetta \nEnetr:";
		cin>>answer1;
		switch(answer1)
		{
			case 'a':
				case 'A':
				totalmarks=totalmarks+0;
				break;
				case 'b':
				case 'B':
				totalmarks=totalmarks+0;
				break;
				case 'c':
				case 'C':
				totalmarks += 2;
				break;
				case 'd':
				case 'D':
				totalmarks=totalmarks+0;
				break;
				default:
					totalmarks=totalmarks+0;
					system("cls");
					cout<<"Choice Option From A B C D\n";
					continue;
		}
		cout<<"Q2. Which planet is known as the Red Planet?"<<"\n A) Mars    B) Venus    C) Jupiter    D) Earth \nEnter:";
		cin>>answer2;
		switch(answer2)
		{
			case 'a':
				case 'A':
				totalmarks += 2;
				break;
				case 'b':
				case 'B':
				totalmarks=totalmarks+0;
				break;
				case 'c':
				case 'C':
				totalmarks=totalmarks+0;
				break;
				case 'd':
				case 'D':
				totalmarks=totalmarks+0;
				break;
				default:
					totalmarks=totalmarks+0;
					system("cls");
					cout<<"Choice Option From A B C D\n";
					continue;
		}
		cout<<"Q3. Who invented the light bulb?"<<"\n A) Albert Einstein    B) Isaac Newton    C) Thomas Edison    D) Nikola Tesla \nEnter:";
		cin>>answer3;
		switch(answer3)
		{
			case 'a':
				case 'A':
				totalmarks=totalmarks+0;
				break;
				case 'b':
				case 'B':
				totalmarks=totalmarks+0;
				break;
				case 'c':
				case 'C':
				totalmarks += 2;
				break;
				case 'd':
				case 'D':
				totalmarks=totalmarks+0;
				break;
				default:
					totalmarks=totalmarks+0;
					system("cls");
					cout<<"Choice Option From A B C D\n";
					continue;
		}
		cout<<"Q4. What does CPU stand for?"<<"\n A) Central Print Unit    B) Central Processing Unit    C) Central Power Utility    D) Central Processor User \nEnter:";
		cin>>answer4;
		switch(answer4)
		{
			case 'a':
				case 'A':
				totalmarks=totalmarks+0;
				break;
				case 'b':
				case 'B':
				totalmarks += 2;
				break;
				case 'c':
				case 'C':
				totalmarks=totalmarks+0;
				break;
				case 'd':
				case 'D':
				totalmarks=totalmarks+0;
				break;
				default:
					totalmarks=totalmarks+0;
					system("cls");
					cout<<"Choice Option From A B C D\n";
					continue;
		}
		cout<<"Q5. Which number is the smallest prime number?"<<"\n A) 0    B) 1    C) 2    D) 3 \nEnter:";
		cin>>answer5;
		switch(answer5)
		{
			case 'a':
				case 'A':
			totalmarks=totalmarks+0;
				break;
				case 'b':
				case 'B':
			totalmarks=totalmarks+0;
				break;
				case 'c':
				case 'C':
				totalmarks += 2;
				break;
				case 'd':
				case 'D':
				totalmarks=totalmarks+0;
				break;
				default:
					totalmarks=totalmarks+0;
					system("cls");
					cout<<"Choice Option From A B C D\n";
					continue;
		}
		cout<<"                                                 RESULT"<<endl;
		cout<<"Name:"<<name<<endl;
		if(totalmarks==10)
		{
			cout<<"10/10 Extraordinary"<<"\n1.Want Play again                  2.End\nEnter:";
			cin>>choice;
			if(choice!=1)
			{
				cout<<"Thanks For Playing";
				break;
			}
			else 
			{
				"Invalid";
			}
		}
else 	if(totalmarks>=6)
		{
			cout<<totalmarks<<"/10 Good"<<"\n1.Want Play again                  2.End\nEnter:";
			cin>>choice;
			if(choice!=1)
			{
				cout<<"Thanks For Playing";
				break;
			}
			else 
			{
				"Invalid";
			}
		}
		else if(totalmarks<6)
		{
			cout<<totalmarks<<"/10 Need hardwork"<<"\n1.Want Play again                  2.End\nEnter:";
			cin>>choice;
			if(choice!=1)
			{
				cout<<"Thanks For Playing";
				break;
			}
			else 
			{
				"Invalid";
			}
		}
	else	if(totalmarks=0)
		{
			{
			cout<<"0/10 Better Try again"<<"\n1.Want Play again                  2.End\nEnter:";
			cin>>choice;
			if(choice!=1)
			{
				cout<<"Thanks For Playing";
				break;
			}
			else 
			{
				"Invalid";
			}
		}
	}
}
return 0;
}
