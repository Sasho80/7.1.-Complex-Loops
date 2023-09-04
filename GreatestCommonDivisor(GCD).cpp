#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	while (b!=0){
		int oldB = b;
		b = a % b;
		a = oldB;
	}
	cout << "GDC=" <<a<< endl;
	return 0;
}