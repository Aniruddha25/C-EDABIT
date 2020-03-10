//============================================================================
// Name        : cricketapp.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class cricketer{
	int id;
	string name;
public:
	cricketer()
{
		this->id=1;
		this->name= "VIRAT";
}
	cricketer(int id,string name)
{
		this->id=id;
		this->name= name;

}
virtual void accept()
{
	cout<<"ENTER ID : " <<endl;
	cin>>id;

	cout<<"ENTER name: " <<endl;
	cin>>name;


}
virtual void display()
{
	cout<<"ID :"<<id<<endl;
	cout<<"Name :"<<name<<endl;

}
void set_name(string name)
{
	this->name=name;
}
void set_id(int id)
		{
	       this->id=id;
		}


};
class batsman:public virtual cricketer{
	int runs;
public:
	batsman()
{
		this->set_name("Aniruddha");
		this->set_id(2);
		this->runs=200;

}
	batsman(int runs,int id,string name):cricketer(id,name)
	{
		this->runs=runs;
	}
	virtual void accept()
	{
		cricketer::accept();
		cout<<"Enter runs scored"<<endl;
		cin>>runs;

	}
	virtual void display()
	{
	   cricketer::display();
	   cout<<"Runs :"<<runs;


	}
	int get_runs()
	{
		return runs;
	}
	void set_runs(int runs)
	{
		this->runs =runs;
	}



};
class bowler:public virtual  cricketer{
	int wk;
public:
	bowler()
	{
			this->set_name("Aniruddha");
			this->set_id(2);
			this->wk=10;


	}
		bowler(int wk,int id,string name):cricketer(id,name)
		{
			this->wk=wk;
		}
		virtual void accept()
		{
			cricketer::accept();
			cout<<"Enter wickets taken "<<endl;
			cin>>wk;

		}
		virtual void display()
		{
		   cricketer::display();
		   cout<<"Wickets :"<<wk;


		}
		int get_wks()
		{
			return wk;
		}
		void set_wk(int wk)
		{
			this->wk =wk;
		}


};
class allrounder:public batsman,public bowler{
public:
	void accept()
	{
		batsman::accept();
		int wks;
		cout<<"Wks :"<<endl;
		cin>>wks;
		bowler::set_wk(wks);




	}
	void display()
	{
	batsman::display();
	cout<<endl;
	cout<<"WICKETS :"<<bowler::get_wks()<<endl;


	}


};

int main() {
	cricketer *c;
	int ch;
	cout<<"Enter choice"<<endl;
	cin>>ch;
	switch(ch)
	{
	   case 1:
		    c=new batsman;
		    break;

	   case 2:
		    c=new bowler;
		    break;
	   case 3:
		    c=new allrounder;
		    break;



	}
	c->accept();
	c->display();







}
