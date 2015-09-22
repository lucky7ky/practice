#include <iostream>
using namespace std;
int main()
{   
    const float price = 4.89;
	float x, y, z, total, fee;
	cout << "请输入游泳池的长度 x 的值（单位：米）" << endl;
	cin >> x;
	cout << "请输入游泳池的宽度 y 的值（单位：米）" << endl;
	cin >> y;
	cout << "请输入游泳池的高度 z 的值（单位：米）" << endl;
	cin >> z;
	total = x * y * z; 
	fee = total * price;
	cout << "需要" << total << "吨水" << endl;
	cout << "游泳池水费：" << fee << "元" << endl; 
	return 0;
} 
