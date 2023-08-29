#include "House.h"

House::House()
{
	numRooms = 5;
	numWindows = 5;
	width = 3;
	length = 7;
	height = 10;
	paintColor = "Pink";
}

House::~House()
{
}

void House::paintHouse(std::string color)
{
	paintColor = color;
}

void House::remodelHouse(int w, int l, int h)
{
	width = w;
	length = l;
	height = h;
}

void House::addWindows(int num)
{
	numWindows = numWindows + num;
}

std::string House::getPaintColor()
{
	return paintColor;
}
