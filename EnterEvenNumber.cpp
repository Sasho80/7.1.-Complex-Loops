#include <iostream>
using namespace std;
int main() {
	int n=0;
	while (true) {
		cout << "Enter even number:" << endl;
		cin >> n;
		if (n%2==0){
			break;
		}
		cout << "The number is not even." << endl;
	}
	cout << "Even number entered:"<<n<< endl;
	return 0;
}