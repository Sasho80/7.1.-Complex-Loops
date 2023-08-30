#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int num = 1;
	for (int i = 0; i <=n; i++){
		cout << num << endl;
		num = num * 2;
	}
	return 0;
}