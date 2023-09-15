#include <iostream>

using namespace std;

int main() {


	int inum;
	cin >> inum;

	if (0 > inum) {
		cout << "cold";
	}
	else if ( inum <= 40) {
		cout << "moderate";
	}
	else if(40<inum){
		cout << "hot";
	}
}
