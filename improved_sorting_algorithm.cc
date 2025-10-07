#include <iostream>
#include <vector>

int main()
{
  std::vector<int> nums {3, 2, 5, 1, 4};
  for (int i = 0; i < nums.size() - 1; ++i)
  {
    for (int j = i + 1; j < nums.size(); ++j)
    {
      if (nums[j] < nums[i])
      {
        std::swap(nums[j], nums[i]);
      }
      
    }
    
  }
  
  for (int i = 0; i < nums.size(); ++i)
  {
    std::cout<<nums[i];
  }

  return 0;
}
