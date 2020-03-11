//============================================================================
// Name        : CPPTEST.cpp
// Author      : aNIRUDDHA
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;


class scheme{
public:
	string sc;
	virtual void accept()=0;

	virtual void display()=0;

	virtual float cal_matureamount()=0;






};

class recurring_deposit:public scheme{
private:
	float amount;
	float interest;
	string name;
	int id;


public:
	recurring_deposit()
{
		this->amount=1000;
		this->interest=1.2f;//1.2 interest for month
		this->name="ANIRUDDHA";
		this->id=1;


}
	recurring_deposit(float amount,float interest,string name,int id)
	{
		this->interest=interest;
		this->amount=amount;
		this->name=name;
		this->id=id;

	}
	void set_amount(float amount)
	{
		this->amount=amount;
	}
	float get_amount()
	{
		return this->amount;
	}
	void accept()
	{

		cout<<"Enter Customer name"<<endl;
		cin>>name;
		cout<<"Enter bank id"<<endl;
		cin>>id;
		cout<<"Enter amount"<<endl;
		cin>>amount;
		exception e;
		try{
		if(amount<1000)

			throw e;


		}
		catch(exception e)
		{
			cout<<"DEPOSITED AMOUNT IS NOT SUFFICIENT"<<endl;
			cout<<"GO to main function again to enter amount"<<endl;
		}



		this->interest=1.2f;

	}
	float cal_matureamount(){
			float amt;
			amt= amount + (amount*interest*12*5)/100;
			return amt;

		}
	void display()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"ID :"<<id<<endl;
		cout<<"Amount :"<<amount<<endl;
		cout<<"Interest"<<interest<<endl;
		cout<<"Mature amount :"<<cal_matureamount()<<"Rs."<<endl;

	}





};
class fixed_deposit:public scheme{
	float amount;
	float interest;
	string name;
	int id;
public:
	fixed_deposit(){
		this->amount=40000;
		this->interest=1.0f;
		this->name="ANIRUDDHA";
		this->id=1;

	}
	fixed_deposit(float amount ,float interest,string name,int id){
		this->interest=interest;
		this->amount=amount;
		this->name=name;
		this->id=id;


	}
	void accept()
	{
		cout<<"Enter Customer name"<<endl;
		cin>>name;
		cout<<"Enter bank id"<<endl;
		cin>>id;
		cout<<"Enter amount"<<endl;
		cin>>amount;
		exception e;
		try{
				if(amount<40000)

					throw e;


				}
				catch(exception e)
				{
					cout<<"DEPOSITED AMOUNT IS NOT SUFFICIENT"<<endl;
					cout<<"GO to main function again to enter amount"<<endl;
				}
		this->interest=1;

	}
	void set_amount(float amount)
	{
		this->amount=amount;
	}
	float get_amount()
	{
		return this->amount;
	}
	float cal_matureamount(){
				float amt;
				amt= amount + (amount*interest*12*5)/100;
				return amt;

			}
	void display()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"ID :"<<id<<endl;
		cout<<"Amount :"<<amount<<endl;
		cout<<"Interest"<<interest<<endl;
		cout<<"Mature  amount :"<<cal_matureamount()<<endl;
	}




};

class sharemarket:public scheme{
	float amount;
	float interest;

	string name;
	int id;
public:
	sharemarket(){
		this->amount=50000;
		this->interest= 1.6+ (0.2/12);//0.2f service interest for year

		this->name="ANIRUDDHA";
		this->id=1;



	}
	sharemarket(float amount,float interest,string name,int id){
		this->amount=amount;
		this->interest=interest;

		this->name=name;
		this->id=id;


	}
	void accept()
	{
		cout<<"Enter Customer name"<<endl;
		cin>>name;
		cout<<"Enter bank id"<<endl;
		cin>>id;
		cout<<"Enter amount"<<endl;
		cin>>amount;
		exception e;
		try{
				if(amount<1000)

					throw e;


				}
				catch(exception e)
				{
					cout<<"DEPOSITED AMOUNT IS NOT SUFFICIENT"<<endl;
					cout<<"GO to main function again to reenter amount"<<endl;
				}
		this->interest=1.6 + (0.2/12);//0.2f service interest for year

	}
	void set_amount(float amount)
	{
		this->amount=amount;
	}
	float get_amount()
	{
		return this->amount;
	}
	float cal_matureamount(){
					float amt;
					amt= amount + (amount*interest*12*5)/100;
					return amt;

				}
	void display()
	{
		cout<<"Share Market scheme :"<<endl;
		cout<<"Name :"<<name<<endl;
		cout<<"ID :"<<id<<endl;
		cout<<"Amount :"<<amount<<endl;
		cout<<"Interest"<<interest<<endl;
		cout<<"Mature  amount :"<<cal_matureamount()<<endl;
	}



};
class exeception{

};

int main() {
	int ch;
	scheme *ptr[3];
	int i;


	for(i=0;i<3;i++)
	{
		cout<<"Enter choice"<<endl;
		cin>>ch;
		switch(ch)
		{
		case 1:
			ptr[i]=new recurring_deposit;
			break;
		case 2:
			ptr[i]=new fixed_deposit;
			break;
		case 3:
			ptr[i]=new sharemarket;
			break;


		}
		ptr[i]->accept();
	}
	for(i=0;i<3;i++)
	{
		ptr[i]->display();
	}









}
