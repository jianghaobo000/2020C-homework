#include <iostream>

using namespace std;

int main(){
	int du,m,s,x=60;
	cout<<"First, enter the degrees:";
	cin>>du;
	cout<<"Next, enter the minutes of arc:";
	cin>>m;
	cout<<"Finally, enter the seconds of arc:";
	cin>>s;
	cout<<du<<"¶È"<<m<<"·Ö"<<s<<"Ãë"<<"="<<du*x*x+m*x+s<<"Ãë"<<endl; 
} 
