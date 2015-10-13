#include <iostream>
using namespace std;
int main() 
{ 
	float profit, bonus;
	cout << "请输入员工张三当月利润（单位：万元）" << endl;
	cin >> profit;
	if (profit <= 5) 
	    bonus = 0;    
	else if (profit <= 15)
		bonus = (profit - 5) * 0.075;
	else if (profit <= 40)
	    bonus =  (15 - 5) * 0.075 + (profit - 15) * 0.05;
	else if (profit <= 60) 
	    bonus =  (15 - 5) * 0.075 + (40 - 15) * 0.05 + (profit - 40) * 0.03;
	else if (profit <= 100)
	    bonus = (15 - 5) * 0.075 + (40 - 15) * 0.05 + (60 - 40) * 0.03 + (profit - 60) * 0.015;
	else 
	    bonus = (15 - 5) * 0.075 + (40 - 15) * 0.05 + (60 - 40) * 0.03 + (100 - 60) * 0.015 + (profit - 100) * 0.01;
	cout << "应发放奖金总数为 "<< bonus*10000 << "元"; 
} 
