#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, z, result;
	cout << "请输入 x 的值" << endl; 
	cin >> x;
	cout << "请输入 y 的值" << endl;
	cin >> y;
	cout << "请输入 z 的值" << endl;
	cin >> z;
	result = sqrt(pow((x - y * z) / (x + z), 2)) / (2 * y + 3 * z) + sin (10) + cos (20);
	cout << "计算结果为" << result << endl;
	return 0;
}
