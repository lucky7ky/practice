#include <iostream>
#include <ctime>
#include <cstdlib>
#include <vector>
#include <algorithm> 

using namespace std;

int main() {
	vector<int> v;
	vector<int>::iterator iter;
	int input, sum = 0;
	float ave;
	char choice;
	srand(time(NULL));
	for (int i = 0; i < 5; i++) {
		v.push_back(rand() % 1000);
	}
	sort(v.begin(), v.end());
	do {
		system("cls");
		cout << "A：查看队列" << endl;
	    cout << "B：插入一个数据到队列中" << endl;
	    cout << "C：删除队列中的一个数据" << endl;
     	cout << "D：查找某个数据是否在队列中" << endl;
     	cout << "E: 查找队列中最大数" << endl; 
     	cout << "F: 查找队列中最小数" << endl;
     	cout << "G: 查找队列中平均数" << endl; 
	    cout << "Q：退出" << endl;
	    cout << "请选择：" << endl;
	    cin >> choice;
	    switch (choice) {
	    	case 'A':
		    case 'a':
		    	if (!v.empty()) {
		    	    for (iter = v.begin(); iter != v.end(); iter++) {
		                cout << *iter << " "; 
	                }  	
				} else {
					cout << "队列为空！"; 
				}
				system("pause"); 
		    	break;
		    case 'B':
		    case 'b':
		    	cout << "请输入要插入的整形数：" ;
		    	cin >> input;
		    	for (iter = v.begin(); iter != v.end(); iter++) {
		    		if (*iter > input) break;
				}
				v.insert(iter, input);
				cout << "插入完成！";
				system ("pause");
				break;
			case 'C':
			case 'c':
				if (!v.empty()) {
				    cout << "请输入要删除数组中的第几个" << endl; 
				    do {
					    cin >> input;
					    if (input > v.size()) {
						    cout << "您输入的数值超过实际数组队列个数(" << v.size() <<")，请重新输入" << endl;  
					    }
			        } while (input > v.size());
				    v.erase(v.begin() + input - 1);
				    cout << "删除完成！";	
				} else {
					cout << "队列为空！"; 
				} 
				system("pause");
				break;
			case 'D':
			case 'd':
			    if (!v.empty()) {
			        cout << "请输入要查询的整形数：";
				    cin >> input;
				    for (iter = v.begin(); iter != v.end(); iter++) {
					    if (*iter == input) break;
				    } 
				    if (iter - v.begin() < v.size()) {
				        cout << "找到，它是位于第" << iter - v.begin() + 1 << "个。"; 
			        } else {
			    	    cout << "没找到！"; 
				    }	
				} else {
					cout << "队列为空！"; 
				} 
				system("pause");
				break;
			case 'E':
			case 'e':
				if (!v.empty()) {
				    cout << "队列中的最大数为" << *max_element(v.begin(), v.end());	
				} else {
					cout << "队列为空！"; 
				}
				system("pause");
				break;
			case 'F':
			case 'f':
				if (!v.empty()) {
				    cout << "队列中的最小数为" << *min_element(v.begin(), v.end());	
				} else {
					cout << "队列为空！"; 
				}
				system("pause");
				break;
			case 'G':
			case 'g': 
			    if  (!v.empty()) {
			    	sum = 0;
			    	for (iter = v.begin(); iter != v.end(); iter++) {
					    sum += *iter;
				    } 
				    ave = (float) sum / v.size();
				    cout << "队列中的平均数为" << ave;
				} else {
					cout << "队列为空！"; 
				}
				system("pause");
				break;
			case 'Q':
			case 'q':
				cout << "您选择退出程序" << endl;
				break;
		    default:
		    	cout << "请根据菜单进行选择"; 
		    	system("pause");
	   }
	} while (choice != 'Q' && choice != 'q');
}
