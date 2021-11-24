#pragma once
#include <string.h>
#include <iostream>

class Item
{
protected:
	double		pPrice;
	std::string	pName;
	std::string pBrand;

public:
	double		getPrice();
	std::string	getName();

};

class Monitor : public Item
{
private:
	int		pWidth;
	int		pHeight;
	int		pXResolution;
	int		pYResolution;

public:
	Monitor();
	Monitor(double price, std::string name, std::string brand, int width, int height, int xres, int yres);
	int		getWidth();
	int		getHeight();
	int		getXResolution();
	int		getYResolution();
};

class CPU : public Item
{
	float	pClockSpeed; //In GHz
	int		pCores;
	int		pThreads;

public:
	CPU();
	CPU(double price, std::string name, std::string brand, float speed, int cores, int threads);
	float	getClockSpeed();
	int		getCores();
	int		getThreads();
};
