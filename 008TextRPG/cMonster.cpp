#include "pch.h"
#include "cMonster.h"

cMonster::cMonster() 
	: mName("ÇØ°ñ º´»ç"), mLevel(3), mMaxHp(70), mHp(mMaxHp), mAtk(200), mExp(200)
{
}

cMonster::~cMonster()
{
}

void cMonster::takeDmg(int damage)
{
	mHp -= damage;

}
