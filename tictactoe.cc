#include <iostream>
#include <vector>


typedef std::vector<std::vector<char>> grid_t;
//2d vector is in this format: vector[y][x]


bool evaluate(grid_t grid, int &x1, int &x2, int &x3, int &y1, int &y2, int &y3, int &d1, int &d2)
{
	x1 = 0;
	x2 = 0;
	x3 = 0;
	y1 = 0;
	y2 = 0;
	y3 = 0;
	d1 = 0;
	d2 = 0;

	for (int i = 0; i < 3; ++i)
	{
		if (grid[0][i] == 'X')
		{
			++x1;
		}
    
		if (grid[1][i] == 'X')
		{
			++x2;
		}
    
		if (grid[2][i] == 'X')
		{
			++x3;
		}
    
		if (grid[i][i] == 'X')
		{
			++d1;
		}
    
		if (grid[2 - i][i] == 'X')
		{
			++d2;
		}
    
		if (grid[i][0] == 'X')
		{
			++y1;
		}
    
		if (grid[i][1] == 'X')
		{
			++y2;
		}
    
		if (grid[i][2] == 'X')
		{
			++y3;
		}
	}

	if (x1 == 3 || x2 == 3 || x3 == 3 || y1 == 3 || y2 == 3 || y3 == 3 || d1 == 3 || d2 == 3)
	{
		return true;
	} else
	{
	  return false;
	}
	
	return false;
}

void print(grid_t grid)
{
	std::cout<<"   ";
  
	for (int k = 0; k < grid.size(); ++k)
	{
		std::cout<<"["<<k + 1<<"]"<<" ";
	}

	std::cout<<"\n";                                  //Prints x coordinates

	for (int i = 0; i < grid.size(); ++i)
	{
		std::cout<<"["<<i + 1<<"]"<<" ";
    
		for (int j = 0; j < grid.size(); ++j)
		{
			std::cout<<grid[i][j]<<"   ";
		}
    
		std::cout<<"\n\n";                             //Prints y coordinates and grid
	}
}

int main()
{
	int rows = {3};
	int cols = {3};

	int x1 = {0};
	int x2 = {0};
	int x3 = {0};
	int y1 = {0};
	int y2 = {0};
	int y3 = {0};
	int d1 = {0};
	int d2 = {0};

	int x {};
	int y {};

	bool win = false;

	grid_t grid(rows, std::vector<char>(cols, '|'));

	print(grid);

	do
	{
		std::cout<<"\nType your x coordinate\n\n";
		std::cin>>x;
		std::cout<<"\nType your y coordinate\n\n";
		std::cin>>y;
    
		grid[y - 1][x - 1] = 'X';
    
		print(grid);
    
		win = evaluate(grid, x1, x2, x3, y1, y2, y3, d1, d2);
    
	} while (win != true);

	return 0;
}
