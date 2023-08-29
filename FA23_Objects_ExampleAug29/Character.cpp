#include "Character.h"

Character::Character()
{
	setHp(10);
}

Character::Character(int hp)
{
	setHp(hp);
}

Character::~Character()
{
}

void Character::heal(int hp)
{
	setHp(getHp() + hp);
}

void Character::damage(int hp)
{
	setHp(getHp() - hp);
}

int Character::getHp() const
{
	return m_hp;
}

void Character::setHp(int hp)
{
	m_hp = hp;
}

