#ifndef VECTOR_H
#define VECTOR_H

#include <initializer_list>

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
		Vector(const std::initializer_list<T>& list);
		Vector(const Vector& copy);
		~Vector();

		Vector& operator=(const Vector& other);
		void assign(size_t count, const T& value);

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
		bool empty() const;
		const size_t size() const;

		// Modifiers

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