#include <iostream>
using namespace std;
int main()
{   
    const float price = 4.89;
	float x, y, z, total, fee;
	cout << "��������Ӿ�صĳ��� x ��ֵ����λ���ף�" << endl;
	cin >> x;
	cout << "��������Ӿ�صĿ�� y ��ֵ����λ���ף�" << endl;
	cin >> y;
	cout << "��������Ӿ�صĸ߶� z ��ֵ����λ���ף�" << endl;
	cin >> z;
	total = x * y * z; 
	fee = total * price;
	cout << "��Ҫ" << total << "��ˮ" << endl;
	cout << "��Ӿ��ˮ�ѣ�" << fee << "Ԫ" << endl; 
	return 0;
} 
