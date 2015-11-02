#include <iostream>
using namespace std;

int main() {
	int input, nums[5], tmp, output = 0;
	cout << "请输入加密后的五位数" << endl;
	cin >> input;
	while (input < 0 || input > 99999) {
		system("cls");
		cout << "输入有误，请重新输入！" << endl;
		cin >> input; 
	}
	for (int i = 0; i < 5; i++) {
		nums[5-1-i] = input % 10;
		input /= 10;
	}
	for (int i = 0; i < 2; i++) { // 交换位置 
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
	cout << "解密的结果为" << output << endl; 
}
