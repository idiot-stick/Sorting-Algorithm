#include <iostream>
#include <vector>

typedef std::vector<std::vector<char>> grid_t;

void print(grid_t grid)
{
  std::cout<<"   ";
  for (int r = 0; r < grid.size(); ++r)
  {
    std::cout<<"["<<r + 1<<"]"<<" ";
  }
  
  std::cout<<"\n";  //Prints x coordinates
  
  for (int i = 0; i < grid.size(); ++i)
  {
    
    std::cout<<"["<<i + 1<<"]"<<" ";
    
    for (int j = 0; j < grid.size(); ++j)
    {
      std::cout<<grid[i][j]<<"   ";
    }
    std::cout<<"\n\n";  //Prints y coordinates and grid
   
  }
}

int main()
{
  int rows = {3};
  int cols = {3};
  
  grid_t grid(rows, std::vector<char>(cols, '|'));
  
  print(grid);
  
  int x {};
  int y {};
  
  std::cout<<"\nType your x coordinate\n\n";
  std::cin>>x;
  std::cout<<"\nType your y coordinate\n\n";
  std::cin>>y;
  
  grid[x - 1][y - 1] = 'X';
  
  print (grid);
  
  return 0;
}
