#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int f0 = 1;
	int f1 = 1;
	for (int i = 0; i < n-1; i++){
		int fNext = f0 + f1;
		f0 = f1;
		f1 = fNext;
	}
	cout << f1 << endl;
	return 0;
}
