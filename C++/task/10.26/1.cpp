#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	const int p1 = 10, p2 = 5, p1_max = 160, p2_max = 80;
	char choice;
	int h;
	float m, fee;
	cout << "请选择："<< endl;
	cout << "A. 大车" << endl;
	cout << "B. 小车" << endl;
	cout << "Q. 退出" << endl;
	cin >> choice;
	if  (choice == 'A' || choice == 'a' || choice == 'B'|| choice == 'b') {
		do {
			system("cls");
			cout << "请输入停车时间 ( h 小时 m 分钟)" << endl;
	        cout << "小时数：";
	        cin >> h;
	        cout << "分钟数：";
	        cin >> m; 
		} while (h < 0 || m < 0 || m > 60);
	}
	switch (choice) {
		case 'A':
		case 'a':
			cout << "您选择的是大车！"<<endl;
			if (m == 0) {
				fee = p1 * h % 24;
			} else if (m > 0 && m <= 30) {
				fee = p1 * (h % 24 + 0.5);
			} else {
				fee = p1 * (h % 24 + 1);
			}
			fee = (h / 24) * p1_max + (fee > p1_max ? p1_max : fee);
			cout << "您的停车费为" << fee << "元" << endl;
			break;
		case 'B':
		case 'b':
			cout << "您选择的是小车！"<<endl;
			if (m == 0) {
				fee = p2 * h % 24;
			} else if (m > 0 && m <= 30) {
				fee = p2 * (h % 24 + 0.5);
			} else {
				fee = p2 * (h % 24 + 1);
			}
			fee = (h / 24) * p2_max + (fee > p2_max ? p2_max : fee);
			cout << "您的停车费为" << fee << "元" << endl;
			break;	 
		case 'Q':
		case 'q':
			cout << "退出" << endl;
			return 0;
		default :
			cout << "请根据菜单进行选择！" << endl; 
			
	}
}
