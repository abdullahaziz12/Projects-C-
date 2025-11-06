#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	string name[20];
    int pricebill[20];
    int count[20];
    int n=0;
	char ch;
    	char coffee,tea,snacks;
    	string name1;
    	double totalbill=0,discountedbill,discount,customeramount;
    	cout<<"                                  ABDULLAH'S COFFEE SHOP\n";
    cout << "1.Coffee                   2.Tea                  3.Snacks\n";
    cout << "B.Black Coffee=250         B.Black Tea=250        B.Biscuits=50\n";
     cout<< "L.Latte=250                W.White Tea=250        P.Pastries=150\n";
	  cout<<"C.Cappuccino=250           Y.Yellow Tea=250       M.Muffins=150\n";
	  cout<<"E.Espresso=450             O.Oolong Tea=250       G.Gummies=100\n";
	  cout<<"A.American=350             G.Green Tea=250        D.Donuts=100\n";
	  cout<<"M.Mocha=350                D.Dark Tea=250         S.Sandwiches=150\n";
	  cout<<"                                      0.Exit";
    while (true) {
    	int quantity;
        cout << "\nEnter:";
        cin>>ch;

        if (ch == '1') {
        	double price;
            cout << "\nYou selected Coffee\n";
            cout<<"Select Coffee:";
            cin>>coffee;
            switch(coffee)
            {
            	case'b':
            	case'B':
            	cout<<"\nYou've Selected Black Coffee";
            	name[n]="Black coffe";
				price=250;	
				pricebill[n]=250;
				break;
            	case'l':
            	case'L':
            		cout<<"\nYou've Selected Latte Coffee";
            		name[n]="Latte Coffee";
            		price=250;
            		pricebill[n]=price;
            			break;
            			case'c':
            	case'C':
            		cout<<"\nYou've Selected Cappuccino Coffee";
            		name[n]="Cappuccino Coffee";
            		price=250;
            		pricebill[n]=price;
            			break;
            	case'e':
            			case'E':
                    	cout<<"\nYou've Selected Espresso Coffee"; 
                    	name[n]="Espresso Coffee";
                    	price=450;
                    	pricebill[n]=price;
                    		break;
            	case'a':
            			case'A':
            				cout<<"\nYou've Selected American Coffee";
            				name[n]="American Coffee";
            				price=350;
            				pricebill[n]=price;
            					break;
            	case'm':
            		case'M':
            			cout<<"\nYou've Selected Mocha Coffee";
            			name[n]="Mocha Coffee";
            			price=350;
            			pricebill[n]=price;
            			break;
            			default:
            				cout<<"\nInvalid Choice";
            				continue;
            				
            		
			}
			cout<<"\nEnter Quantity:";
            cin>>quantity;
            count[n]=quantity;
            n++;
			totalbill=totalbill+(price*quantity);
        } 
		else if (ch == '2') {
			double price;
            cout << "\nYou selected Tea\n";
            cout<<"Select Tea:";
            cin>>tea;
            switch(tea)
            {
            	case'b':
            	case'B':
            	cout<<"\nYou've Selected Black Tea";
            	name[n]="Black Tea";
				price=250;
				pricebill[n]=price;
				break;
            	case'w':
            	case'W':
            		cout<<"\nYou've Selected White Tea";
            		name[n]="White Tea";
            		price=250;
            		pricebill[n]=price;
            			break;
            			case'Y':
            	case'y':
            		cout<<"\nYou've Selected Yellow Tea";
            		name[n]="Yellow Tea";
            		price=250;
            		pricebill[n]=price;
            			break;
            	case'o':
            			case'O':
                    	cout<<"\nYou've Selected Oolong Tea";
                    	name[n]="Oolong Tea";
                    	price=250;
                    	pricebill[n]=price;
                    		break;
            	case'g':
            			case'G':
            				cout<<"\nYou've Selected Green Tea";
            				name[n]="Green Tea";
            				price=250;
            				pricebill[n]=price;
            					break;
            	case'd':
            		case'D':
            			cout<<"\nYou've Selected Dark Tea";
            			name[n]="Dark Tea";
            			price=250;
            			pricebill[n]=price;
            			break;
            			default:
            				cout<<"\nInvalid Choice";
            				continue;
									
			}
				cout<<"\nEnter Quantity:";
            cin>>quantity;
            count[n]=quantity;
            n++;
			totalbill=totalbill+(price*quantity);
        } 
		else if (ch == '3') {
        	double price;
            cout << "You selected Snacks\n";
            cout<<"Select Snacks:";
            cin>>snacks;
            switch(snacks)
            {
            	case'b':
            	case'B':
            	cout<<"\nYou've Selected Biscuits";	
            name[n]="Biscuits";
            	price=50;
            	pricebill[n]=price;
				break;
            	case'p':
            	case'P':
            		cout<<"\nYou've Selected Pastries";
            		name[n]="Pastries";
            		price=150;
            		pricebill[n]=price;
            			break;
            			case'G':
            	case'g':
            		cout<<"\nYou've Selected Gummies";
            		name[n]="Gummies";
            		price=100;
            		pricebill[n]=price;
            			break;
            	case'D':
            			case'd':
                    	cout<<"\nYou've Selected Donuts"; 
                    	name[n]="Donuts";
                    	price=100;
                    	pricebill[n]=price;
                    		break;
            	case's':
            			case'S':
            				cout<<"\nYou've Selected Sandwiches";
            				name[n]="Sandwiches";
            				price=150;
            				pricebill[n]=price;
            					break;
            	case'm':
            		case'M':
            			cout<<"\nYou've Selected Muffins";
            			name[n]="Muffins";
            			price=150;
            			pricebill[n]=price;
            			break;
            			default:
            				cout<<"\nInvalid Choice";
							continue;		
			}
				cout<<"\nEnter Quantity:";
            cin>>quantity;
            count[n]=quantity;
            n++;
			totalbill=totalbill+(price*quantity);
        } 
		else if (ch == '0') {
			cout<<"Enter The Name of Customer:";
            cin>>name1;
			cout << "\n                                                =============================\n";
            cout << "                                                          BILL SUMMARY        \n";
            cout << "                                                =============================\n";
            
            cout << "\nCustomer Name: " << name1 << endl << endl;
             for (int i = 0; i < n; i++) {
                cout << name[i] << " X " << count[i] << " = " << pricebill[i]*count[i] << " PKR\n";
            }
            cout<<"Bill = "<<totalbill;
            cout<<"\nEnter Discount:";
            cin>>discount;
            discountedbill=totalbill-(totalbill*discount/100);
            cout<<"Your Total Bill After Discount = "<<discountedbill<<"PKR"<<endl;
            cout<<"Enter the Amount Customer Given:";
            cin>>customeramount;
            customeramount=customeramount-discountedbill;
            cout<<"Amount Return To Customer = "<<customeramount;
            cout << "\nThank you for visiting Abdullah Coffee Shop!\n";

            break;
        } else {
            cout << "Invalid choice\n";
        }
    }
    

    return 0;
}

