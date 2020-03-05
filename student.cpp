//============================================================================
// Name        : student.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>
using namespace std;
class student
{
private :
	char name[20];
	char gender[20];
	int rn;
	string subject[3];
	int marks[3];
public:
	void get_data()
	{
		cout<<"enter the name"<<endl;
		cin>>name;
		cout<<"enter the gender"<<endl;
		cin>>gender;
		cout<<"enter the rn"<<endl;
		cin>>rn;

		int i;
		for(i=0;i<3;i++)
		{
			cout<<"enter the name of subject"<<endl;
			cin >> subject[i];
			cout<<"enter the marks"<<endl;
			cin>>marks[i];

		}


}
	void print_data()
	{
		cout<<"Name :"<<name<<endl;
		cout<<"Gender:"<<gender<<endl;
		cout<<"RN :"<<rn<<endl;
		int i;
		cout<<"Academic Record :"<<endl;

		for(i=0;i<3;i++)
		{
			cout<<subject[i]<<" : "<<marks[i]<<endl;
		}
	}
int calpercent()
		{
		   int i;
		   int mk= 0;
		   for(i=0;i<3;i++)
		   {

			mk = mk+marks[i];
		    }
		   int percent;
		   percent = mk/3;
		   return percent;
}
void searchbyname(string str)
{
	if(name == str)
	{
		cout<<"Name :"<<name<<endl;
		cout<<"RN :" <<rn<<endl;
		cout<<"Gender :"<<gender<<endl;
		int per;
		per = calpercent();
		cout<<"percent :"<<per<<endl;



	}
}



};
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;

    // One by one move boundary of unsorted subarray
    for (i = 0; i < n-1; i++)
    {
        // Find the minimum element in unsorted array
        min_idx = i;
        for (j = i+1; j < n; j++)
        if (arr[j] < arr[min_idx])
            min_idx = j;

        // Swap the found minimum element with the first element
        swap(&arr[min_idx], &arr[i]);
    }
}




int main() {
	student s[2];
	int j;
	string str = "aniruddha";

	for(j=0;j<2;j++)
	{

		s[j].get_data();
		s[j].print_data();


	}
cout<<"Seaching student by name "<<endl;
	for(j=0;j<2;j++)
	{
		s[j].searchbyname(str);
	}
	cout<<"sort by percent"<<endl;
	int per[2];
	for(j=0;j<2;j++)
	{
		per[j]=s[j].calpercent();
	}
	selectionSort(per,2);
	int k;
	int l;

	for(k=0;k<2;k++)
	{
		cout<<per[k]<<endl;
	}






















}



