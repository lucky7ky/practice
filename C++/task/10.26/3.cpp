#include <iostream>
using namespace std;

int main() {
	int totalNum = 0; 
	int Tom, Mary, Bob, Kimi;
	for (Tom = 0; Tom <= 1; Tom++) {
		for (Mary = 0; Mary <= 1; Mary++) {
			for (Bob = 0; Bob <= 1; Bob++) {
				for (Kimi = 0; Kimi <= 1; Kimi++) {
					if (Tom == 1 && Bob == 0) // Tom �μӣ�Bob���μ� 
					    continue;
					else if (Mary == 0 && Kimi == 0)// Mary �� Kimi �����μ� 
					    continue;
					else if ((Bob == 1 && Kimi == 0) || (Bob == 0 && Kimi == 1))//Bob �� Kimi��ͬ�� 
					    continue;
					else {
						cout << "�μ���: " ;
						if (Tom) cout << "Tom ";
						if (Mary) cout << "Mary ";
						if (Bob) cout << "Bob ";
						if (Kimi) cout << "Kimi ";
						cout << endl;
						totalNum ++;
				    }     
				}
			}
		}
	}
	cout << "һ����"<<totalNum<< "�ֲμӷ���"<<endl; 
}
