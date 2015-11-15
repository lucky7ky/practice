#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	char tmp;
	vector<char> v, v1, v2, v3, v4, v5;
	vector<char> :: iterator iter; 
	cout << "请输入一个字符串"; 
	while ((tmp = getchar())!= '\n') {
		v.push_back(tmp);
	};
	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter >= 'A' && *iter <= 'Z') { //大写字母 
			v1.push_back(*iter);
		} else if (*iter >= 'a' && *iter <= 'z') { // 小写字母 
			v2.push_back(*iter);
		} else if (*iter == ' ') { //空格 
			v3.push_back(*iter);
		} else if (*iter >= '0' && *iter <= '9') { // 数字 
			v4.push_back(*iter);
		} else { // 其他特殊字符 
			v5.push_back(*iter);
		}
	}
	cout << "输入的字符串共有" << v.size() << "个字符，其中：" << endl;
	cout <<"大写字母有" << v1.size() << "个" << endl;
	cout <<"小写字母有" << v2.size() << "个" << endl;
	cout <<"空格有" << v3.size() << "个" << endl;
	cout <<"数字有" << v4.size() << "个" << endl;
	cout <<"其他特殊字符有" << v5.size() << "个" << endl;
	cout << "输入的大写字母为：";
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		cout << *iter;
	}
	cout << endl << "输入的小写字母为：";
	for (iter = v2.begin(); iter != v2.end(); iter++) {
		cout << *iter;
	}	
}
