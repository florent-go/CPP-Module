#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*array;
	public:
		Array<T>(void)
		{
			std::cout << "Default constructor Array" << std::endl;
			this->_size = 0;
			this->array = NULL;
		}
		Array(unsigned int n)
		{
			std::cout << "Parametrique constructor Array" << std::endl;
			this->_size = n;
			this->array = new T[n]();
		}
		Array(Array<T> &a)
		{
			std::cout << "Copy constructor Array" << std::endl;
			*this = a;
		}
		Array<T> & operator=(Array<T> &a)
		{
			this->_size = a._size;
			this->array = new T[_size];
			for (int i = 0; i < (int)_size; i++)
				this->array[i] = a.array[i];
			return (*this);
		}
		class OLE	: public std::exception
		{
			virtual const char* what() const throw( )
			{
				return ("Exception: Out of the Limits");
			}
		};
		T&			operator[]( int i )
		{
			if (i >= 0 && i < (int)_size )
				return (array[i]);
			throw OLE();
		}
};

#endif