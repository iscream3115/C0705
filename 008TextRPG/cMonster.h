#pragma once
#include <string>

class cMonster
{
private:
	//변수 선언 순서대로 초기화된다.
	std::string			mName;
	int						mLevel;
	int						mMaxHp;
	int						mHp;
	int						mAtk;
	int						mExp;

public:

	cMonster();
	~cMonster();

	//get
	inline std::string			getName() { return mName; }
	inline int					getLevel() { return mLevel; }
	inline int					getMaxHp() { return mMaxHp; }
	inline int					getHp() { return mHp; }
	inline int					getAtk() { return mAtk; }
	inline int					getExp() { return mExp; }

	//set
	void	setName(std::string name) { mName = name; }
	void	setLevel(int Level) { mLevel = Level; }
	void	setMaxHp(int maxHp) { mMaxHp = maxHp; }
	void	setHp(int hp) { mHp = hp; }
	void	setAtk(int atk) { mAtk = atk; }
	void	setExp(int exp) { mExp = exp; }

	void takeDmg(int damage);

};

