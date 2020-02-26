#include<iostream>
using namespace std;
void strtok(char arr[])
{
	int i=0;
		while(arr[i]!='\0')
	{
		if(arr[i]==',')
		{
		
		  i++;
		  cout<<endl;
		  
	    }
		cout<<arr[i];
		i++;
	
}
}
int main()
{

	char arr[50]="Sunbeam,pune,123";
	strtok(arr);

		
	
	
	
}
