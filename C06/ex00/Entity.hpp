#ifndef ENTITY_HPP
# define ENTITY_HPP

#include <iostream>
class BadParametre  : public std::exception{
		public :
			virtual const char* what() const throw()
			{
				return ("Bad param exception : enter 1 parametre only");
			}
};

class Entity {

		public :
			Entity(void);
			Entity(std::string unknown);
			Entity(Entity const & src);
			~Entity();
			Entity & operator=(Entity const & rs);

			bool	guessSpecial();
			bool	guessDouble();
			bool	guessFloat();
			bool	guessInt();
			bool	guessChar();
			void	guessAndConvert();

			float	getStore() const;
			float	getFloat() const;
			int	getInt() const;
			char	getChar() const;
			double	getDouble() const;
			std::string	getCharNumber() const;
		private :
			void	convertSpecial();
			void	convertAndDisplay();
			double	_store;
			float _f;
			int _i;
			char _c;
			double _d;
			std::string _nb;
};


#endif
