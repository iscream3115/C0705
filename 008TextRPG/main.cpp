#include "pch.h"
#include "cPlayer.h"
#include "cMonster.h"

#include <iostream>

using namespace std;

int main()
{
	cPlayer p;
	cMonster* m = new cMonster();


	while (true)
	{
		system("cls");
		cout << "이름 :" << p.getName() << endl;
		cout << "레벨 :" << p.getLevel() << endl;
		cout << "체력 :" << p.getHp() << " / " << p.getMaxHp() << endl;
		cout << "공격력 :" << p.getAtk() << endl;
		cout << "소울 :" << p.getExp() << endl;

		cout << "----------------------" << endl;

		//포인터로 접근할 땐 -> 사용 
		cout << "몬스터 이름 :" << m->getName() << endl;
		cout << "체력 :" << m->getHp() <<" / " << m->getMaxHp() << endl;
		cout << "보상 경험치 :" << m->getExp() << endl;

		cout << "----------------------" << endl;

		cout << "1. 공격 2. 방어 3. 종료" << endl;
		int select;
		cin >> select;


		if (select == 1)
		{
			int dmg = p.getAtk();
			m->takeDmg(dmg);
		}
		else if (select == 2) p.takeDmg(m->getAtk());
		else if (select == 3) break;
		
		cout << "----------------------" << endl;

		cout << "체력 :" << p.getHp() << " / " << p.getMaxHp() << endl;
		cout << "몬스터 체력 :" << m->getHp() << " / " << m->getMaxHp() << endl;
	}
	
	return 0;
}
