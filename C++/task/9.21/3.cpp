#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x, y, z, result;
	cout << "������ x ��ֵ" << endl; 
	cin >> x;
	cout << "������ y ��ֵ" << endl;
	cin >> y;
	cout << "������ z ��ֵ" << endl;
	cin >> z;
	result = sqrt(pow((x - y * z) / (x + z), 2)) / (2 * y + 3 * z) + sin (10) + cos (20);
	cout << "������Ϊ" << result << endl;
	return 0;
}
