#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	//чрез i+=3 повишаване стойността на i с размера на стъпката
	for ( int i = 1; i <=n;  i+=3){
		cout << i << endl;
	}
	return 0;
}