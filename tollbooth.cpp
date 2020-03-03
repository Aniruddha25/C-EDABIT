//============================================================================
// Name        : tollbooth.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class toll{
private:

	int price;
public :


  int ncount=0;

 void  get_data()
	{
	  static int count=0;
	  static int ncount=0;

        cout<<"Enter the price"<<endl;
		cin>> price;
		if (price>0)
		{
		  this->price = price;
		  count++;
		}
		else
		{
			ncount++;
		}
	cout<<"Count :"<<count<<endl;
	cout<<" ncount :"<<ncount<<endl;

 }
   int amtcol()
   {
	   static int amt = 0;
	   amt = this->price + amt;
	   return amt;
   }









};

int main() {


	toll t1;
	t1.get_data();
	int amount =t1.amtcol();
	cout<<amount<<endl;


	toll t2;
	t2.get_data();
    amount =t2.amtcol();
	cout<<amount<<endl;

	toll t3;
	t3.get_data();
	amount =t3.amtcol();
	cout<<amount<<endl;















}
