#include <iostream>
using namespace std;

int main() {
	int input, nums[5], tmp, output = 0;
	cout << "��������ܺ����λ��" << endl;
	cin >> input;
	while (input < 0 || input > 99999) {
		system("cls");
		cout << "�����������������룡" << endl;
		cin >> input; 
	}
	for (int i = 0; i < 5; i++) {
		nums[5-1-i] = input % 10;
		input /= 10;
	}
	for (int i = 0; i < 2; i++) { // ����λ�� 
		tmp = nums[i];
		nums[i] = nums[5-1-i];
		nums[5-1-i] = tmp;
	}
	for (int i = 0; i < 5; i++) {
		nums[i] = (nums[i] + 10 - 5) % 10;
	} 
	for (int i = 0; i < 5; i++) {
		output = output * 10 + nums[i];
	}
	cout << "���ܵĽ��Ϊ" << output << endl; 
}
