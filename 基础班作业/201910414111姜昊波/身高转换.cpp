#include <iostream>
using namespace std;
int main()
{
    const int c = 12;//һӢ��=12Ӣ��
    int height, a1,a2, feet;
    cout << "�����Լ�����ߣ�Ӣ��Ϊ��λ��_";
    cin >> height;
    a1=height/c;
    a2=height%c;
    cout<<"�������Ϊ��"<<a1<<"Ӣ��"<<a2<<"Ӣ��"<<endl; 
}
