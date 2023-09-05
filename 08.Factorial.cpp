#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int fact=1;
	do {
		fact = fact * n;
		n--;
	} while (n>1);
	cout << fact << endl;
	return 0;
}
