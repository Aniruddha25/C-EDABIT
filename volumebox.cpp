//============================================================================
// Name        : volumebox.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class box{
private:
	int l;
	int b;
	int h;
public:
	void get_paras(int l,int b,int h)
	{
		this->l=l;
		this->b=b;
		this->h=h;

	}
int vol()
{
	int temp;
	temp = this->l * this->b * this->h ;
	return temp;
}

};

int main() {
	box b1;

	int volume;
	b1.get_paras(10,20,30);
	volume=b1.vol();
	cout<<"Volume of box :"<<volume<<endl;


}
