//============================================================================
// Name        : timeclass.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class Time{
private:
	int s;
	int hr;
	int min;
public:
	Time()
{
		this->s=0;
		this->hr=0;
		this->min=0;
}
	Time(int s,int hr,int min)
	{
		this->hr=hr;
		this->min=min;
		this->s=s;


	}
	int gethr()
	{
		return this->hr;
	}
	int getsec()
		{
			return this->s;
		}
	int getmin()
		{
			return this->min;
		}
	void sethr(int hr)
	{
		this->hr=hr;
	}
	void setmin(int min)
		{
			this->min=min;
		}
	void setsec(int s)
		{
			this->s=s;
		}
	void accept_time()
	{
		cout<<"Enter Hr"<<endl;
		cin>>this->hr;
		cout<<"Enter min"<<endl;
		cin>>this->min;
		cout<<"Enter seconds"<<endl;
	    cin>>this->s;
	}
   void print_time()
   {
	   cout<<"Time is :"<<this->hr<<":"<<this->min<<":"<<this->s<<endl;
   }





};

int main() {

	Time *t=new Time[3];
	int i;
	for(i=0;i<3;i++)
	{
		cout<<"input time"<<endl;
		t[i].accept_time();
	}
	cout<<"Display time"<<endl;
	for(i=0;i<3;i++)
		{
            cout<<i+1<<"."<<'\t';
			t[i].print_time();
		}
	delete []t;
	t=NULL;

}
