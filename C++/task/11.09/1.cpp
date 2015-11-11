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
		cout << "A���鿴����" << endl;
	    cout << "B������һ�����ݵ�������" << endl;
	    cout << "C��ɾ�������е�һ������" << endl;
     	cout << "D������ĳ�������Ƿ��ڶ�����" << endl;
     	cout << "E: ���Ҷ����������" << endl; 
     	cout << "F: ���Ҷ�������С��" << endl;
     	cout << "G: ���Ҷ�����ƽ����" << endl; 
	    cout << "Q���˳�" << endl;
	    cout << "��ѡ��" << endl;
	    cin >> choice;
	    switch (choice) {
	    	case 'A':
		    case 'a':
		    	if (!v.empty()) {
		    	    for (iter = v.begin(); iter != v.end(); iter++) {
		                cout << *iter << " "; 
	                }  	
				} else {
					cout << "����Ϊ�գ�"; 
				}
				system("pause"); 
		    	break;
		    case 'B':
		    case 'b':
		    	cout << "������Ҫ�������������" ;
		    	cin >> input;
		    	for (iter = v.begin(); iter != v.end(); iter++) {
		    		if (*iter > input) break;
				}
				v.insert(iter, input);
				cout << "������ɣ�";
				system ("pause");
				break;
			case 'C':
			case 'c':
				if (!v.empty()) {
				    cout << "������Ҫɾ�������еĵڼ���" << endl; 
				    do {
					    cin >> input;
					    if (input > v.size()) {
						    cout << "���������ֵ����ʵ��������и���(" << v.size() <<")������������" << endl;  
					    }
			        } while (input > v.size());
				    v.erase(v.begin() + input - 1);
				    cout << "ɾ����ɣ�";	
				} else {
					cout << "����Ϊ�գ�"; 
				} 
				system("pause");
				break;
			case 'D':
			case 'd':
			    if (!v.empty()) {
			        cout << "������Ҫ��ѯ����������";
				    cin >> input;
				    for (iter = v.begin(); iter != v.end(); iter++) {
					    if (*iter == input) break;
				    } 
				    if (iter - v.begin() < v.size()) {
				        cout << "�ҵ�������λ�ڵ�" << iter - v.begin() + 1 << "����"; 
			        } else {
			    	    cout << "û�ҵ���"; 
				    }	
				} else {
					cout << "����Ϊ�գ�"; 
				} 
				system("pause");
				break;
			case 'E':
			case 'e':
				if (!v.empty()) {
				    cout << "�����е������Ϊ" << *max_element(v.begin(), v.end());	
				} else {
					cout << "����Ϊ�գ�"; 
				}
				system("pause");
				break;
			case 'F':
			case 'f':
				if (!v.empty()) {
				    cout << "�����е���С��Ϊ" << *min_element(v.begin(), v.end());	
				} else {
					cout << "����Ϊ�գ�"; 
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
				    cout << "�����е�ƽ����Ϊ" << ave;
				} else {
					cout << "����Ϊ�գ�"; 
				}
				system("pause");
				break;
			case 'Q':
			case 'q':
				cout << "��ѡ���˳�����" << endl;
				break;
		    default:
		    	cout << "����ݲ˵�����ѡ��"; 
		    	system("pause");
	   }
	} while (choice != 'Q' && choice != 'q');
}
