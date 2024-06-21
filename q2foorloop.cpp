//q2

#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter no";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		if(i==n)
		cout<<"("<<i<<"*"<<i<<")"<<"=";
	
	  
		  	else
		cout<<"("<<i<<"*"<<i<<")"<<"+";
	
		sum=i*i+sum;
		
	}
	cout<<sum;
}
