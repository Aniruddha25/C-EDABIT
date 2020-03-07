//============================================================================
// Name        : bank_account.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "bank.h"
#include <string>
#include <cstring>
using namespace std;


int main() {
	account a;
	a.accept();
	a.display();
	a.deposit(1000);
	a.display();
	a.withdraw(2000);
	a.display();






}
