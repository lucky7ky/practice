#include <iostream>
using namespace std;
int main()
{   
    const float p = 765.9;
	float x, y, z, total;
	cout << "��������Ӿ�صĳ��� x ��ֵ����λ���ף�" << endl;
	cin >> x;
	cout << "��������Ӿ�صĿ�� y ��ֵ����λ���ף�" << endl;
	cin >> y;
	cout << "��������Ӿ�صĸ߶� z ��ֵ����λ���ף�" << endl;
	cin >> z;
	total = x * y + 2 * x * z + 2 * y * z;
	cout << "����Ӿ�ص������Ϊ" << total << "Ԫ" <<endl; 
	return 0;
} 
