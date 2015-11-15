#include <iostream>
#include <vector>
using namespace std;
 
int main() {
	vector<int> v;
	int n, i, j = 0;
	cout << "请输入一个整形数";
	cin >> n;
	for (i = 1; i <= n; i++) {
		v.push_back(i);
	}
	while (v.size() > 1) {
		 i = j;
		 j = (i + 2) % v.size();
		 v.erase(v.begin() + j);
	};
	cout << "最后留下来的是原来的第" << v[0] << "位";
}
