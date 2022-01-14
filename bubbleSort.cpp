#include <iostream>
#include <vector>
#include "utility.h"

template <typename T>
void bubbleSort(T * arr, int size)
{
	for(int i = 0; i < size; ++i)
	{
		bool isSorted = false;
		for(int j = 0; j < size - i - 1; ++j)
		{
			if(arr[j] > arr[j + 1])
			{
				isSorted = true;
				swap(arr[j], arr[j + 1]);
			}
		}
		if(!isSorted) { break; }
	}
}

template <typename V>
void bubbleSort(std::vector<V>& vec)
{
	for(auto it  = vec.begin(); it != vec.end(); ++it)
	{
		bool isSorted = false;
		for(auto b = vec.begin(); b != vec.end(); ++b)
		{
			if( *b > *std::next(b))
			{
				isSorted = true;
				swap(*b, *std::next(b));
			}
		}
		if(!isSorted) { break; }
	}
}



int main()
{

	const int size = 9;
	int arr[size] =  {4, 3, 77, 34, -1, 34, 76, 99, 3};
	bubbleSort(arr, size);
	
	std::vector<int> vec {4, 22, 7, 2314, 3, 31, 90, -2 };
	
	bubbleSort(vec);
	printArray(vec);

	for(int& i : arr) 
	{	
		std::cout << i << " ";
	}
	std::cout << std::endl;


	return 0;
}
