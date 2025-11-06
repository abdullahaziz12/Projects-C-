#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
const	float price=267.5;
float totalamount,liters,petrol;
cout<<"                                              WELLCOM TO PETROLPUMP"<<endl;
cout<<"                                       Price of Petrol Per Liter = "<<price<<endl;
	cout<<"1.For Rupees\n2.For Multiple of Liters\nEnter:";
	cin>>petrol;
 if(petrol==1)
	{
		cout<<"Enter Amount:";
		cin>>liters;
		petrol=liters/267.5;
		cout<<"                                               BILL SUMMARY"<<endl;
		cout<<petrol<<" Liter Petrol is Filled in Your Tank"<<endl;
		cout<<"Thanks For Visiting"<<endl;
		
		
	}
	else if(petrol==2)
		{
			cout<<"Enter Number of Liters:";
			cin>>liters;
			system("cls");
		cout<<"                                               BILL SUMMARY"<<endl;
		cout<<"Petrol is filling in your tank......."<<endl;
		totalamount=liters*price;
		for(int i=0; i<=totalamount; i+=50) // har 50 rupay badh kar dikhao
        {
            cout<<"\rYour Total Amount = "<<i; // \r line overwrite karta hai
            Sleep(100); // 50 milliseconds delay (0.05 second)
        }
        cout<<"\rYour Total Amount = "<<totalamount<<endl;
        cout<<liters<<"Liter Petrol is Filled in Your Tank"<<endl;
        cout<<"Thanks For Visiting"<<endl;
	}
	else
	{
		cout<<"Invalid Option";
	}
}
