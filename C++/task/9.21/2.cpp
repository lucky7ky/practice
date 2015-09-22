#include <iostream>
using namespace std;
int main()
{   
    const float p = 765.9;
	float x, y, z, total;
	cout << "请输入游泳池的长度 x 的值（单位：米）" << endl;
	cin >> x;
	cout << "请输入游泳池的宽度 y 的值（单位：米）" << endl;
	cin >> y;
	cout << "请输入游泳池的高度 z 的值（单位：米）" << endl;
	cin >> z;
	total = x * y + 2 * x * z + 2 * y * z;
	cout << "该游泳池的总造价为" << total << "元" <<endl; 
	return 0;
} 
