#include<iostream>
using namespace std;
int main()
{
	string password;
	cout<<"                                          Password Strength Checker"<<endl;
	cout<<"Enter password:";
	cin>>password;
	bool number=false,capital=false,smaller=false,length=false,specialcharacter=false;
	if(password.length()>=8)
	{
		length=true;
	}
	for(int i=0;i<=password.length();i++){
		
		if(password[i]>='0' && password[i]<='9'){
			number=true;
		}
		if(password[i]>='A' && password[i]<='Z'){
			capital=true;
		}
		if(password[i]>='a' && password[i]<='z'){
			smaller=true;
		}
		if(password[i]>=32 && password[i]<=47 || password[i]>=58 && password[i]<=64 || password[i]>=91 && password[i]<=96 ||password[i]>=123 && password[i]<=126)
		{
			specialcharacter=true;
		}
	}
	
	if(number==true && capital==true && smaller==true && length==true && specialcharacter==true ){
		cout<<"Result:"<<"Strong Password";
	}
	else if(number==false && capital==true && smaller==true && length==true && specialcharacter==true || number==true && capital==false && smaller==true && length==true && specialcharacter==true || number==true && capital==true && smaller==false && length==true && specialcharacter==true ||number==true && capital==true && smaller==true && length==false && specialcharacter==true || number==true && capital==true && smaller==true && length==true && specialcharacter==false){
		cout<<"Result:"<<"Moderate Password"<<"\nTip:Use at least one Uppercase,lowercase,Number and special Character\nPassword Must Be equal or greater than 8 Characters ";
	} 
	else{
		cout<<"Result:"<<"Weak Password"<<"\nTip:Use at least one Uppercase,lowercase,Number and special Character\nPassword Must Be equal or greater than 8 Characters ";
	}
	return 0;
}
