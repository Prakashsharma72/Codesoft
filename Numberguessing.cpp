#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	char input;
	int  guess;
	int score;
	do
	{
		srand(0);
		int variable = rand()%5+1;
		cout<<"Enter any number between range (1-5) = ";
		cin>>guess;
		cout<<endl;
		if(guess==variable){
			cout<<" congratulations ! You gussed the correct number "<<endl;
			score++;
			cout<<endl;
	}
	else{
		cout<<"Sorry ,would you like to try  again Y/N";
		cin>>input;
		cout<<endl;
	}
	}while(input!='N');
	cout<<"Your Score is"<<score<<endl; 
	cout<<"Game end"<<endl;
	return 0;
}

