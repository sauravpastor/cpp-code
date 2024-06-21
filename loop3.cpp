#include<iostream>
using namespace std;

//n=6  1+2+3+4+5+6=21
int main(){
	int n,sum=0;
	cout<<"enter range:";
	cin>>n;  //4
	for(int i=1;i<=n;i++){ //1<=4,2<=4,3<=4,4<=,,5<=4 
	
	if(i==n)
	cout<<i<<"=";
	else cout<<i<<"+";
	sum=sum+i;// sum=0+1=1, sum=1+2=3 sum=3+3=6
	}
	cout<<sum;
}
