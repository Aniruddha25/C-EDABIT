//============================================================================
// Name        : compo1.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class date{
	int month;
	int day;
	int year;
public:
	date()
{
		this->day=1;
		this->month=1;
		this->year=2000;
		}
	date(int day,int month,int year)
	{
		this->day=day;
		this->month=month;
		this->year=year;
	}
	int get_day()
	{
		return this->day;
	}
	int get_month()
		{
			return this->month;
		}
	int get_year()
		{
			return this->year;
		}
	void set_day(int day)
	{
		this->day=day;
	}
	void set_month(int month)
		{
			this->month=month;
		}
	void set_year(int year)
		{
			this->year=year;
		}
	void accept()
	{
		cout<<"day"<<endl;
		cin>>day;
		cout<<"month"<<endl;
		cin>>month;
		cout<<"year"<<endl;
		cin>>year;


	}
	void display()
	{
		cout<<day<<" -"<<month<<"-"<<year<<endl;

	}



};
class person{
	string name;
	string address;
	date birthdate;
public:
	person()
{
		this->name = "Aniruddha";
		this->address = "Pune";
		this->birthdate.set_day(1);
		this->birthdate.set_month(2);
		this->birthdate.set_year(2020);



}
	person(string name,string address,date birthdate){
		this->name = name;
		this->address = address;
		this->birthdate = birthdate;
	}
	string get_name()
	{
		return this->name;
	}
	string get_address()
		{
			return this->address;
		}
	void set_name(string name)
	{
		this->name = name;

	}
	void set_address(string address){
		this->address=address;
	}
	date get_birthdate()
	{
		return this->birthdate;
	}
    void set_birthdate(date birthdate)
    {
    	this->birthdate=birthdate;
    }
    void accept()
    {
    	cout<<"Name :"<<endl;
    	cin>>name;
    	cout<<"Address:"<<endl;
    	cin>>address;
    	cout<<"Enter the birthdate"<<endl;
    	birthdate.accept();



    }
    void display()
    {
    	cout<<"Name :"<<name<<endl;
    	cout<<"Address :"<<address<<endl;
    	cout<<"Birthdate :";
    	birthdate.display();
    	cout<<endl;

    }




};
class employee:public person{
	int id;
	float sal;
	string dept;
	date join_date;
public:
	employee()
	{
		this->id=1;
		this->sal=10000;
		this->dept="Prodution";
		this->join_date.set_day(1);
		this->join_date.set_month(2);
		this->join_date.set_year(2022);

	}
	employee(int id,float sal,string dept,date join_date)
	{
		this->id=id;
		this->dept=dept;
		this->sal=sal;
		this->join_date=join_date;
	}
	int get_id()
	{
		return this->id;
	}
	float get_sal()
		{
			return this->sal;
		}
	string get_dept()
		{
			return this->dept;
		}
	date get_joindate()
	{
		return this->join_date;
	}
	void set_id(int id)
	{
		this->id=id;
	}
	void set_sal(float sal)
		{
			this->sal=sal;
		}
	void set_dept(string dept)
		{
			this->dept=dept;
		}
	void set_joindate(date join_date)
	{
		this->join_date=join_date;
	}
	void accept()
	{
		person::accept();
		cout<<"Enter id :"<<endl;
		cin>>id;
		cout<<"Enter sal:"<<endl;
		cin>>sal;
		cout<<"Enter dept :"<<endl;
		cin>>dept;
		cout<<"ENTER THE JOININING DATE :"<<endl;
		join_date.accept();

	}
	void display()
	{
		person::display();
		cout<<"ID :"<<id<<endl;
		cout<<"Sal :"<<sal<<endl;
		cout<<"Dept :"<<dept<<endl;
		cout<<"Join Date :";
		join_date.display();

	}


};
class manager:public employee{
	float bonus;
public:
	manager()
{

		this->bonus=4000;
}
	manager(float bonus)
	{
		this->bonus=bonus;
	}
	float get_bonus()
	{
		return this->bonus;

	}
	void set_bonus(float bonus){
		this->bonus=bonus;
	}
	void display()
	{
		employee::display();
		cout<<endl;
		cout<<" Bonus :"<<bonus<<endl;
	}
	void accept()
	{
		employee::accept();
		cout<<endl;
		cout<<"bonus :"<<endl;
		cin>>bonus;

	}





};
class salesman:public employee{
	float comm;
public:
	salesman()
	{

			this->comm=1000;
	}
		salesman(float comm)
		{
			this->comm=comm;
		}
		float get_comm()
		{
			return this->comm;

		}
		void set_comm(float comm){
			this->comm=comm;

		}
		void display()
		{
			employee::display();
			cout<<endl;
			cout<<" commision :"<<comm<<endl;
		}
		void accept()
		{
			employee::accept();
			cout<<endl;
			cout<<"commision :"<<endl;
			cin>>comm;

		}



};
//sm :salesmanager
class sm:public manager,public salesman{
public:
	sm()
{
		manager();
		salesman();
}

void display()
{

	manager::display();
	float comm=this->get_comm();

	cout<<"Commision :"<<comm;


}


void accept()
{
	manager::accept();
	float comm;
	cout<<"Enter commision :"<<endl;
	cin>>comm;
	this->set_comm(comm);









}


};


int main() {
sm m;
m.accept();
m.display();










}
