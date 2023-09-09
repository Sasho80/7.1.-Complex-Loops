#include <iostream>
using namespace std;
int main() {
	bool hasToEnd = false;
	for (int i = 1; i <=3; i++){
		if (hasToEnd==false){
			for (int j= 3; j >=1; j--){
				if (i+j==2){
					hasToEnd = true;
					break;
				}
				cout << i << " " << j << endl;
			}
		}
	}
	return 0;
}