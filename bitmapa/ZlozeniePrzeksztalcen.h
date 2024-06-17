#ifndef ZLOZENIEPRZEKSZTALCEN
#define ZLOZENIEPRZEKSZTALCEN
#include "BitmapaExt.h"
#include "Przeksztalcenie.h"
#include "queue"
//P oznacza typ danego przeksztalcenia np. Erozja

/*
Klasa umożliwiająca realizację wielu zakolejkowanych przekształceń
*/
class ZlozeniePrzeksztalcen : public Przeksztalcenie
{

public:
	template<typename P>
	/*
	@brief Funkcja dodaje do kolejki przeksztalcenie
	@param przeksztalcenie - wskaźnik do template P
	*/
	void dodajPrzeksztalcenie(P* przeksztalcenie);
	/*
	Metoda realizuje wszystkie dodane dotą przekształcenia. Przekształcenia są usuwane po wykonaniu. Dla pustej kolejki przekształceń, realizuje filtr identycznościowy
	@param bitmapa bitmapa na rzecz której wykonywane są przekształcenia
	*/
	virtual void przeksztalc(BitmapaExt& bitmapa) override;
private:
	//Kolejka FIFO - przechowuje dodane przeksztalcenia 
	std::queue<Przeksztalcenie*>dodane_przeksztalcenia;
};

template<typename P> //szablon realizowany w pliku .h z powodu ograniczeń szablonów
inline void ZlozeniePrzeksztalcen::dodajPrzeksztalcenie(P* przeksztalcenie) //metoda inline ze względu na jej prostotę
{
	dodane_przeksztalcenia.push(przeksztalcenie);
}
#endif

