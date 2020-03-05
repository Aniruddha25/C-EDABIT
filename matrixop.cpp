//============================================================================
// Name        : matrixop.cpp
// Author      : Aniruddha
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
class matrix{
   private:
	 int arr[2][2];

  public:
	  matrix(){
		  int i;
		  int j;
		  for(i=0;i<2;i++)
		  {
			  for(j=0;j<2;j++)
			  {

			   this->arr[i][j]=i+j;
			  }
		  }

	  }
	 matrix(int a,int b,int c,int d)
	 {
		 this->arr[0][0]=a;
		 this->arr[0][1]=b;
		 this->arr[1][0]=c;
		 this->arr[1][1]=d;

	 }
	 void add(int arr1[][2],int arr2[][2])
	 {
		 int sum[2][2];
		 int i;
		 int j;
		 for(i=0;i<2;i++)
		 		  {
		 			  for(j=0;j<2;j++)
		 			  {

		 			   sum[i][j]=arr1[i][j]+arr2[i][j];
		 			  }
		 		  }
		 for(i=0;i<2;i++)
		 		  {
		 			  for(j=0;j<2;j++)
		 			  {
		 				  cout<<sum[i][j]<<'\t';


		 			  }
		 			  cout<<endl;
		       }


	 }
	 void sub(int arr1[][2],int arr2[][2])
	 	 {
	 		 int diff[2][2];
	 		 int i;
	 		 int j;
	 		 for(i=0;i<2;i++)
	 		 		  {
	 		 			  for(j=0;j<2;j++)
	 		 			  {

	 		 			   diff[i][j]=arr1[i][j]-arr2[i][j];
	 		 			  }
	 		 		  }
	 		 for(i=0;i<2;i++)
	 		 		  {
	 		 			  for(j=0;j<2;j++)
	 		 			  {
	 		 				  cout<<diff[i][j]<<'\t';


	 		 			  }
	 		 			  cout<<endl;
	 		       }


	 	 }
	 void transpose(int arr[][2])
	 {
		 int trans[2][2];
	     int i;
	     int j;
		 for(i=0;i<2;i++)
		{
		 	 	for(j=0;j<2;j++)
		 	 {
                  trans[i][j]=arr[j][i];

		 	 }
	     }
		 for(i=0;i<2;i++)
		 		{
		 		 	 	for(j=0;j<2;j++)
		 		 	 {
		                   cout<<trans[i][j]<<'\t';

		 		 	 }
		 		 	 	cout<<endl;
		 	     }




	 }
	void multi(int arr1[][2],int arr2[][2])
	{
		int i,j,k;
		int prod[2][2];
		 for(i=0;i<2;i++)
				{
				 	 	for(j=0;j<2;j++)
				 	 {
		                  prod[i][j]=0;
		                  for(k=0;k<2;k++)
		                  {
		                	  prod[i][j] += arr1[i][k] * arr2[k][j];
		                  }

				 	 }
			     }
		 for(i=0;i<2;i++)
		 		 		{
		 		 		 	 	for(j=0;j<2;j++)
		 		 		 	 {
		 		                   cout<<prod[i][j]<<'\t';

		 		 		 	 }
		 		 		 	 	cout<<endl;
		 		 	     }



	}
	void add1(int **arr1,int **arr2)
		 {
			 int sum[2][2];
			 int i;
			 int j;
			 for(i=0;i<2;i++)
			 		  {
			 			  for(j=0;j<2;j++)
			 			  {

			 			   sum[i][j]=arr1[i][j]+arr2[i][j];
			 			  }
			 		  }
			 for(i=0;i<2;i++)
			 		  {
			 			  for(j=0;j<2;j++)
			 			  {
			 				  cout<<sum[i][j]<<'\t';


			 			  }
			 			  cout<<endl;
			       }


		 }






};

int main() {
	int a1[2][2];
	int a2[2][2];
	a1[0][0]=3;
	a1[0][1]=4;
	a1[1][0]=5;
	a1[1][1]=6;
	a2[0][0]=2;
	a2[0][1]=4;
	a2[1][0]=3;
	a2[1][1]=1;
	int i;


	int** k2 = new int*[2];
	for(int i = 0; i < 2; ++i)
		k2[i] = new int[2];

	int** k1 = new int*[2];
		for(int i = 0; i < 2; ++i)
			k1[i] = new int[2];





	matrix m1;
	cout<<"Matrix addition is :"<<endl;
	m1.add(a1,a2);
	cout<<"Matrix subtraction is : "<<endl;
	m1.sub(a1,a2);
	cout<<"Transpose for a1 matrix is : "<<endl;
	m1.transpose(a1);
	cout<<"Multiplication : "<<endl;
	m1.multi(a1,a2);

	cout<<"dynamic"<<endl;
	m1.add1(k1,k2);












}
