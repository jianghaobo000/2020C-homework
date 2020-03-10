#include <iostream>

using namespace std;

int main(){
	int d,d1,h,h1,m,s,s1,x=60;
	cout<<"First, enter the seconds:";
	cin>>s1;
	d=s1/(x*x*24);
	d1=s1-d*(x*x*24);
	h=(d1)/(x*x);
	h1=s1-d1-h*x*x;
	m=(h1)/x;
	s=s1-d1-h1-m*x;
	cout<<d<<"Ìì"<<h<<"Ê±"<<m<<"·Ö"<<s<<"Ãë"<<endl; 
} 
