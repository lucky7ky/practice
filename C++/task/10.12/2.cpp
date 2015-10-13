#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main() 
{
	int x, y, result, input, tmp;
	char choice;
	srand(time(NULL));
	x = rand() % 101;
	y = rand() % 101;	
	cout << setw(9) << "请选择：" <<endl;
	cout << "A." << setw(9) << "加法练习" << endl;
	cout << "B." << setw(9) << "减法练习" <<endl;
	cout << "Q." << setw(5) << "退出" << endl;
    cin >> choice;
    switch(choice)
    {
    	case 'A':
    		if (x + y > 100) 
    		{
    		    x = (x > 50) ? (x - 50) : x;
    		    y = (y > 50) ? (y - 50) : y;	
    		}   
    		result = x + y;
    		cout << x << "+" << y << "=";
			cin >> input;  
    	    if (input == result)
    	        cout << "正确！";
			else 
			    cout << "错误！";
			break;
		case 'B':
			if (x < y) {
				tmp = y;
				y = x;
				x = tmp;
			}
			result = x - y;
			cout << x << "-" << y << "=";
			cin >> input;
			if (input == result)
			    cout << "正确！";
			else 
			    cout << "错误！";
			break;
		default:
		    cout << "退出"; 
    }
}
