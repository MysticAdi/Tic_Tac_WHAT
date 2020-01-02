//The original version to check for overflow complications of size greater than 3 and player switches.

#include<iostream>
#include<string>
using namespace std;
#define size 3
void put_line()
{
	for(int i=0;i<7;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}
void put_first()
{
	cout<<"|";
}
void initialise_grid()
{
	char grid[size][size];
	int num=49;
	for(int i=0;i<size;i++)
	{	

		put_line();
		put_first();
		for(int j=0;j<size;j++)
		{	
			char number = (char)num;
			grid[i][j]=number;
			cout<<grid[i][j]<<"|";
			num++;
		}
		cout<<endl;
	}
	put_line();
}

int main()
{
	initialise_grid();
}