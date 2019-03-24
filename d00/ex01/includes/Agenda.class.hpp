tinclude "Contact.class.hpp"
class Agenda
{
public:
	Agenda();
	~Agenda();

	void	 Display();
	void	 Display(int i);
	bool 	Add(void);
	bool 	Add(Contact toadd);
	int	GetLength(void);

private :
	int		_lenght;
	int		_capacity;
	Contact 	_contacts[8];
};

