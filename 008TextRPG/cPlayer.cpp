#include "pch.h"
#include "cPlayer.h"

cPlayer::cPlayer()
{
	mName = "���ù��� �һ���";
	mLevel = 1;
	mMaxHp = 500;
	mHp = mMaxHp;
	mAtk = 120;
	mExp = 0;
}

cPlayer::~cPlayer()
{

}

void cPlayer::IncreaseExp(int exp)
{


}

void cPlayer::takeDmg(int damage)
{
	mHp -= damage;

}
