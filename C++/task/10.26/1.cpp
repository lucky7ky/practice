#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	const int p1 = 10, p2 = 5, p1_max = 160, p2_max = 80;
	char choice;
	int h;
	float m, fee;
	cout << "��ѡ��"<< endl;
	cout << "A. ��" << endl;
	cout << "B. С��" << endl;
	cout << "Q. �˳�" << endl;
	cin >> choice;
	if  (choice == 'A' || choice == 'a' || choice == 'B'|| choice == 'b') {
		do {
			system("cls");
			cout << "������ͣ��ʱ�� ( h Сʱ m ����)" << endl;
	        cout << "Сʱ����";
	        cin >> h;
	        cout << "��������";
	        cin >> m; 
		} while (h < 0 || m < 0 || m > 60);
	}
	switch (choice) {
		case 'A':
		case 'a':
			cout << "��ѡ����Ǵ󳵣�"<<endl;
			if (m == 0) {
				fee = p1 * h % 24;
			} else if (m > 0 && m <= 30) {
				fee = p1 * (h % 24 + 0.5);
			} else {
				fee = p1 * (h % 24 + 1);
			}
			fee = (h / 24) * p1_max + (fee > p1_max ? p1_max : fee);
			cout << "����ͣ����Ϊ" << fee << "Ԫ" << endl;
			break;
		case 'B':
		case 'b':
			cout << "��ѡ�����С����"<<endl;
			if (m == 0) {
				fee = p2 * h % 24;
			} else if (m > 0 && m <= 30) {
				fee = p2 * (h % 24 + 0.5);
			} else {
				fee = p2 * (h % 24 + 1);
			}
			fee = (h / 24) * p2_max + (fee > p2_max ? p2_max : fee);
			cout << "����ͣ����Ϊ" << fee << "Ԫ" << endl;
			break;	 
		case 'Q':
		case 'q':
			cout << "�˳�" << endl;
			return 0;
		default :
			cout << "����ݲ˵�����ѡ��" << endl; 
			
	}
}
