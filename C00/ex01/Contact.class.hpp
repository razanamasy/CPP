#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class	Contact {

public :

	Contact(void);
	~Contact(void);

	void	getPreview(void) const;
	void	getInfo() const;
	void	setContact(void);
	void	displayField(int index) const;

private :

	std::string _info[5];
};

#endif
