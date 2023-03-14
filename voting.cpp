#include<iostream>
using namespace std;
int main()
{
	int choice, c_size,vote,a=0,b=0,c=0,d=0,e=0,n=1;
	char c_arr[]={'A','B','C','D'};
	c_size = sizeof(c_arr);
	
	
	
	do
	{
	cout<<"\n\n********Welcome to Voting system********\n\n";
	cout<<"1.Cast the Vote\n";
	cout<<"2.Find vote count\n";
	cout<<"3.Find leading candidate\n";
	cout<<"0.Exit\n";
	cout<<"Enter your choice:";
	cin>>choice;
	
	if(choice==1){
		cout<<"Candidates List:\n";
		for(int i=0;i<c_size;i++)
		cout<<"Press "<<i<<" for "<<"Candidate "<<c_arr[i]<<"\n";
		cout<<"Enter your Vote(0-3):";
		cin>>vote;
		if(vote==0)
		a++;
		else if(vote==1)
		b++;
		else if(vote==2)
		c++;
		else if(vote==3)
		d++;
		else
		e++;
	}
	else if(choice==2){
		cout<<"\n****Vote count****\n";
		cout<<"\nvote count of candidate A: "<<a;
		cout<<"\nvote count of candidate B: "<<b;
		cout<<"\nvote count of candidate C: "<<c;
		cout<<"\nvote count of candidate D: "<<d;
		cout<<"\nInvalid votes are"<<e;		
	}
	else if(choice==3){
		if(a>b&&a>c&&a>d)
		cout<<"Leading candidate is A with votes"<<a<<endl;
		else if(b>c&&b>d)
		cout<<"Leading candidate is B with votes"<<b<<endl;
		else if(c>d)
		cout<<"Leading candidate is C with votes"<<c<<endl;
		else
		cout<<"Leading candidate is D with votes"<<d<<endl;
	}
	else if(choice==0)
	n--;
	else
	cout<<"Invalid Choice!!!!!";
}while(n>0);
	
	return 0;
	
}
