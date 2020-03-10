#include <iostream>
using namespace std;
int main()
{
    const int c = 12;//一英尺=12英寸
    int height, a1,a2, feet;
    cout << "输入自己的身高（英寸为单位）_";
    cin >> height;
    a1=height/c;
    a2=height%c;
    cout<<"您的身高为："<<a1<<"英尺"<<a2<<"英寸"<<endl; 
}
