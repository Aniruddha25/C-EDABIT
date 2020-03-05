//============================================================================
// Name        : passexcept.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include  <cctype>
using namespace std;
class Passwordcheck{



};
class passwordmatch
{

};

int main() {

	string pass;
	cout<<"enter the password"<<endl;
	cin>>pass;
	int a=pass.size();




	try
	{
	if(a <6 )
	{

		Passwordcheck p;
		throw p;

	}
	else
		cout<<"Password has cleared 1 stage of validation need to check contains digit"<<endl;

	Passwordcheck q;
	int i;
	for ( i = 0; i < a; i++)
	{
	        if (isdigit(pass[i]) or isalpha(pass[i]))
	        {
	        	cout<<"Password has cleared 2nd stage"<<endl;
	        	cout<<"password is valid"<<endl;
	        	break;
	        }
	        else
	        	throw q;


}











}
	catch(Passwordcheck p)
	{
		cout<<"Password length is not sufficient or it doesnt contain any digit or letter "<<endl;

	}






}
