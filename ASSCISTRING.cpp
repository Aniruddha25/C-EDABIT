//============================================================================
// Name        : ASSCISTRING.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include <cstdlib>

using namespace std;
int sum(char string [])
{


	int i=0;
	while(string[i]!= NULL)
	{
	    i++;
	}

	int l= i-1;
	int sum=0;
	for(i=0;i<l;i++)
	{
		sum= sum+ int(string[i]);

	}
	return sum;

}

int main() {
	cout<<"Enter the string first"<<endl;
	char string1[20];
	cin>>string1;
	cout<<"Enter the string second"<<endl;
	char string2[20];
	cin>>string2;

	int sum1;
	sum1= sum(string1);

	int sum2 = sum(string2);

	if(sum1>sum2)
	{
	    cout<<"string1 is greater than string2"<<endl;
	}
	else if(sum1==sum2)
	{
		cout<<"strings are Equal"<<endl;
	}
	else
	{
		cout<<"string2 is greater than string1"<<endl;
	}






}

