#ifndef HOUSE_H
#define HOUSE_H

#include <string>

class House
{
public:
	House();
	~House();

	void paintHouse(std::string color);
	void remodelHouse(int w, int l, int h);
	void addWindows(int num);

	std::string getPaintColor();

private:
	int numRooms;
	int numWindows;
	int width;
	int length;
	int height;
	std::string paintColor;
};

#endif // !HOUSE_H

