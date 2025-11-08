#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int guess,level;
	float score=6;
	string name;
	cout<<"                                          GUESS THE NUMBER GAME"<<endl;
	cout<<"Enter Your Name:";
getline(cin,name);
	cout<<"Select the Difficulty level of the Game"<<"\n1.Easy         2.Medium         3.Hard"<<"\nEnter:";
	cin>>level;
	if(level==1){
		srand(time(0));
	int randomnumber=rand()%10+1;
	cout<<"                       Guess The Number Between 1 to 10"<<endl;
		for(int n=1;n<=3;n++)
	{
		cout<<"Enter Your Number:";
		cin>>guess;
		if(guess>randomnumber && guess<=10)
		{
			cout<<"Your Guess number is high "<<"\nYou've Used your "<<n<< " Chance"<<endl;
			score=score-2;
		}
		else if(guess<randomnumber && guess>0)
		{
				cout<<"Your guess is low"<<"\nYou've Used your "<<n<< " Chance"<<endl;
				score=score-2;
		}
		else if(guess==randomnumber)
		{
			cout<<"You guessed the right number in "<<n<< " Chance";
			cout<<"\n                       RESULT";
			cout<<"\nName:"<<name;
			cout<<"\nScore = "<<score<<"/6";
			break;
		}
		else if (guess>10 || guess<1)
		{
			cout<<"Number Should be Between 1 to 10\n";
			score=score-2;
		}
		else
		{
			cout<<"Invalid";
		}
	}
	if(guess!=randomnumber)
	{
		cout<<"You've used all chances. The correct number was "<<randomnumber;
		cout<<"\n                       RESULT";
			cout<<"\nName:"<<name;
			cout<<"\nScore = 0";
			
	}
	}
	else if(level==2)
	{
	srand(time(0));
	int randomnumber=rand()%50+1;
	cout<<"                       Guess The Number Between 1 to 50"<<endl;
	for(int n=1;n<=3;n++)
	{
		cout<<"Enter Your Number:";
		cin>>guess;
		if(guess>randomnumber && guess<=50)
		{
			cout<<"Your Guess number is high "<<"\nYou've Used your "<<n<< " Chance"<<endl;
			score=score-2;
		}
		else if(guess<randomnumber && guess>0)
		{
				cout<<"Your guess is low"<<"\nYou've Used your "<<n<< " Chance"<<endl;
				score=score-2;
		}
		else if(guess==randomnumber)
		{
			cout<<"You guessed the right number in "<<n<< " Chance";
			cout<<"\n                       RESULT";
			cout<<"\nName:"<<name;
			cout<<"\nScore = "<<score;
			break;
		}
		else if (guess>50 || guess<1)
		{
			cout<<"Number Should be Between 1 to 50\n";
			score=score-2;
		}
		else
		{
			cout<<"Invalid";
		}
	}
	if(guess!=randomnumber)
	cout<<"You've used all chances. The correct number was "<<randomnumber;
	cout<<"\n                       RESULT";
			cout<<"\nName:"<<name;	
	cout<<"\nScore = 0";
	}
	else if(level==3)
	{
			srand(time(0));
	int randomnumber=rand()%100+1;
	cout<<"                       Guess The Number Between 1 to 100"<<endl;
	for(int n=1;n<=3;n++)
	{
	cout<<"Enter Your Number:";
		cin>>guess;
		if(guess>randomnumber && guess<=100)
		{
			cout<<"Your Guess number is high "<<"\nYou've Used your "<<n<< " Chance"<<endl;
			score=score-2;
		}
		else if(guess<randomnumber && guess>0)
		{
				cout<<"Your guess is low"<<"\nYou've Used your "<<n<< " Chance"<<endl;
				score=score-2;
		}
		else if(guess==randomnumber)
		{
			cout<<"You guessed the right number in "<<n<< " Chance";
			cout<<"\n                       RESULT";
			cout<<"\nName:"<<name;
			cout<<"\nScore = "<<score;
			break;
		}
		else if (guess>100 || guess<1)
		{
			cout<<"Number Should be Between 1 to 100\n";
			score=score-2;
		}
		else
		{
			cout<<"Invalid";
		}	
	}
	if(guess!=randomnumber)
	cout<<"You've used all chances. The correct number was "<<randomnumber;
	cout<<"\n                       RESULT";
			cout<<"\nName:"<<name;
			cout<<"\nScore = 0";
	}
	else
	{
		cout<<"Invalid option";
	}
	return 0;
}
