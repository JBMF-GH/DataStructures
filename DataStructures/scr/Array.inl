#ifdef ARRAY_H

#include <iostream>
#include <cassert>

namespace jc
{
	// Constructors
	template<typename T, size_t N>
	Array<T, N>::Array()
	{
		for (size_t i{ 0 }; i < size(); i++)
			data[i] = 0;
	}

	template<typename T, size_t N>
	Array<T, N>::Array(const std::initializer_list<T>& list)
	{
		int count{ 0 };
		for (auto& element : list)
			data[count++] = element;
	}

	// Element access
	template<typename T, size_t N>
	T& Array<T, N>::back()
	{
		return data[N - 1];
	}

	template<typename T, size_t N>
	const T& Array<T, N>::back() const
	{
		return data[N - 1];
	}

	template<typename T, size_t N>
	T& Array<T, N>::front()
	{
		return data[0];
	}

	template<typename T, size_t N>
	const T& Array<T, N>::front() const
	{
		return data[0];
	}

	template<typename T, size_t N>
	T& Array<T, N>::operator[](size_t index)
	{
		assert(index >= 0 && index < N);
		return data[index];
	}

	template<typename T, size_t N>
	const T& Array<T, N>::operator[](size_t index) const
	{
		assert(index >= 0 && index < N);
		return data[index];
	}

	// Iterators
	template<typename T, size_t N>
	T* Array<T, N>::begin()
	{
		return data;
	}

	template<typename T, size_t N>
	const T* Array<T, N>::begin() const
	{
		return data;
	}

	template<typename T, size_t N>
	T* Array<T, N>::end()
	{
		return data + N;
	}

	template<typename T, size_t N>
	const T* Array<T, N>::end() const
	{
		return data + N;
	}

	// Capacity
	template<typename T, size_t N>
	const bool Array<T, N>::empty() const
	{
		if (begin() == end())
			return true;
		return false;
	}

	template<typename T, size_t N>
	size_t Array<T, N>::size() const
	{
		return N;
	}
}

#endif