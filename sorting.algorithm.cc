#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	std::vector<int> pre_sort_nums {3, 2, 5, 1, 4};
	std::vector<int> post_sort_nums {};            
	
	int pre_sort_nums_max_size = pre_sort_nums.size();
	int smallest_num {};

	for (int j = 0; j < pre_sort_nums_max_size; ++j)
	{
		smallest_num = pre_sort_nums[0];
		for (int i = 0; i < pre_sort_nums.size(); ++i)
		{
			if (pre_sort_nums[i] < smallest_num)
			{
				smallest_num = pre_sort_nums[i];
			}
			
		}
		
		pre_sort_nums.erase(std::remove(pre_sort_nums.begin(), pre_sort_nums.end(), smallest_num), pre_sort_nums.end());
		
		post_sort_nums.emplace_back(smallest_num);
  }

  for (int i = 0; i < post_sort_nums.size(); ++i)
  {
    std::cout<<post_sort_nums[i]<<"\n";
  }

	return 0;
}
