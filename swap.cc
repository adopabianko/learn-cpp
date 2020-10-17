//============================================================================
// Name        : swap.cpp
// Author      : Ado Pabianko
// Version     :
// Copyright   : 
// Description : Swap in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void swap(int *a, int *b);

int main() {
	int a = 1;
	int b = 2;

	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;

	swap(&a, &b);

	cout << "Nilai a : " << a << endl;
	cout << "Nilai b : " << b << endl;
	return 0;
}

void swap(int *a, int *b) {
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;

	return;
}
