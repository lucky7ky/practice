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
	    cout << "ִ�мӷ�" << endl;
	else if (x == 2)
        cout << "ִ�м���" << endl;
	else if (x == 3)
	    cout << "ִ�г˷�" << endl;
	else
	    cout << "ִ�г���" << endl; 
} 
