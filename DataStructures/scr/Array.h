#ifndef ARRAY_H
#define ARRAY_H

#include <initializer_list>

namespace jc
{
	template<typename T, size_t N>
	class Array
	{
	private:
		T data[N];
	public:
		Array();
		Array(const std::initializer_list<T>& list);

		T* begin();
		const T* begin() const;
		T* end();
		const T* end() const;

		T& back();
		const T& back() const;
		T& front();
		const T& front() const;

		size_t length() const;

		T& operator[](size_t index);
		const T& operator[](size_t index) const;
	};
}

#endif

#include "Array.inl"