#include <iostream>
#include <iomanip> 

using namespace std;

int main() {
	int input, nums[5], tmp, output = 0;
	cout << "������һ����λ����" << endl;
	cin >> input; 
	while (input < 10000 || input > 99999) {
		system("cls");
		cout << "����������������λ���֣�" << endl;
		cin >> input; 
	}	
	for (int i = 0; i < 5; i++) {
		nums[5 - 1 - i] = input % 10;
		input /= 10;
	}
	for (int i = 0; i < 5; i++) {
		nums[i] = (nums[i] + 5) % 10; 
	}
	for (int i = 0; i < 2; i++) { 
		tmp = nums[i];
		nums[i] = nums[5-1-i];
		nums[5-1-i] = tmp;
	}
	for (int i = 0; i < 5; i++) {
		output = output * 10 + nums[i];
	}
	cout << "�������ܺ�Ľ��Ϊ��" << setfill('0') << setw(5) << output << endl; 
} 
