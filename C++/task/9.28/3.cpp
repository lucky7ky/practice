#include <iostream>

using namespace std;

int main() 
{
	const int questions = 30;
	int number, rate;
	cout << "������ѧ����ȷ�Ĵ�������0-" << questions << " ֮���������" << endl; 
	cin >> number; 
	if (number >= 0 && number <= questions) 
	{
	    rate = 100 * number / questions;
		cout << "ѧ���������ȷ��Ϊ" << rate << "%" << endl;	
	}
	else 
	{
	    cout << "��������������ȷ������Ϊ 0-" << questions << " ֮�������" << endl;   
	}
}
