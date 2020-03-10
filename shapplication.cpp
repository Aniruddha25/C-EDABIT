/*
 * main.cpp
 *
 *  Created on: 09-Mar-2020
 *      Author: Aniruddha
 */

#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class product {
private:
	char title[20];
	float price;
public:
	product() {
		strcpy(this->title, "");
		this->price = 0.0;
	}
	product(const char *title, float price) {
		strcpy(this->title, title);
		this->price = price;
	}
	// getters/setters
	float get_price() {
		return this->price;
	}
	virtual void accept() {
		cout << "title: ";
		cin >> this->title;
		cout << "price: ";
		cin >> this->price;
	}
	virtual void display() {
		cout << "title: " << this->title << endl;
		cout << "price: " << this->price << endl;
	}
	virtual float calc_discount()=0;
};

class book: public product {
private:
	int pages;
public:
	book() {
		this->pages = 0;
	}
	book(const char *title, float price, int pages)
	:product(title, price) {
		this->pages = pages;
	}
	// getter/setter
	void accept() {
		product::accept();
		cout << "pages: ";
		cin >> this->pages;
	}
	void display() {
		product::display();
		cout << "pages: " << this->pages << endl;
	}
	float calc_discount() {
		return this->get_price() * 0.10;
	}
};

class tape: public product {
private:
	int duration;
public:
	tape() {
		this->duration = 0;
	}
	tape(const char *title, float price, int duration)
	:product(title, price) {
		this->duration = duration;
	}
	// getter/setter
	void accept() {
		product::accept();
		cout << "duration: ";
		cin >> this->duration;
	}
	void display() {
		product::display();
		cout << "duration: " << this->duration << endl;
	}
	float calc_discount() {
		return this->get_price() * 0.05;
	}
};

int main() {
	book b1;
	tape t1;
	int i;
	//product p1; // non-sense: not to be allowed

	int option;
	product *ptr[3];
	for(i=0;i<3;i++)
	{
	cout << "\n\n1. book\n2. tape\nenter option: ";
	cin >> option;
	switch(option) {
	case 1:
		ptr[i] = new book;
		break;
	case 2:
		ptr[i] = new tape;
		break;
	}
	ptr[i]->accept();
}
	for(i=0;i<3;i++)
		ptr[i]->display();

	float price[3], discount[3], bill[3];
	for(i=0;i<3;i++)
	{
	   price[i] = ptr[i]->get_price();
	   discount[i] = ptr[i]->calc_discount();
	}
	for(i=0;i<3;i++)
	    bill[i] = price[i] - discount[i];

	for(i=0;i<3;i++)
	{
	cout << "price: " << price[i] << endl;
	cout << "discount: " << discount[i] << endl;
	cout << "bill: " << bill[i] << endl;
	}
	for(i=0;i<3;i++)
	{
		delete ptr;
	}



}





