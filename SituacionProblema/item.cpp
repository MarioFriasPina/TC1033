#include "item.h"

double Item::getPrice()
{
	return pPrice;
}

std::string Item::getName()
{
	return pName;
}

Monitor::Monitor()
{
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pWidth = 0;
	pHeight = 0;
	pXResolution = 0;
	pYResolution = 0;
}

Monitor::Monitor(double price, std::string name, std::string brand, int width, int height, int xres, int yres)
{
	pPrice = price;
	pName = name;
	pBrand = brand;
	pWidth = width;
	pHeight = height;
	pXResolution = xres;
	pYResolution = yres;
}

int	Monitor::getWidth()
{
	return pWidth;
}

int	Monitor::getHeight()
{
	return pHeight;
}

int Monitor::getXResolution()
{
	return pXResolution;
}

int Monitor::getYResolution()
{
	return pYResolution;
}

CPU::CPU()
{
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pClockSpeed = 0;
	pCores = 0;
	pThreads = 0;
}

CPU::CPU(double price, std::string name, std::string brand, float speed, int cores, int threads)
{
	pPrice = price;
	pName = name;
	pBrand = brand;
	pClockSpeed = speed;
	pCores = cores;
	pThreads = threads;
}

float CPU::getClockSpeed()
{
	return pClockSpeed;
}

int CPU::getCores()
{
	return pCores;
}

int CPU::getThreads()
{
	return pThreads;
}

int main()
{
	Monitor lg(2399.99, "LG G1 65", "LG", 56, 32, 3840, 2160);
	Monitor none;

	std::cout << lg.getName() << "\t" << lg.getPrice() << std::endl;
	std::cout << none.getName() << "\t" << none.getPrice() << std::endl;

	return 0;
}