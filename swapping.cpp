// wap swap the value of 2 variable with each other.
 
// before swapping
// a=45 b=90
// after swapping
// a=90 b=45



#include <iostream>
using namespace std;

//3rd variable
int main(){
	int a,b,temp;
	cout<<"enter a and b:";
	cin>>a>>b;   //22     33
	cout<<"before swapping :\n";
	cout<<"a:"<<a<<"b:"<<b<<endl;
	
	a=a+b; //55
	b=a-b; //55-33=22
	a=a-b; //55-22=33
	
	
	cout<<"after swapping:\n";
	cout<<"a:"<<a<<"b"<<b<<endl;
}
