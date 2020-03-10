//============================================================================
// Name        : shape.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class shape{
public:
	virtual void accept()=0;
	virtual void display()=0;
	virtual int cal_area()=0;
	virtual int  cal_peri()=0;



};
class rect:public shape{
private:
	int length;
	int breadth;

public:
	rect()
{
	this->length= 0;
	this->breadth=0;

}
	rect(int length,int breadth)
	{
		this->length= length;
	   this->breadth=breadth;

	}
	int get_length()
	{
		return length;
	}
	int get_breadth()
		{
			return breadth;
		}
	void set_length(int length)
	{
		this->length= length;
	}
	void set_breadth(int breadth)
		{
		this->breadth=breadth;
		}
	void accept()
	{
		cout<<"Enter the length"<<endl;
		cin>>length;
		cout<<"Enter the breadth"<<endl;
		cin>>breadth;



	}
	void display()
	{
		cout<<"Length :"<<length<<endl;
		cout<<"Breadth :"<<breadth<<endl;

	}
	int cal_area()
	{
		return length * breadth;

	}
	int cal_peri()
	{
		return (length + breadth)*2 ;
	}




};
class circle:public shape{
	int r;

public:
	circle(){
		this->r=0;
	}
	circle(int r)
	{
		this->r=r;
	}
	void accept()
		{
		  cout<<"Enter radius :"<<endl;
		  cin>>r;

		}
	void display()
		{
		   cout<<"Radius :"<<r<<endl;

		}
	int get_radius()
			{
				return r;
			}
		void set_radius(int r)
		{
			this->r= r;
		}
	   int   cal_area()
		{
			return 3.14 * r*r;
		}
	   int  cal_peri()
	   {
		   return 6.28*r;
	   }


};
class square:public shape{
	int side;

public:
	void accept()
			{
		cout<<"Enter side :"<<endl;
		cin>>side;


			}
		void display()
			{
			cout<<"side:"<<side<<endl;

			}
		int get_side()
					{
						return side;
					}
				void set_side(int side)
				{
					this->side= side;
				}
			   int   cal_area()
				{
					return side * side;
				}
			   int  cal_peri()
			   {
				   return 4*side;
			   }


};


 int main() {
	shape *ptr[5];

	rect r1;
	circle c1;
	int i;
	int choice;




for(i=0;i<5;i++)
{
	cout<<"Enter choice"<<endl;
	cin>>choice;


	switch(choice)
	{


	  case 1:
		      ptr[i] = new rect;
		      break;
	  case 2:
	  	      ptr[i]= new circle;
	  	      break;
	  case 3:
		     ptr[i]=new square;
		     break;
       }
	ptr[i]->accept();

}
for(i=0;i<5;i++)
{
	ptr[i]->display();
}
for(i=0;i<5;i++)
{
	cout<<ptr[i]->cal_area()<<endl;
}
for(i=0;i<5;i++)
{
	cout<<ptr[i]->cal_peri()<<endl;
}

















}
