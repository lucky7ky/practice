#include <iostream>
#include <stdio.h>
#include <vector>
using namespace std;

int main() {
	char tmp;
	vector<char> v, v1, v2, v3, v4, v5;
	vector<char> :: iterator iter; 
	cout << "������һ���ַ���"; 
	while ((tmp = getchar())!= '\n') {
		v.push_back(tmp);
	};
	for (iter = v.begin(); iter != v.end(); iter++) {
		if (*iter >= 'A' && *iter <= 'Z') { //��д��ĸ 
			v1.push_back(*iter);
		} else if (*iter >= 'a' && *iter <= 'z') { // Сд��ĸ 
			v2.push_back(*iter);
		} else if (*iter == ' ') { //�ո� 
			v3.push_back(*iter);
		} else if (*iter >= '0' && *iter <= '9') { // ���� 
			v4.push_back(*iter);
		} else { // ���������ַ� 
			v5.push_back(*iter);
		}
	}
	cout << "������ַ�������" << v.size() << "���ַ������У�" << endl;
	cout <<"��д��ĸ��" << v1.size() << "��" << endl;
	cout <<"Сд��ĸ��" << v2.size() << "��" << endl;
	cout <<"�ո���" << v3.size() << "��" << endl;
	cout <<"������" << v4.size() << "��" << endl;
	cout <<"���������ַ���" << v5.size() << "��" << endl;
	cout << "����Ĵ�д��ĸΪ��";
	for (iter = v1.begin(); iter != v1.end(); iter++) {
		cout << *iter;
	}
	cout << endl << "�����Сд��ĸΪ��";
	for (iter = v2.begin(); iter != v2.end(); iter++) {
		cout << *iter;
	}	
}
