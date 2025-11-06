#include<iostream>
#include<stdlib.h> 
using namespace std;
int main()
{
	char a;
	int c, pin, amount, pin2, b, d, e, f, balance;
	
MENU:
	system("cls");
	cout << "                                      Welcome to ATM" << endl;
	cout << "Enter Your Pin: ";
	cin >> pin;

	if(pin == 123)
	{
		cout << "1.Menu\n2.Cash Deposit\n3.Cash Withdraw\n4.Balance Check\nEnter: ";
		cin >> a;
	}
	else
	{
		cout << "Wrong Pin! Try Again.";
		return 0;
	}

	switch(a)
	{
		case '1':
			cout << "1.Pin Change\n2.HelpLine\n3.Feedback\n4.Return\nEnter: ";
			cin >> b;

			if(b == 1)
			{
				cout << "Enter Your New Pin\nReturn(0)\nEnd(01)\nEnter: ";
				cin >> pin2;

				if(pin2 == 0)
				{
					system("cls");
					goto MENU;
				}
				else if(pin2 == 01)
				{
					cout << "Thanks For Using";
				}
				else
				{
					cout << "Your Pin is Changed.";
				}
			}
			else if(b == 2)
			{
				cout << "Call at 123456789\nReturn(0)\nEnd(01)\nEnter: ";
				cin >> d;
				if(d == 0)
				{
					system("cls");
					goto MENU;
				}
				else if(d == 01)
				{
					cout << "Thanks For Using";
				}
			}
			else if(b == 3)
			{
				cout << "Enter your feedback:\n1.Satisfied\n2.Unsatisfied\nReturn(0)\nEnd(01)\nEnter: ";
				cin >> c;

				if(c == 0)
				{
					system("cls");
					goto MENU;
				}
				else if(c == 01)
				{
					cout << "Thanks For Using";
				}
				else
				{
					cout << "Thanks For Your Feedback\nReturn(0)\nEnd(01)\nEnter: ";
					cin >> c;

					if(c == 0)
					{
						system("cls");
						goto MENU;
					}
					else if(c == 01)
					{
						cout << "Thanks For Using";
					}
				}
			}
			else if(b == 4)
			{
				system("cls");
				goto MENU;
			}
			else
			{
				cout << "Invalid Option!";
			}
		break;
		
		case '2':
			cout << "Enter Your Amount:\nReturn(0)\nEnd(01)\nEnter: ";
			cin >> amount;
			if(amount == 0)
			{
				system("cls");
				goto MENU;
			}
			else if(amount == 01)
			{
				cout << "Thanks For Using";
			}
			else
			{
				cout << "Amount Deposited Successfully!";
			}
		break;
		
		case '3':
			cout << "Enter Your Amount:\nReturn(0)\nEnd(01)\nEnter: ";
			cin >> amount;
			if(amount == 0)
			{
				system("cls");
				goto MENU;
			}
			else if(amount == 01)
			{
				cout << "Thanks For Using";
			}
			else
			{
				cout << "Take Your Amount.";
			}
		break;

		case '4':
			balance = 5000;
			cout <<"Your Total Balance is "<< balance;
		
		break;

		default:
			cout << "Invalid Option!";
	}

	return 0;
}

