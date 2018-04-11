#ifdef VECTOR_H

#include <cassert>

namespace jc
{
	template<typename T>
	Vector<T>::Vector()
		: m_size{ 0 }
	{
	}

	template<typename T>
	Vector<T>::Vector(size_t count)
		: m_size{ count }
	{
		m_data = new T[size()]{0};
	}

	template<typename T>
	Vector<T>::Vector(const Vector& copy)
	{
		if (size() != copy.size())
		{
			m_size = copy.size();
			delete[] m_data;
			m_data = new T[size()];
		}
		
		for (size_t i{ 0 }; i < size(); i++)
			m_data[i] = copy[i];
	}

	template<typename T>
	Vector<T>::~Vector()
	{
		delete[] m_data;
	}

	template<typename T>
	Vector<T>& jc::Vector<T>::operator=(const Vector& other)
	{
		assert(this != &other);
		if (size() != other.size())
		{
			m_size = other.size();
			delete[] m_data;
			m_data = new T[size()];
		}

		for (size_t i{ 0 }; i < size(); i++)
			m_data[i] = other[i];

		return *this;
	}

	// Element access
	template<typename T>
	T& Vector<T>::operator[](size_t index)
	{
		assert(index >= 0 && index < size());
		return m_data[index];
	}

	template<typename T>
	const T& Vector<T>::operator[](size_t index) const
	{
		assert(index >= 0 && index < size());
		return m_data[index];
	}

	// Iterators
	template<typename T>
	T* Vector<T>::begin()
	{
		return m_data;
	}

	template<typename T>
	const T* Vector<T>::begin() const
	{
		return m_data;
	}

	template<typename T>
	T* Vector<T>::end()
	{
		return m_data + size();
	}

	template<typename T>
	const T* Vector<T>::end() const
	{
		return m_data + size();
	}

	// Capacity
	template<typename T>
	const size_t Vector<T>::size() const
	{
		return m_size;
	}

	// Non-member functions
	template<typename T>
	bool operator==(const Vector<T>& left, const Vector<T>& right)
	{
		if (left.size() != right.size())
			return false;
		for (size_t i{ 0 }; i < left.size(); i++)
			if (left[i] != right[i])
				return false;
		return true;
	}

	template<typename T>
	bool operator!=(const Vector<T>& left, const Vector<T>& right)
	{
		return !(left == right);
	}

	template<typename T>
	bool operator<(const Vector<T>& left, const Vector<T>& right)
	{
		size_t size{ left.size() };
		if (size < right.size())
			size = right.size();

		for (size_t i{ 0 }; i < size; i++)
		{
			if (left.size() < i + 1 && right.size() > i)
				return true;
			else if (left.size() > i && right.size() < i + 1)
				return false;

			if (left[i] < right[i])
				return true;
		}
		return false;
	}

	template<typename T>
	bool operator<=(const Vector<T>& left, const Vector<T>& right)
	{
		size_t size{ left.size() };
		if (size < right.size())
			size = right.size();

		for (size_t i{ 0 }; i < size; i++)
		{
			if (left.size() < i + 1 && right.size() > i)
				return true;
			else if (left.size() > i && right.size() < i + 1)
				return false;

			if (left[i] <= right[i])
				return true;
		}
		return false;
	}

	template<typename T>
	bool operator>(const Vector<T>& left, const Vector<T>& right)
	{
		size_t size{ left.size() };
		if (size < right.size())
			size = right.size();

		for (size_t i{ 0 }; i < size; i++)
		{
			if (left.size() < i + 1 && right.size() > i)
				return false;
			else if (left.size() > i && right.size() < i + 1)
				return true;

			if (left[i] > right[i])
				return true;
		}
		return false;
	}

	template<typename T>
	bool operator>=(const Vector<T>& left, const Vector<T>& right)
	{
		size_t size{ left.size() };
		if (size < right.size())
			size = right.size();

		for (size_t i{ 0 }; i < size; i++)
		{
			if (left.size() < i + 1 && right.size() > i)
				return false;
			else if (left.size() > i && right.size() < i + 1)
				return true;

			if (left[i] >= right[i])
				return true;
		}
		return false;
	}
}

#endif