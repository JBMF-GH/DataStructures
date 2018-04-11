#ifndef ARRAY_H
#define ARRAY_H

namespace jc
{
	template<typename T, size_t N>
	class Array
	{
	private:
		T data[N];
	public:
		Array();
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