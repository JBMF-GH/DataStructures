#ifndef VECTOR_H
#define VECTOR_H

namespace jc
{
	template<typename T>
	class Vector
	{
	private:
		size_t m_size;
		T* m_data;

	public:
		Vector();
		Vector(size_t count);
		Vector(const Vector& copy);
		~Vector();

		Vector& operator=(const Vector& other);

		// Element access
		T& operator[](size_t index);
		const T& operator[](size_t index) const;

		// Iterators
		T* begin();
		const T* begin() const;
		T* end();
		const T* end() const;
		
		// Capacity
		const size_t size() const;

		// Non-member functions
		template<typename T>
		friend bool operator==(const Vector<T>& left, const Vector<T>& right);
		template<typename T>
		friend bool operator!=(const Vector<T>& left, const Vector<T>& right);
		template<typename T>
		friend bool operator<(const Vector<T>& left, const Vector<T>& right);
		template<typename T>
		friend bool operator<=(const Vector<T>& left, const Vector<T>& right);
		template<typename T>
		friend bool operator>(const Vector<T>& left, const Vector<T>& right);
		template<typename T>
		friend bool operator>=(const Vector<T>& left, const Vector<T>& right);
	};
}

#endif

#include "Vector.inl"