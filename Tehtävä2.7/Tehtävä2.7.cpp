#include <iostream>
using namespace std;

class Solmu
{
public:
	int data;
	Solmu* next;
};

void tulosta_lista(Solmu* alku)
{
	while (alku != nullptr)
	{
		cout << alku->data << "\n";
		alku = alku->next;
	}
}

void lisaa_alkuun(Solmu* alku, int arvo)
{

}

int main()
{
	Solmu* s4 = new Solmu;
	s4->data = 1;
	s4->next = 0;
	Solmu* s3 = new Solmu;
	s3->data = 2;
	s3->next = s4;
	Solmu* s2 = new Solmu;
	s2->data = 10;
	s2->next = s3;
	Solmu* s1 = new Solmu;
	s1->data = 3;
	s1->next = s2;
	Solmu* head = s1;

	tulosta_lista(head);

	return 0;
}
