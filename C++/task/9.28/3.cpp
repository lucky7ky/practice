#include <iostream>

using namespace std;

int main() 
{
	const int questions = 30;
	int number, rate;
	cout << "请输入学生正确的答题数（0-" << questions << " 之间的整数）" << endl; 
	cin >> number; 
	if (number >= 0 && number <= questions) 
	{
	    rate = 100 * number / questions;
		cout << "学生答题的正确率为" << rate << "%" << endl;	
	}
	else 
	{
	    cout << "输入数据有误，正确答题数为 0-" << questions << " 之间的整数" << endl;   
	}
}
