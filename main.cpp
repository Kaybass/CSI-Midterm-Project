#include "Header.h"

using namespace std;

int main(int argc, char **argv)
{
	int cont;

	printAccuracy();

	do
	{
		cont = timeAlgorithm("input1.txt");

	} while(cont == 0);

	return 0;
}