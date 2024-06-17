#include "ZlozeniePrzeksztalcen.h"

void ZlozeniePrzeksztalcen::przeksztalc(BitmapaExt& bitmapa)
{
	Przeksztalcenie* p; //aktualne przekształcenie

	while (!dodane_przeksztalcenia.empty())  //przejdź przez wszystkie dodane dotąd przekształcenia
	{
			p = dodane_przeksztalcenia.front(); //zdejmij przekształcenie z początku kolejki
			dodane_przeksztalcenia.pop();
			p->przeksztalc(bitmapa); //wykonaj to przekształcenie
	}

}
