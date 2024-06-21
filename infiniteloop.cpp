// infinite loop


#include<iostream>
using namespace std;

int main(){
	char ch;
	while(1){
		
		cout<<"infinite loop";
		cout<<"do u want to exit ,type 'n' for exit";
		cin>>ch;
		if(ch=='n')
		break; //exit point
	}
	
}
	//whenever we use infinite loop,it has minimum one exit point(break statement)
