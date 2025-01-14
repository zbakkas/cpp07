#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *array;
		unsigned int n;
	public:
		Array(void)
		{
			this->array = new T();
		}
		Array(unsigned int n)
		{
			this->array = new T[n]();
			this->n = n;
		}
		~Array()
		{
			delete[] this->array;
		}

		Array(const Array &copy)
		{
			this->n = copy.n;
			this->array = new T[copy.n];
			unsigned int i = 0;
			while (i < this->n)
			{
				this->array[i] = copy.array[i];
				++i;
			}
		}

		Array & operator = (const Array &object)
		{
			this->n = object.n;
			this->array = new T[object.n];
			unsigned int i = 0;
			while (i < object.n)
			{
				this->array[i] = object.array[i];
				++i;
			}
			return (*this);
		}

		class IndexOutOfRange: public std::exception
		{
			public:
				const char *what() const throw()
				{
					return "Index Out Of Range";
				}
		};

		T & operator[](unsigned int index) const
		{
			if (index >= this->n)
				throw Array::IndexOutOfRange();
			return (this->array[index]);
		}
		
		T & operator[](unsigned int index) 
		{
			if (index >= this->n)
				throw Array::IndexOutOfRange();
			return (this->array[index]);
		}


		unsigned int	size(void) const
		{
			return (this->n);
		}
		
};

#endif