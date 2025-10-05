#include <iostream>
#include <vector>

int main()
{
	std::vector<int> pre_sorted_nums {3, 2, 5, 1, 4}; //Vector that holds pre-sorted numbers
	std::vector<int> post_sorted_nums {};              //Vector that holds sorted numbers
	
	int pre_sorted_nums_max_size = pre_sorted_nums.size();

	for (int j = 0; j < pre_sorted_nums_max_size; ++j) //It correctly prints without this for loop, but doesn't print anything with the for loop
	{
    int smallest_num = pre_sorted_nums[0];
		for (int i = 0; i < pre_sorted_nums.size(); ++i)
		{
			if (pre_sorted_nums[i] < smallest_num)
			{
				smallest_num = pre_sorted_nums[i];
			}
			
		}
		
		for (int i = 0; i < pre_sorted_nums.size(); ++i)
		{
			if (pre_sorted_nums[i] == smallest_num)
			{
				pre_sorted_nums.erase(pre_sorted_nums.begin() + i);
				
			}
		}
		post_sorted_nums.emplace_back(smallest_num);
	}

  for (int i = 0; i < post_sorted_nums.size(); ++i)
  {
    std::cout<<post_sorted_nums[i]<<"\n";
  }

	return 0;
}


