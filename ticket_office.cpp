#include <iostream>
using namespace std;

int main() {
	int ages[5];

	for (int i = 0; i < 5; ++i) {
		cin >> ages[i];
			}
	int price = 10;
	double total = price * 5;
	int j;
	double small;

	small = ages[0];
	for (j = 0; j < 5; ++j) {
		if (small > ages[j]) {
			small = ages[j];
			}
	double discount;
	discount = total - (small / 2);

	cout << discount;
		}
return 0;
}
