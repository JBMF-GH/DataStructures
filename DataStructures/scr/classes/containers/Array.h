#ifndef ARRAY_H
#define ARRAY_H

#include <initializer_list>

namespace jc
{
	template<typename T, size_t N>
	class Array
	{
	private:
		T m_data[N];

	public:
		// Constructors
		Array();
		Array(const std::initializer_list<T>& list);

		// Element access
		T& at(size_t index);
		const T& at(size_t index) const;
		T& back();
		const T& back() const;
		T& front();
		const T& front() const;
		T& operator[](size_t index);
		const T& operator[](size_t index) const;

		// Iterators
		T* begin();
		const T* begin() const;
		T* end();
		const T* end() const;

		// Capacity
		const bool empty() const;
		size_t size() const;
	};
}

#endif

#include "Array.inl"