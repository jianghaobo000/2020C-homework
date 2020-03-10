#include <iostream>

using namespace std;

int main(){
	int feet, inch,weight;
	double mi,kg,x=0.0254,y=2.2,BMI;
	cout << "输入自己的身高英尺数：";
	cin >> feet;
	cout << "输入自己的身高英尺数外的英寸数：";
	cin >> inch;
	cout << "输入自己的体重（磅为单位）：";
	cin >> weight;
	mi=(double)feet*x+(double)inch*x/60;
	kg=(double)weight/y;
	BMI=kg/(mi*mi);
	cout<<"您的BMI为："<<BMI<<endl; 
}
