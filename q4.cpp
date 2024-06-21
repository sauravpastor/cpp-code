#include<iostream>
using namespace std;
int main(){
	int n;
	double sum=0;
	
	cout<<"enter the range:";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		if(i==n)
		
		cout<<"("<<"1"<<"/"<<i<<")"<<"=";
		else
		cout<<"("<<"1"<<"/"<<i<<")"<<"+";
		sum=sum+1.0/i;
		
	}
	cout<<sum;
}
