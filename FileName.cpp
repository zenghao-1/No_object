#include <iostream>
using namespace std;

class Myclass
{
public:
	Myclass(){}
};
int main()
{
	int a = 3; int* p = &a;
	cout << *p;
}