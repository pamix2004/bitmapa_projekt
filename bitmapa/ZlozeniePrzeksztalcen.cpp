#include "ZlozeniePrzeksztalcen.h"

void ZlozeniePrzeksztalcen::przeksztalc(BitmapaExt& bitmapa)
{
	Przeksztalcenie* p;

	while (!dodane_przeksztalcenia.empty()) {
			p = dodane_przeksztalcenia.front();
			dodane_przeksztalcenia.pop();
			p->przeksztalc(bitmapa);
	}

}
