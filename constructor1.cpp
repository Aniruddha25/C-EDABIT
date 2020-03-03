//============================================================================
// Name        : constructor1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
#include <cstring>
using namespace std;
class batsman{
private:

	int age;
	int runs;
	string name;
public:
batsman( )
{
        this->name = "virat";
		this->age = 31;
		this->runs = 12000;

}
batsman(string name)
{
	this->age = 25;
	this->runs = 3000;
	this->name =name;

}
batsman(string name ,int age)
{
	this->age = age;
	this->runs = 8000;
	this->name =name;

}
batsman & max(batsman &b1, batsman &b2)
{
	if(runs>b1.runs && runs>b2.runs)
		return *this;
	else if (b1.runs>runs && b1.runs > b2.runs)
		return b1;
	else if  (b2.runs>runs && b2.runs > b1.runs)
		return b2;

}
batsman &min(batsman &b1,batsman &b2)
{
	if (age<b1.age && age < b2.age)
		return *this;
	else if (b1.age<age && b1.age <b2.age)
		return b1;
	else if (b2.age<age && b2.age <b1.age)
			return b2;

}
void display(){

	cout<<this->age<<endl;
	cout<<this->runs<<endl;
	cout<<this->name<<endl;
}



};

int main() {
	batsman b;
	cout<<"Display info."<<endl;
	cout<<"Player 1"<<endl;
	b.display();
	batsman b1("Hardik");
	cout<<"Player 2 :"<<endl;
	b1.display();
	batsman b2("smith",29);
	cout<<"player 3"<<endl;
	b2.display();
	cout<<"HIGHEST runscorer"<<endl;
	batsman Highscorer;
	Highscorer = b2.max(b,b1);
	Highscorer.display();
	batsman youngplayer;
	cout<<"Youngest Player"<<endl;
	youngplayer = b2.min(b,b1);
	youngplayer.display();







}
