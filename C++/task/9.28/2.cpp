#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int answer, x, y, z;
	srand(time(NULL));
	answer = rand() % 100 + 1;
	cout << "���1~100��һ�����������һ�������λ��ᡣ" << endl;
	cout << "��һ�λ��ᣬ������1~100�е�һ�����֣�" << endl; 
	cin >> x;
	if (x > answer)
	    cout << "���µ���������ȷֵ��������һ�Σ�" << endl;
	else if (x < answer)
	    cout << "���µ���С����ȷֵ��������һ�Σ�" << endl; 
    else	
	{   
	    cout << "��ϲ���¶�����" << endl; 
	    return 0;   
	} 
	cout << "�ڶ��λ��ᣬ������1~100�е�һ�����֣�" << endl; 
	cin >> y;
	if (y > answer)
	    cout << "���µ���������ȷֵ��������һ�Σ�" << endl;
	else if (y < answer)
	    cout << "���µ���С����ȷֵ��������һ�Σ�" << endl;
    else	
	{   
	    cout << "��ϲ���¶�����" << endl; 
	    return 0;   
	} 
	cout << "���һ�λ��ᣬ������1~100�е�һ�����֣�" << endl; 
	cin >> z;
	if (z > answer)
	    cout << "���µ���������ȷֵ������" << answer << endl;
	else if (z < answer)
	    cout << "���µ���С����ȷֵ������" << answer << endl;
    else	
	{   
	    cout << "��ϲ���¶�����" << endl;    
    }
    return 0;
}
