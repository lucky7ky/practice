#include <iostream>
using namespace std;
int main() 
{
	const int p1 = 10, p2 = 5;
	int p, h, choice;
	float m, fee; 
	cout << "请选择大车或小车" << endl;
	cout << "1.大车" << endl;
	cout << "2.小车" << endl;
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
		    cout << "输入错误！";
			return 0;	
	}
	cout << "请输入小时数：";
	cin >> h;  
	cout << "请输入分钟数：";
	cin >> m;
	if (m >= 0 && m <= 60) 
	{
		if (m == 0) 
		    fee = p * h; 
        else if (m <= 30) 
    	    fee = p * (h + 0.5);
        else 
	        fee = p * (h + 1);
	    cout << "您的停车费用共计 " << fee << "元" <<endl; 
	} 
	else 
	    cout << "分钟数需在0-60之间" << endl; 
} 
