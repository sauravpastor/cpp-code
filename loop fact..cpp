#include <iostream>
using namespace std;

// n=6 1+2+3+4+5+6=21
int main(){
	int n,fact=1; //fact=1
	cout<<"enter number:";
	cin>>n;  //5
	cout<<n<<"! =";
	for(int i=n;i>=1;i--){
		if(i==1)
		cout<<i<<"=";
		else
		cout<<i<<"*";
		fact=fact*i; //fact=1*5=5,fact=5*4=20,fact=20*3=60,fact=60*2=120,fact=120*1
	}
	cout<<fact;
}
