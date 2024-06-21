#include<iostream>
using namespace std;
int main(){
	char choice;
	cout<<"c---> circle,r---> rectangle,s ---> square\n";
	cout<<"enter ur choice:";
	cin>>choice;
	
	if(choice=='c'){
		double r;
		cout<<"enter radius:";
		cin>>r;
		cout<<"area:"<<3.14*r*r;
	}
	else if (choice=='r'){
		double l,b;
		cout<<"enter length and breadth:";
		cin>>l;
		cin>>b;
		cout<<"area:"<<l*b;
	}
	else if (choice=='s'){
		double side;
		cout<<"emter side:";
		cin>>side;
		cout<<"area:"<<side*side;
	
	}
}
