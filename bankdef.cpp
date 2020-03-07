/*
 * def.cpp
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */
#include <iostream>
#include "bank.h"
#include <string>
#include <cstring>
using namespace std;
    account::account(){
    	account_type t;

    	this->id =1;
    	this->balance=10000;
    	this->type=t;



   }
	account::account(int id,double balance,account_type type)
	{

		    	this->id =id;
		    	this->balance=balance;



}
	void account::accept(){

		cout<<"Enter id :"<<endl;
		cin>>id;
		cout<<"Enter balance :"<<endl;
		cin>>balance;
	    cout<<"Enter type  :"<<endl;
	    account_type type;
	    type.get_type();









	}
	void account::display(){
		cout<<"Account details :"<<endl;
		cout<<"ID :"<<id<<endl;
		cout<<" Balance :"<<balance<<endl;
		account_type type;
		cout<<"Type :";
	    type.disp_type();

	}
	void account::set_id(int id)
	{
		this->id= id;

	}

	int account:: get_id(){
		return id;

	}

	int account::get_balance(){
		return balance;

	}
	void account::deposit(double amount){
		balance= balance+amount;


	}
	void account::withdraw(double amount){
		
		if(bala)
		balance= balance-amount;



	}
	void account_type::get_type()
	{
		cin>>this->type;

	}
	void account_type::disp_type()
	{
		cout<<this->type<<endl;
	}
	void account_type::set_type(char type[])
		{
		    strcpy(this->type,type);

		}
















