#include <iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int sum = 0;
	do {
		sum = sum + (n%10);
		n = n / 10;
	} while (n>=1);
	cout << "Sum of digits: " << sum << endl;
	return 0;
}