#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	int answer, x, y, z;
	srand(time(NULL));
	answer = rand() % 100 + 1;
	cout << "请猜1~100的一个随机数，您一共有三次机会。" << endl;
	cout << "第一次机会，请输入1~100中的一个数字！" << endl; 
	cin >> x;
	if (x > answer)
	    cout << "您猜的数大于正确值，请再试一次！" << endl;
	else if (x < answer)
	    cout << "您猜的数小于正确值，请再试一次！" << endl; 
    else	
	{   
	    cout << "恭喜！猜对啦！" << endl; 
	    return 0;   
	} 
	cout << "第二次机会，请输入1~100中的一个数字！" << endl; 
	cin >> y;
	if (y > answer)
	    cout << "您猜的数大于正确值，请再试一次！" << endl;
	else if (y < answer)
	    cout << "您猜的数小于正确值，请再试一次！" << endl;
    else	
	{   
	    cout << "恭喜！猜对啦！" << endl; 
	    return 0;   
	} 
	cout << "最后一次机会，请输入1~100中的一个数字！" << endl; 
	cin >> z;
	if (z > answer)
	    cout << "您猜的数大于正确值！答案是" << answer << endl;
	else if (z < answer)
	    cout << "您猜的数小于正确值，答案是" << answer << endl;
    else	
	{   
	    cout << "恭喜！猜对啦！" << endl;    
    }
    return 0;
}
