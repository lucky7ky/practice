#include <iostream>
using namespace std;
int main() 
{
	const int p1 = 10, p2 = 5;
	int p, h, choice;
	float m, fee; 
	cout << "��ѡ��󳵻�С��" << endl;
	cout << "1.��" << endl;
	cout << "2.С��" << endl;
	cin >> choice;
	switch (choice)
	{
		case 1:
		    p = p1;
		    break;
		case 2:
		    p = p2;
			break;
		default:
		    cout << "�������";
			return 0;	
	}
	cout << "������Сʱ����";
	cin >> h;  
	cout << "�������������";
	cin >> m;
	if (m >= 0 && m <= 60) 
	{
		if (m == 0) 
		    fee = p * h; 
        else if (m <= 30) 
    	    fee = p * (h + 0.5);
        else 
	        fee = p * (h + 1);
	    cout << "����ͣ�����ù��� " << fee << "Ԫ" <<endl; 
	} 
	else 
	    cout << "����������0-60֮��" << endl; 
} 
