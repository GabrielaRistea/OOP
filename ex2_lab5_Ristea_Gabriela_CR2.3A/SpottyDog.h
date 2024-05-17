
#include "Dog.h"
using namespace std;

class SpottyDog : public Dog
{
public:
	SpottyDog();
	SpottyDog(string name, double height, double weight, int age, string color, int no_spots);
	~SpottyDog();
	void read_SpottyDog();
	void print_SpottyDog();
private:
	int no_spots;
};