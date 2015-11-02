#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
using namespace std; 

int main() {
	int x, y, answer;
	int add_correct = 0, sub_correct = 0, mul_correct = 0, divide_correct = 0, total_correct = 0;
	int add_nums = 0, sub_nums = 0, mul_nums = 0, divide_nums = 0, total_nums = 0; 
	float add_rate, sub_rate, mul_rate, divide_rate, total_rate;
	char is_continued, choice;
	srand(time(NULL));
	do {
		system ("cls");
	    cout << setw(16) << "��ѡ����������" << endl;
	    cout << setfill('-') << setw(32) << ""<< endl;
		cout<<setfill(' '); 
	    cout << setw(4) << "A." << setw(10) << "�ӷ���ϰ" << endl;
	    cout << setw(4) << "B." << setw(10) << "������ϰ" << endl;
	    cout << setw(4) << "C." << setw(10) << "�˷���ϰ" << endl;
	    cout << setw(4) << "D." << setw(10) << "������ϰ" << endl;
	    cout << setw(4) << "Q." << setw(6) << "�˳�" << endl;
	    cin >> choice;
		switch (choice) {
			case 'A': case 'a':
				cout << "��ѡ����Ǽӷ���ϰ��" << endl;
				for (int i = 1; i <= 5; i++) {
					x = rand() % 101;
	                y = rand() % 101;
	                while ( x + y > 100 || x == 0 || y == 0) {
	                	x = rand() % 101;
	                    y = rand() % 101;
	                }
	                cout << x << "+" << y << "=" ;
					cin >> answer;
					if (answer == x + y) {
						cout << "����ˣ�" << endl;
						add_correct ++;							 
					} else {
						cout << "����ˣ�" << endl; 
					}
					add_nums ++;
				}
				break;
			case 'B': case 'b':
				cout << "��ѡ����Ǽ�����ϰ��" << endl;
				for (int i = 1; i <= 5; i++) {
					x = rand() % 101;
	                y = rand() % 101;
	                while ( x - y <= 0 || x == 0 || y == 0) {
	                	x = rand() % 101;
	                    y = rand() % 101;
	                }
	                cout << x << "-" << y << "=" ;
					cin >> answer;
					if (answer == x - y) {
						cout << "����ˣ�" << endl;
						sub_correct ++;							 
					} else {
						cout << "����ˣ�" << endl; 
					}
					sub_nums ++;
				}
				break;
			case 'C': case 'c':
				cout << "��ѡ����ǳ˷���ϰ��" << endl;
				for (int i = 1; i <= 5; i++) {
					x = rand() % 101;
	                y = rand() % 101;
	                while ( x * y > 100 || x * y == 0 || x == 1 || y == 1) {
	                	x = rand() % 101;
	                    y = rand() % 101;
	                }
	                cout << x << "*" << y << "=" ;
					cin >> answer;
					if (answer == x * y) {
						cout << "����ˣ�" << endl;
						mul_correct ++;							 
					} else {
						cout << "����ˣ�" << endl; 
					}
					mul_nums ++;
				}
				break;
			case 'D': case 'd':
				cout << "��ѡ����ǳ�����ϰ��" << endl;
				for (int i = 1; i <= 5; i++) {
					x = rand() % 101;
	                y = rand() % 101;
	                while ( x < y || x % y || y == 0 || y == 1) {
	                	x = rand() % 101;
	                    y = rand() % 101;
	                }
	                cout << x << "/" << y << "=" ;
					cin >> answer;
					if (answer == x / y) {
						cout << "����ˣ�" << endl;
						divide_correct ++;							 
					} else {
						cout << "����ˣ�" << endl; 
					}
					divide_nums ++;
				}
				break; 
			case 'Q': case 'q':
			    cout << "�˳�" << endl;
			    cout << "��������������ϰ������£�" << endl; 
			    
			    if (add_nums) {
			    	add_rate = (float) add_correct / add_nums;
			    	cout << "���ļӷ�������ȷ��Ϊ" << add_rate << endl; 
			    } else {
			    	cout << "����δ���мӷ����㣡" << endl;
			    }
			    if (sub_nums) {
			    	sub_rate = (float) sub_correct / sub_nums;
			    	cout << "���ļ���������ȷ��Ϊ" << sub_rate << endl; 
			    } else {
			    	cout << "����δ���м������㣡" << endl;
			    }
			    if (mul_nums) {
			    	mul_rate = (float) mul_correct / mul_nums;
			    	cout << "���ĳ˷�������ȷ��Ϊ" << mul_rate << endl; 
			    } else {
			    	cout << "����δ���г˷����㣡" << endl;
			    }
			    if (divide_nums) {
			    	divide_rate = (float) divide_correct / divide_nums;
			    	cout << "���ĳ���������ȷ��Ϊ" << divide_rate << endl; 
			    } else {
			    	cout << "����δ���г��������㣡" << endl;
			    }
			    total_correct = add_correct + sub_correct + mul_correct + divide_correct;
			    total_nums = add_nums + sub_nums + mul_nums + divide_nums;
			    if (total_nums) {
			    	total_rate = (float) total_correct / total_nums;
			    	cout << "��������ȷ��Ϊ" << total_rate << endl;
			    } else {
			    	cout << "����δ�����κμ��㣬����ͳ�����ݣ�" << endl;
			    }
			    break; 
			default:
				cout << "����ݲ˵���ʾ����ѡ��!" << endl; 
		} 
	    cout << "��Ҫ������ Y/N" << endl; 
		cin >> is_continued;
	} while (is_continued == 'Y' || is_continued == 'y');
}
