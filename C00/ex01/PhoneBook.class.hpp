#ifndef PHONEBOOK_CLASS_H	
# define PHONEBOOK_CLASS_H	

class	PhoneBook {

public :

		PhoneBook(void);
		~PhoneBook(void);
		void	add(void);
		void	search(void) const;

private :
		int	_nbContact;
		int	_indexContact;
		Contact _contact[8];
};

#endif
