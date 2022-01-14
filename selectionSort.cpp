#include <iostream>
#include <vector>
#include "utility.h"

template <typename V>
void selectionSort(std::vector<V>& vec)
{
	for(auto it = vec.begin(); it != vec.end(); ++it)
	{
		auto min = it; 
		for(auto it2 = std::next(it); it2 != vec.end(); ++it2)
		{
			if(*min > *it2) { min = it2; }
		}
		swap(*min, *it);
	}
}

int main()
{
	
	std::vector<int> A{ 12, 321, 4, 13, 17, -1, 700, 91 };
	selectionSort(A);
	printArray(A);

	return 0;
}
