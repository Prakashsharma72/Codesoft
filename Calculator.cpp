#include<iostream>
using namespace std;

int main(){
	
	int a,b;
	cout<<"                    Calculator                  "<<endl;
	cout<<endl;
	cout<<"Enter the value of A = ";
	cin>>a;
	cout<<"Enter the value of B = ";
	cin>>b;
	char ch;
	cout<<"Enter your operator (+,-,*,/) = ";
	cin>>ch;
              	
	switch(ch){
		case '+': 
		     cout<<"A + B = "<<a+b<<endl;
		     break;
		case '-': 
		     cout<<"A - B = "<<a-b<<endl;
		     break;
	    case '*': 
		     cout<<"A * B = "<<a*b<<endl;
		     break;
	    case '/': 
		     cout<<"A / B = "<<a/b<<endl;
			 break;    
	   
		default:
			cout<<"Please Enter valid operator "<<endl;
	}
	return 0;
	
} 