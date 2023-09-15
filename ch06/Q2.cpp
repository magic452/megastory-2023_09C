#include <iostream>

using namespace std;

int main() {
	int inum;


	cout << "입력 : ";
	cin >> inum;
	
	cout << (inum % 100000 - inum % 10000) / 10000 <<"만"
		<< (inum % 10000 - inum % 1000) / 1000 << "천"
		<< (inum % 1000 - inum % 100) / 100 << "백"
		<< (inum % 100 - inum % 10) / 10 << "십" 
		<< inum % 10;


	if (0 > inum || inum > 99999) {
		cout << " 잘못된 입력";
		
}
	
	
	
}