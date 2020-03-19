//============================================================================
// Name        : leftrotation.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
void  leftrot(int arr[],int n,int d)
{


for(int i=0;i<d;i++)
 {
	 int  temp=arr[0];
	 int  j;
    for(j=0;j<(n-1);j++)
    {


        arr[j]=arr[j+1];



    }
    arr[j]=temp;


 }
for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<endl;
	}

}

int main() {
	int n;
	int d;
	cout<<"Enter n "<<endl;
	cin>>n;
	cout<<"Enter d "<<endl;
	cin>>d;

	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	leftrot(arr,n,d);




}
