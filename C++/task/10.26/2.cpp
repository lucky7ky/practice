#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() {
	const int row = 11, col = 11;
	int middle_row = row / 2 + 1, middle_col = col / 2 + 1;
	for (int i = 1; i <= row; i++) {
		for (int j = 1; j <= col; j++) {
			if ( (i <= middle_row && abs(j - middle_col) < i) || (i > middle_row  && abs(j - middle_col) < 2))  {
				cout << "*";
			} else {
				cout << " ";
			}
		}
		cout << endl << endl; 
	}
} 
