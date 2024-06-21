#include<iostream>
using namespace std;
int main(){
	int range,num,sum=0;
	cout<<"enter range:";
	cin>>range;   //4
	for(int i=1;i<=range;i++){
		cout<<"enter number:";
		cin>>num;
		
		if(num%2==0){
			sum=sum+num;
		}
	
}


  cout<<"sum:"<<sum;
