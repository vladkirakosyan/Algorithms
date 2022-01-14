#include <iostream>
#include <vector>
#include "utility.h"

std::vector<int>::iterator partition(std::vector<int>::iterator st, std::vector<int>::iterator end)
{
	int& piv = *st;
	auto i = st;
	auto j = end;
	
	while (i < j)
	{
		while (*i <= piv) {++i;}
		while (*j > piv) {--j;}
		if (i < j) { swap(*i, *j);}
	}
	swap(*j, piv);
	return j;
}

void QuickSort(std::vector<int>::iterator start, std::vector<int>::iterator end)
{
	if (start < end)
	{
		auto it = partition(start, end);
		QuickSort(start, std::prev(it) );
		QuickSort(std::next(it) , end);
	}	
}

int main()
{
	std::cout << "A" << std::endl;
	std::vector<int> vec = {1, 7, 8, 4, 9, 14};
	
	QuickSort(vec.begin(), vec.end() - 1);

	for(const auto& a : vec)
		std::cout << a << "  ";

	return 0;
}
