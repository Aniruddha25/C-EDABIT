//============================================================================
// Name        : date_project.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
 typedef struct date{
	int dd;
	int mm;
	int yy;

}DATE;
DATE accept_date()
{
	DATE d1;
	cout<<"Enter day"<<endl;
	cin>>d1.dd;
	cout<<"Enter month"<<endl;
	cin>>d1.mm;
	cout<<"Enter year"<<endl;
	cin>>d1.yy;
	return d1;



}
void leapyearcheck(DATE d1)
{
	if(d1.yy % 4 ==0 && d1.yy %100!=0)
		cout<<"leap year"<<endl;
	if(d1.yy %100 == 0){
	   int a= d1.yy/100;
	    if(a%4!=0)
	    	cout<<"Not leap year"<<endl;
	    else
	    	cout<<"leap year"<<endl;

	}
   if(d1.yy %4 !=0)
	   cout<<"Not leap year"<<endl;








}
void print_date(DATE d1)
{
	cout<<d1.dd<<"-"<<d1.mm<<"-"<<d1.yy<<endl;
}



int main() {
	DATE d1;
	d1= accept_date();
	cout<<"Date :"<<endl;
	print_date(d1);
	cout<<"Check for leap year :"<<endl;
	leapyearcheck( d1);




}
