#ifdef ARRAY_H

#include <cassert>

namespace jc
{
	// Constructors
	template<typename T, size_t N>
	Array<T, N>::Array()
	{
		for (size_t i{ 0 }; i < size(); i++)
			m_data[i] = 0;
	}

	template<typename T, size_t N>
	Array<T, N>::Array(const std::initializer_list<T>& list)
	{
		int count{ 0 };
		for (auto& element : list)
			m_data[count++] = element;
	}

	// Element access
	template<typename T, size_t N>
	T& Array<T, N>::back()
	{
		return m_data[N - 1];
	}

	template<typename T, size_t N>
	const T& Array<T, N>::back() const
	{
		return m_data[N - 1];
	}

	template<typename T, size_t N>
	T& Array<T, N>::front()
	{
		return m_data[0];
	}

	template<typename T, size_t N>
	const T& Array<T, N>::front() const
	{
		return m_data[0];
	}

	template<typename T, size_t N>
	T& Array<T, N>::operator[](size_t index)
	{
		assert(index >= 0 && index < N);
		return m_data[index];
	}

	template<typename T, size_t N>
	const T& Array<T, N>::operator[](size_t index) const
	{
		assert(index >= 0 && index < N);
		return m_data[index];
	}

	// Iterators
	template<typename T, size_t N>
	T* Array<T, N>::begin()
	{
		return m_data;
	}

	template<typename T, size_t N>
	const T* Array<T, N>::begin() const
	{
		return m_data;
	}

	template<typename T, size_t N>
	T* Array<T, N>::end()
	{
		return m_data + N;
	}

	template<typename T, size_t N>
	const T* Array<T, N>::end() const
	{
		return m_data + N;
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