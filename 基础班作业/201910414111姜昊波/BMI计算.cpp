#include <iostream>

using namespace std;

int main(){
	int feet, inch,weight;
	double mi,kg,x=0.0254,y=2.2,BMI;
	cout << "�����Լ������Ӣ������";
	cin >> feet;
	cout << "�����Լ������Ӣ�������Ӣ������";
	cin >> inch;
	cout << "�����Լ������أ���Ϊ��λ����";
	cin >> weight;
	mi=(double)feet*x+(double)inch*x/60;
	kg=(double)weight/y;
	BMI=kg/(mi*mi);
	cout<<"����BMIΪ��"<<BMI<<endl; 
}
