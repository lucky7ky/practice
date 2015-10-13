#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() 
{   
    int x;
    srand(time(NULL));
	x = rand() % 4 + 1;
	if (x == 1)
	    cout << "执行加法" << endl;
	else if (x == 2)
        cout << "执行减法" << endl;
	else if (x == 3)
	    cout << "执行乘法" << endl;
	else
	    cout << "执行除法" << endl; 
} 
