//============================================================================
// Name        : recursion_sum.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
int sum(int n) {
	 if(n>0)
	 return  n+ sum(n-1);
	 else
	 return 0;


}

int main() {
	int n;
	cout<<"Enter the value of n"<<endl;
	cin>>n;
	int res;
	res=sum(n);
	cout<<res;


}
