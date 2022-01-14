#include <iostream>
#include <vector>
#include "utility.h"

template <typename V>
void insertionSort(std::vector<V>& vec)
{
	for(auto it = vec.begin() + 1; it != vec.end(); ++it)
	{
		auto it2 = it - 1;
		V key = *it;
		while(it2 >= vec.begin() && key < *it2)
		{
			*it2 = *(it2 - 1);
			--it2;
		}
		*(it2 + 1) = key;
	}
}
template <typename T>
void insertionSort(T * A, int size)
{
	for(int i = 1; i < size; ++i)
	{
		int j = i - 1;
		T key = A[i];
		while(j >= 0 && A[j] > key)
		{
			A[j + 1] = A[j];
			--j;
		}
		A[j + 1] = key;
	}
}


int main()
{	
	
	const int size = 9;

	int arr[size] =  {4, 3, 77, 34, -1, 34, 76, 99, 3};
	insertionSort(arr, size);
	
	for(int & i : arr)
	{
		std::cout << i << " ";
	}	
	std::cout << std::endl;

	std::vector<int> vec {4, 22, 7, 2314, 3, 31, 90, -2 };
	insertionSort(vec);
	printArray(vec);

	return 0;
}
