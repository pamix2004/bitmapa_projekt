#ifndef ZLOZENIEPRZEKSZTALCEN
#define ZLOZENIEPRZEKSZTALCEN
#include "BitmapaExt.h"
#include "Przeksztalcenie.h"
#include "queue"
//P oznacza typ danego przeksztalcenia np. Erozja

class ZlozeniePrzeksztalcen : public Przeksztalcenie
{

public:
	template<typename P>
	/*
	@brief Funkcja dodaje do kolejki przeksztalcenie
	@param przeksztalceni - wskaünik do template P
	*/
	void dodajPrzeksztalcenie(P* przeksztalcenie);
	virtual void przeksztalc(BitmapaExt& bitmapa) override;
private:
	//Kolejka FIFO - przechowuje dodane przeksztalcenia 
	std::queue<Przeksztalcenie*>dodane_przeksztalcenia;
};

#endif

template<typename P>
inline void ZlozeniePrzeksztalcen::dodajPrzeksztalcenie(P* przeksztalcenie)
{
	dodane_przeksztalcenia.push(przeksztalcenie);
}
