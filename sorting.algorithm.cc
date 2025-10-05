#include <iostream>
#include <vector>

int main()
{
	std::vector<int> pre_sort_nums {3, 2, 5, 1, 4};  //Vector that holds pre-sorted numbers
	std::vector<int> post_sort_nums {};              //Vector that holds sorted numbers
	
	int pre_sort_nums_max_size = pre_sort_nums.size();

	for (int j = 0; j < pre_sort_nums_max_size; ++j)
	{
		int smallest_num = pre_sort_nums[0];
		for (int i = 0; i < pre_sort_nums.size(); ++i)
		{
			if (pre_sort_nums[i] < smallest_num)
			{
				smallest_num = pre_sort_nums[i];
			}
			
		}
		
		for (int i = 0; i < pre_sort_nums.size(); ++i)
		{
			if (pre_sort_nums[i] == smallest_num)
			{
				pre_sort_nums.erase(pre_sort_nums.begin() + i);
				
			}
		}
		post_sort_nums.emplace_back(smallest_num);
  	}

  for (int i = 0; i < post_sort_nums.size(); ++i)
  {
    	std::cout<<post_sort_nums[i]<<"\n";
  }

	return 0;
}


