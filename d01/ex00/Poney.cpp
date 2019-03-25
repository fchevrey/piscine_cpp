#include "Poney.hpp"

Poney::Poney(void)
{
	this
}
Poney::Poney(int size, bool shodded, std::string color);
Poney::~Poney(void);

void			Poney::Gambol(void);
void			Poney::Jump(void);
std::string		Poney::GetColor(void);
void			Poney::SetColor(std::string);
bool			Poney::IsShodded(void);
void			Poney::SetShodded(bool value);
