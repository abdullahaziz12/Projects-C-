#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	 srand(time(0));
	bool numbers,characters;
	int length;
	cout<<"                                 Password Generator"<<endl;
	cout<<"Enter the length of password:";
	cin>>length;
	string password,str="ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	cout<<"Do you want the number in password(1.Yes/0.No):";
	cin>>numbers;
    if(numbers==true){
		str+="0123456789";
	}
	cout<<"Do you want the special character in password(1.Yes/0.No):";
	cin>>characters;
	if(characters==true){
		str+="~!@#$%^&*()_+=|}{[]\\";	
	}
	
	for(int i=0;i<=length;i++)
		{
			
			int randomnumber=rand()%(str.length());
			password+=str[randomnumber];
		}
	cout<<"Password="<<password;
}
 
