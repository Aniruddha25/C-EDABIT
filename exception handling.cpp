//============================================================================
// Name        : exception.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cmath>
using namespace std;
int  sqrroot(int num)
{
	if(num<0)
		throw "imaginary root";
	else
		return sqrt(num);
}

int main() {
	int n1;
	double s;
	cout<<"enter the n1"<<endl;
	cin>>n1;
	try
	{
		s=sqrroot(n1);
		cout<<"Sqrt :"<<s;

	}
	catch(...)
	{
		cout<<"Access Denied"<<endl;
	}



}
