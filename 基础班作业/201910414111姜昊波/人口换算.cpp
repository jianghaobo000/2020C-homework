/*Enter the world's population: 6898758899
Enter the population of th US:310783781
The population of the US is 4.50492% of the world population.*/
#include <iostream>

using namespace std;

int main(){
	double zong,us;
	cout<<"Enter the world's population::";
	cin>>zong;
	cout<<"Enter the population of th US:";
	cin>>us;
	cout<<"The population of the US is"<<us/zong*100<<"% of the world population"<<endl;
}
