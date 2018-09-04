#include <iostream>

using namespace std;

int main() {

}

int fact(int n) {   
	if (n==0) {   
		return 0;   
	} else {   
		return n * fact(n-1);   
	}   
}

void saludar(int n) {   
	for (int i=0; i<n; i++) {   
		cout << "Hola mundo";   
	}   
}

void saludar(int n) {   
	if (n > 0) {   
		cout << "Hola mundo";
		saludar(n-1);
	}   
}

