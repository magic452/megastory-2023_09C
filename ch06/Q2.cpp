#include <iostream>

using namespace std;

int main() {
	int inum;


	cout << "�Է� : ";
	cin >> inum;
	
	cout << (inum % 100000 - inum % 10000) / 10000 <<"��"
		<< (inum % 10000 - inum % 1000) / 1000 << "õ"
		<< (inum % 1000 - inum % 100) / 100 << "��"
		<< (inum % 100 - inum % 10) / 10 << "��" 
		<< inum % 10;


	if (0 > inum || inum > 99999) {
		cout << " �߸��� �Է�";
		
}
	
	
	
}