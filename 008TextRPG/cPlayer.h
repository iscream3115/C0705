#pragma once
#include <string>

//using namespace std는 헤더에서 사용하지 않는 게 좋다.

class cPlayer
{
private:
	std::string			mName;
	int						mLevel;
	int						mMaxHp;
	int						mHp;
	int						mAtk;
	int						mExp;

public:
	//객체지향에선 이런식으로 바로 접근할 수있다.
	//인라인 함수임을 명확하게 하기 위해 인라인을 앞에 붙여준다.

	cPlayer();
	~cPlayer();

	//get
	inline std::string			getName(){ return mName; }
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

	void IncreaseExp(int exp);
	void takeDmg(int damage);

};

