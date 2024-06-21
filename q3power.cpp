//q3

#include<iostream>
using namespace std;
int main(){
	int n,sum=0;
	cout<<"enter no";
	cin>>n;
	for(int i=1;i<=n;i++){
		
		if(i==n)
		cout<<"("<<i<<"^"<<2<<")"<<"=";
	
		  	else
		cout<<"("<<i<<"^"<<2<<")"<<"+";
		
		sum=sum+(i*i);
		
	}
	cout<<sum;
}
