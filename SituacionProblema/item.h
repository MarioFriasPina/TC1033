#pragma once
#include <string.h>
#include <iostream>

class Item
{
protected:
	double		pPrice;
	int			pQuantity = 5;
	std::string	pName;
	std::string pBrand;

public:
	double		getPrice();
	std::string	getName();
	int			getQuantity();
	std::string getBrand();
	bool		sellOne();

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

class GPU : public Item
{
private:
	int		pGraphicRAM;
	int		pBusMemory;
	float	pClockSpeed;

public:
	GPU();
	GPU(double price, std::string name, std::string brand, float speed, int ram, int bus);
	int		getGraphicRAM();
	int		getBusMemory();
	float	getClockSpeed();
};

class HDD : public Item
{
private:
	int		pCapacity;
	int		pSpeed; //RPM

public:
	HDD();
	HDD(double price, std::string name, std::string brand, int size, int speed);
	int		getCapacity();
	int		getSpeed();
};

class SSD : public Item
{
private:
	int		pCapacity;
	int		pSpeed; //RPM

public:
	SSD();
	SSD(double price, std::string name, std::string brand, int size, int speed);
	int		getCapacity();
	int		getSpeed();
};

class RAM : public Item
{
private:
	int		pSize;
	int		pSpeed;

public:
	RAM();
	RAM(double price, std::string name, std::string brand, int size, int speed);
	int		getSize();
	int		getSpeed();
};

class Motherboard : public Item
{
private:
	int		pSlots;

public:
	Motherboard();
	Motherboard(double price, std::string name, std::string brand, int slots);
	int		getSlots();
};

class Power : public Item
{
private:
	int		pWatts;
	int		pFanSize; //mm

public:
	Power();
	Power(double price, std::string name, std::string brand, int watts, int fan);
	int		getWatts();
	int		getFanSize();
};

class Keyboard : public Item
{
private:
	bool		pBluetooth;
	bool		pMech;
	int			pKeys; //114 / 104 / 87

public:
	Keyboard();
	Keyboard(double price, std::string name, std::string brand, bool bluetooth, bool mechanical, int keys);
	int		getKeys();
	bool	getBluetooth();
	bool	getMechanical();
};

class Mouse : public Item
{
private:
	bool		pBluetooth;
	int			pButtons;

public:
	Mouse();
	Mouse(double price, std::string name, std::string brand, bool bluetooth, int buttons);
	int		getButtons();
	bool	getBluetooth();
};