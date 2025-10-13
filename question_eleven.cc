#include <iostream>

int sort(int side_a, int side_b, int side_c)
{
  if (side_a < side_b + side_c && side_a > side_b - side_c)
  {
    return 0;
  }
  
  return 1;
}

int main()
{
  
  for (int i = 0; i < 12; ++i)
  {
    for (int j = 0; j < 12; ++j)
    {
      for (int k = 0; k < 12; ++k)
      {
        if (sort(i, j, k) == 0)
        {
          std::cout<<i<<" + "<<j<<" + "<<k<<"\n";
        } 
        
      }
      
    }
    
  }
  
  return 0;
}
