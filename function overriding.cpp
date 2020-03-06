//============================================================================
// Name        : function.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
class parent{
private:
	string name;

public:
	string surname;
	string dna;
	virtual void accept_name()
	{
		 cout<<"Enter the name"<<endl;
     cin>>name;
	cout<<"Enter the surname "<<endl;
	cin>>surname;
	cout<<"Enter the dna "<<endl;
	cin>>dna;

		cout<<"Enter the surname "<<endl;
		cin>>surname;
		cout<<"Enter the dna "<<endl;
		cin>>dna;


	}
 void display()
	{
		cout<<"Name :"<<name;
		cout<<"Surname :"<<surname;
		cout<<"dna :"<<dna;

	}


};
class child :public parent{
 private:
	string name;
	string traits;
  public:
	void accept_name()
	{
		cout<<"Enter the name"<<endl;
				cin>>name;
				cout<<"Enter the surname "<<endl;
				cin>>surname;
				cout<<"Enter the dna "<<endl;
				cin>>dna;
				cout<<"Enter the traits "<<endl;
				cin>>traits;



	}
	void display()
		{
			cout<<"Name :"<<name<<'\t';
			cout<<"Surname :"<<surname<<'\t';
			cout<<"dna :"<<dna<<'\t';
			cout<<"Traits :"<<traits;

		}

};

int main() {
	child c;
	parent p;
	int choice;
	do{
		cout<<"Enter the choice"<<endl;
		cin>>choice;
	switch(choice)
	{
	 case 1:
	 c.accept_name();
	   break;
	 case 2:
	 c.display();
	 break;
	 case 3:
		p.accept_name();
		break;
	 case 4:
		 p.display();
		 break;

	}
	}while(choice!=0);


}
