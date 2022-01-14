#pragma once

template<typename T>
void swap(T& a, T& b) noexcept
{
	T tmp = std::move(a);
	a = std::move(b);
	b = std::move(tmp);
}

template <typename T>
void printArray(std::vector<T>& arr)
{
	for(auto& a: arr)
	{
		std::cout << a << "  ";
	}
	std::cout << std::endl;
}
