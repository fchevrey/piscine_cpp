#include "Contact.class.hpp"
class Agenda
{
public:
	Agenda();
	~Agenda();

	void Display();
	bool Add(Contact toadd);

private :
	int		_lenght;
	int		_capacity;
	Contact _contacts[8];
};

