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
	    cout << setw(16) << "请选择四则运算" << endl;
	    cout << setfill('-') << setw(32) << ""<< endl;
		cout<<setfill(' '); 
	    cout << setw(4) << "A." << setw(10) << "加法练习" << endl;
	    cout << setw(4) << "B." << setw(10) << "减法练习" << endl;
	    cout << setw(4) << "C." << setw(10) << "乘法练习" << endl;
	    cout << setw(4) << "D." << setw(10) << "除法练习" << endl;
	    cout << setw(4) << "Q." << setw(6) << "退出" << endl;
	    cin >> choice;
		switch (choice) {
			case 'A': case 'a':
				cout << "您选择的是加法练习！" << endl;
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
						cout << "答对了！" << endl;
						add_correct ++;							 
					} else {
						cout << "答错了！" << endl; 
					}
					add_nums ++;
				}
				break;
			case 'B': case 'b':
				cout << "您选择的是减法练习！" << endl;
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
						cout << "答对了！" << endl;
						sub_correct ++;							 
					} else {
						cout << "答错了！" << endl; 
					}
					sub_nums ++;
				}
				break;
			case 'C': case 'c':
				cout << "您选择的是乘法练习！" << endl;
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
						cout << "答对了！" << endl;
						mul_correct ++;							 
					} else {
						cout << "答错了！" << endl; 
					}
					mul_nums ++;
				}
				break;
			case 'D': case 'd':
				cout << "您选择的是除法练习！" << endl;
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
						cout << "答对了！" << endl;
						divide_correct ++;							 
					} else {
						cout << "答错了！" << endl; 
					}
					divide_nums ++;
				}
				break; 
			case 'Q': case 'q':
			    cout << "退出" << endl;
			    cout << "您的四则运算练习结果如下：" << endl; 
			    
			    if (add_nums) {
			    	add_rate = (float) add_correct / add_nums;
			    	cout << "您的加法运算正确率为" << add_rate << endl; 
			    } else {
			    	cout << "您还未进行加法运算！" << endl;
			    }
			    if (sub_nums) {
			    	sub_rate = (float) sub_correct / sub_nums;
			    	cout << "您的减法运算正确率为" << sub_rate << endl; 
			    } else {
			    	cout << "您还未进行减法运算！" << endl;
			    }
			    if (mul_nums) {
			    	mul_rate = (float) mul_correct / mul_nums;
			    	cout << "您的乘法运算正确率为" << mul_rate << endl; 
			    } else {
			    	cout << "您还未进行乘法运算！" << endl;
			    }
			    if (divide_nums) {
			    	divide_rate = (float) divide_correct / divide_nums;
			    	cout << "您的除法运算正确率为" << divide_rate << endl; 
			    } else {
			    	cout << "您还未进行除法法运算！" << endl;
			    }
			    total_correct = add_correct + sub_correct + mul_correct + divide_correct;
			    total_nums = add_nums + sub_nums + mul_nums + divide_nums;
			    if (total_nums) {
			    	total_rate = (float) total_correct / total_nums;
			    	cout << "您的总正确率为" << total_rate << endl;
			    } else {
			    	cout << "您还未进行任何计算，暂无统计数据！" << endl;
			    }
			    break; 
			default:
				cout << "请根据菜单提示进行选择!" << endl; 
		} 
	    cout << "还要继续吗 Y/N" << endl; 
		cin >> is_continued;
	} while (is_continued == 'Y' || is_continued == 'y');
}
