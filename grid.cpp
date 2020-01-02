#include<iostream>
#include "grid.h"

using namespace std;

void Grid::put_first()
{
    cout<<"|";
}

void Grid::put_line()
{
    for(int i=0;i<7;i++)
	{
		cout<<"-";
	}
	cout<<endl;
}

void Grid::initialise_grid()
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