//range user --->start-24 end -4
// start 4 end 24 --->work


#include <iostream>
using namespace std;
int main(){
	int start,end;
	cout<<"enter start and end point:";
	cin>>start>>end;
	
	for(int i=start;i>=end;i=i-2){ //i=8
	cout<<i<<endl;
	}
}
