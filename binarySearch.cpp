#include <iostream>
#include <vector>
#include "utility.h"


/* THIS ALGORITHM WORST CASE IS O(log2(N)) when n = 2^k */
template <typename T>
int binarySearch(std::vector<T>& arr, int start, int end, const T& key) noexcept
{
	if(start > end) return -1; 
	int middle = (start + end) / 2;

	if(arr[middle] == key) return middle;
	else if(arr[middle] > key) end = middle - 1;
	else start = middle + 1;

	return binarySearch(arr, start, end, key);
}
/* BINARY SEARCH FOR C-STYLE ARRAYS */
template <typename T>
int binarySearch(T * A, int start, int end, const T& key)
{
	if(start > end) return -1;
	int middle = (start + end) / 2;

	if(A[middle] == key) return middle;
	else if(A[middle] > key) end = middle - 1;
	else start = middle + 1;

	return binarySearch(A, start, end, key);
}
// testing functions
int main()
{
	const int findNum = 13;
	std::vector<int> A{ -4, -1, 3, 13, 17, 43, 70, 91 };
	std::cout << "index of " << findNum << " is " << binarySearch(A, 0, 7, findNum) << std::endl;
	
	int arr[9] = {-12, -4, 6, 7, 8, 9, 13, 32, 80 };
	std::cout << "index of " << findNum << " is " << binarySearch(arr, 0, 8, findNum) << std::endl;
	


	return 0;
}
