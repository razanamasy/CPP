#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>
class Array {

    public :
        class BadIndexException : public std::exception {

            public :
                virtual const char* what() const throw()
                {
                        return ("Bad index !");
                }
        };

        Array<T>(void) : _array(NULL), _size(0) {
            std::cout << "Default constructor called" << std::endl;
            this->_array = NULL;
		//    new T[this->_size];
        }

        Array<T>(unsigned int n) : _size(n){
            
            T * newArray = new T[this->_size];
            this->_array = newArray;
        }

        Array<T>(Array<T> const & src) {
            this->_size = 0;
            *this = src;
        }

	~Array<T>() {
		delete [] this->_array;
	}
        unsigned int size() const {

            return (this->_size);
        }

        T * getArray() const {

            return (this->_array);
        }

        Array<T> const & operator=(Array<T> const & rs){

            T * tempArray = new T[rs.size()];
            for (unsigned int i = 0; i < rs.size(); i++)
            {
                tempArray[i] = rs.getArray()[i];
            }
            if (this->_size > 0)
                delete [] this->_array;
            this->_size = rs.size();
            this->_array = tempArray;
            return (*this);
        }

        T & operator[](unsigned int const & index)
        {

            try
            {
                if (this->_size > 0)
                {
                    for (unsigned int i = 0; i < this->_size; i++)
                    {
                        if (index == i)
                        return (this->_array[i]);
                    }
                    throw (Array<T>::BadIndexException());
                }
                else 
                {
                    std::cout << "You are lucky i didnt Segfault ! But the conequence is : youre tab is not empty anymore :)" << std::endl;
                            T * tempArray = new T[2];
                    tempArray[0] = static_cast<T>(1);
                    this->_array = tempArray;
                    this->_size += 1;
                    return (this->_array[0]);
                }
            }
                catch (Array<T>::BadIndexException & e)
            {
                std::cout << e.what() << std::endl;
                    return (this->_array[0]);
            }
        }

    private :
        T * _array;
        unsigned int _size;
};

#endif
