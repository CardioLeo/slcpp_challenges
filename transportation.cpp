#include <iostream>
using namespace std;

int main() {
	int x; //total passengers
	cin >> x;
	int y; //bus capacity
	y = 50;
	int z; //remainder of empty seats
	z = y - (x%y);
	cout << z;
return 0;
}
