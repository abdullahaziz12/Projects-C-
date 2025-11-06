#include<iostream>
using namespace std;
int main()
{
	char ridetype;
	string name;
	int ride,age,customers;
	float discount,discountedprice,price,totalprice;
	cout<<"                                                         GUJJAR THEME PARK"<<endl;
    while(true)
    {
    		cout<<"                                                      Select Your Ride Types";
    	cout<<"\nS.Standard"<<"\nP.Premium"<<"\nV.Vip"<<"\nExit(E)"<<"\nEnter:";
	cin>>ridetype;
	if(ridetype=='S'||ridetype=='s')
	{
		cout<<"                                    Ride Prices are Different According to Age of Customer"<<"\n Under 10 Price For all Rides = 200"<<"\n Under 18 Price For all Rides = 350"<<"\n Above 18 Price For all Rides = 500"<<endl;
		cout<<"1.Carosuel\n2.Ferris Wheel\n3.Bumper Cars\n4.Mini Train Ride\n5.Swing Ride\nTea Cup Ride"<<"\nEnter:";
		cin>>ride;
		cout<<"Enter the Age Of the Customer:";
		cin>>age;
		if(age<=10)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=200;
		}
	else	if(age<18 && age>10)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=350;
		}
	else	if(age>=18)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=500;
		}
		else
		{
			cout<<"Invalid Option\n";
			continue;
		}
		totalprice=price*customers;
		
	}
else	if(ridetype=='P'||ridetype=='p')
	{
		cout<<"                                    Ride Prices are Different According to Age of Customer"<<"\n Under 10 Price For all Rides = 400"<<"\n Under 18 Price For all Rides = 600"<<"\n Above 18 Price For all Rides = 800"<<endl;
		cout<<"1.Priate Ship\n2.Drop Tower\n3.Mid Level Roller Coaster\n4.Water Log Flume Ride\n5.Haunted House"<<"\nEnter:";
		cin>>ride;
		cout<<"Enter the Age Of the Customer:";
		cin>>age;
		if(age<=10)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=400;
		}
	else	if(age<18 && age>10)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=600;
		}
	else	if(age>=18)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=800;
		}
		else
		{
			cout<<"Invalid Option\n";
			continue;
		}
		totalprice=totalprice+(price*customers);
	}
else	if(ridetype=='V'||ridetype=='v')
	{
		cout<<"                                    Ride Prices are Different According to Age of Customer"<<"\n Under 10 Price For all Rides = 1000"<<"\n Under 18 Price For all Rides = 1500"<<"\n Above 18 Price For all Rides = 2000"<<endl;
		cout<<"1.Extreme Roller Coaster\n2.Sky Coaster\n3.Helicopter Ride\n4.ZipLine Adventure\n5.Private VR Room"<<"\nEnter:";
		cin>>ride;
		cout<<"Enter the Age Of the Customer:";
		cin>>age;
		if(age<=10)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=1000;
		}
	else	if(age<18 && age>10)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=1500;
		}
	else	if(age>=18)
		{
			cout<<"Enter Number Of Customers:";
			cin>>customers;
			price=2000;
		}
		else
		{
			cout<<"Invalid Option\n";
			continue;
		}
		totalprice=totalprice+(price*customers);
	}
else	if(ridetype=='E'|| ridetype=='e')
	{
		cout<<"                                                          BILL SUMMARY"<<endl;
		cout<<"Enter The Name OF Customer:";
		cin>>name;
		cout<<"Name:"<<name<<endl;
		cout<<"Total Bill = "<<totalprice<<endl;
		cout<<"Enter Discount:";
		cin>>discount;
		discountedprice=totalprice-(totalprice/100*discount);
		cout<<"Total Bill After Discount = "<<discountedprice;
		cout<<"\nThanks For Visiting";
		break;
	}
	else
	{
		cout<<"Invalid Option";
	}	
	}
	
return 0;	
}
