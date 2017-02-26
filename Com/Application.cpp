#include "Library.h"

int main()
{
	IHen * hen = CreateHen();
	hen->Cluck();
	
	delete hen;
}