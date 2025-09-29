#include <iostream>
#include <vector>

int main()
{
	std::vector<int> foo {3, 2, 5, 1, 4}; //Vector that holds pre-sorted numbers
	std::vector<int> goo {};              //Vector that holds sorted numbers
	
	int smallest_num = {foo[0]};
	int foo_max_size = foo.size();

	for (double j; j < foo_max_size; ++j) //It correctly prints without this for loop, but doesn't print anything with the for loop
	{
		for (double i; i < foo.size(); ++i)
		{
			if (foo[i] < smallest_num)
			{
				smallest_num = foo[i];
			}
			
		}
		
		for (double i; i < foo.size(); ++i)
		{
			if (foo[i] == smallest_num)
			{
				foo.erase(foo.begin() + i);
				
			}
		}
		goo.emplace_back(smallest_num);
	}

  for (double i; i < goo.size(); ++i)
  {
    std::cout<<goo[i]<<"\n";
  }

	return 0;
}


