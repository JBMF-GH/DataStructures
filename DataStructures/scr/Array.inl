#ifdef ARRAY_H

#include <cassert>

namespace jc
{
	template<typename T, size_t N>
	Array<T, N>::Array()
	{
		for (size_t i{ 0 }; i < N; i++)
			data[i] = 0;
	}

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
	size_t Array<T, N>::length() const
	{
		return N;
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
}

#endif