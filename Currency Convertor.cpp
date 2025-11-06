#include<iostream>
using namespace std;
int main()
{
	float amount,currency1,currency2;
	cout<<"                                                        Currency Convertor"<<endl;
	cout<<"Select Your Currency:";
	cout<<"\n1.Dollar $\n2.Pakistani Rupee(PKR)\n3.Euro €\n4.Indian Rupee(INR)\nEnter:";
	cin>>currency1;
	cout<<"Enter Your Amount:";
	cin>>amount;
	cout<<"Select Conversion Currency:";
	cout<<"\n1.Dollar $\n2.Pakistani Rupee(PKR)\n3.Euro €\n4.Indian Rupee(INR)\nEnter:";
	cin>>currency2;
	if(currency1==1)
	{
		double dollar;
		switch((int)currency2)
		{
			case 1:
					cout<<"You've Selected  Currency is same";
				break;
				case 2:
					dollar=amount*280.90;
					cout<<"Your Converted Amount is "<<dollar<<"PKR";
					break;
					case 3:
						dollar=amount*0.86;
						cout<<"Your Converted Amount is "<<dollar<<"€";
						break;
						case 4:
						dollar=amount*88.5;
						cout<<"Your Converted Amount is "<<dollar<<"INR";
						break;
		}
}
else if(currency1==2)
	{
		double pkr;
		switch((int)currency2)
		{
			case 1:
				pkr=amount*0.0036;
					cout<<"Your Converted Amount is "<<pkr<<"$";
				break;
				case 2:
						cout<<"You've Selected  Currency is same";
					break;
					case 3:
						pkr=amount*0.0031;
					cout<<"Your Converted Amount is "<<pkr<<"€";
						break;
						case 4:
					pkr=amount*0.32;
					cout<<"Your Converted Amount is "<<pkr<<"INR";
						break;
		}
	}
	else if(currency1==3)
	{
		double euro;
		switch((int)currency2)
		{
			case 1:
				euro=amount*1.16;
					cout<<"Your Converted Amount is "<<euro<<"$";
				break;
				case 2:
					euro=amount*327.55;
					cout<<"Your Converted Amount is "<<euro<<"PKR";
					break;
					case 3:
							cout<<"You've Selected  Currency is same";
						break;
						case 4:
					euro=amount*102.37;
					cout<<"Your Converted Amount is "<<euro<<"INR";
						break;
		}
	}
	else if(currency1==4)
	{
		double inr;
		switch((int)currency2)
		{
			case 1:
				inr=amount*0.011;
					cout<<"Your Converted Amount is "<<inr<<"$";
				break;
				case 2:
						inr=amount*3.16;
					cout<<"Your Converted Amount is "<<inr<<"PKR";
					break;
					case 3:
						inr=amount*0.0098;
					cout<<"Your Converted Amount is "<<inr<<"€";
						break;
						case 4:
					cout<<"You've Selected  Currency is same";
						break;
		}
	}
	else
	{
		cout<<"Invalid Option";
	}
}
