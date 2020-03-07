/*
 * bank.h
 *
 *  Created on: 07-Mar-2020
 *      Author: sunbeam
 */

#ifndef BANK_H_
#define BANK_H_

class account_type{
 public:
	char type[20];
	void get_type();
	void disp_type();
	void set_type(char type[]);










};
class account{
private :
	int id;
	account_type type;
	double balance;
public:
	account();
	account(int id,double balance, account_type type);
	void accept();
	void display();
	void set_id(int id);
    int get_id();
    int get_balance();
	void deposit(double amount);
	void withdraw(double amount);








};

class insufficient_funds{
private:
	int accid;
	double cur_balance;
	double withdraw_amount;
public:
	insufficient_funds(account a,double amount);
	void display();



};





#endif /* BANK_H_ */
