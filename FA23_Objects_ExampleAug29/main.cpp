#include "House.h"
#include <iostream>

int main()
{
	House doubleTall;

	std::cout << doubleTall.getPaintColor();
	doubleTall.paintHouse("green");
	std::cout << doubleTall.getPaintColor();
}