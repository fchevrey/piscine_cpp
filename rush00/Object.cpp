#include "Object.hpp"
# include "ft_retro.hpp"

Object::Object(void)
{
    int x = GAME_WIDTH - 2;
    int y = rand() % (GAME_HEIGHT - 2) ; 
    this->_pos = Pt(x , y + 1);
    this->_sprite = (int)'D';
    this->_color = OBJECT_COLOR;
    this->_type = OBJECT;
    this->_nbLife = 1;
}

Object::Object(const Object &src)
{
    *this = src;
}

Object::~Object(void)
{
    return ;
}

Object & Object::operator=(const Object &rhs)
{
    this->_pos = rhs._pos;
    this->_sprite = rhs._sprite;
    this->_color = rhs._color;
    this->_type = rhs._type;
    this->_nbLife = rhs._nbLife;
    return *this;
}

void	Object::Update(void){
    this->_pos.x -= 1;
}

int		Object::Collide(AGameEntity *other)
{
	if (!other)
		return 0;
    if (other->getType() == PLAYER)
	{
		((Player*)other)->setScore(20);
		this->takeDamage();
        return -1;
	}
    return 1;
}
