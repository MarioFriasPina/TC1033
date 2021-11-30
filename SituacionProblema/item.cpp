#include "item.h"

double Item::getPrice()
{
	return pPrice;
}

std::string Item::getName()
{
	return pName;
}

std::string Item::getBrand()
{
	return pBrand;
}

int		Item::getQuantity()
{
	return pQuantity;
}

bool	Item::sellOne()
{
	if (pQuantity > 0)
	{
		pQuantity--;
		return true;
	}
	return false;
}

Monitor::Monitor()
{
	pQuantity = 5;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pWidth = 0;
	pHeight = 0;
	pXResolution = 0;
	pYResolution = 0;
}

Monitor::Monitor(int quantity, double price, std::string name, std::string brand, int width, int height, int xres, int yres)
{
	pQuantity = quantity;
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
	pQuantity = 5;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pClockSpeed = 0;
	pCores = 0;
	pThreads = 0;
}

CPU::CPU(int quantity, double price, std::string name, std::string brand, float speed, int cores, int threads)
{
	pQuantity = quantity;
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

GPU::GPU()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pClockSpeed = 0.0;
	pBusMemory = 0;
	pGraphicRAM = 0;
}

GPU::GPU(int quantity, double price, std::string name, std::string brand, float speed, int ram, int bus)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pClockSpeed = speed;
	pBusMemory = bus;
	pGraphicRAM = ram;
}

float GPU::getClockSpeed()
{
	return pClockSpeed;
}

int GPU::getBusMemory()
{
	return pBusMemory;
}

int GPU::getGraphicRAM()
{
	return pGraphicRAM;
}

HDD::HDD()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pCapacity = 0;
	pSpeed = 0;
}

HDD::HDD(int quantity, double price, std::string name, std::string brand, int size, int speed)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pCapacity = size;
	pSpeed = speed;
}

int HDD::getSpeed()
{
	return pSpeed;
}

int HDD::getCapacity()
{
	return pCapacity;
}

SSD::SSD()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pCapacity = 0;
	pSpeed = 0;
}

SSD::SSD(int quantity, double price, std::string name, std::string brand, int size, int speed)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pCapacity = size;
	pSpeed = speed;
}

int SSD::getSpeed()
{
	return pSpeed;
}

int SSD::getCapacity()
{
	return pCapacity;
}

RAM::RAM()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pSize = 0;
	pSpeed = 0;
}

RAM::RAM(int quantity, double price, std::string name, std::string brand, int size, int speed)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pSize = size;
	pSpeed = speed;
}

int RAM::getSpeed()
{
	return pSpeed;
}

int RAM::getSize()
{
	return pSize;
}

Motherboard::Motherboard()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pSlots = 0;
}

Motherboard::Motherboard(int quantity, double price, std::string name, std::string brand, int slots)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pSlots = slots;
}

int Motherboard::getSlots()
{
	return pSlots;
}

Power::Power()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pWatts = 0;
	pFanSize = 0;
}

Power::Power(int quantity, double price, std::string name, std::string brand, int power, int fan)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pWatts = power;
	pFanSize = fan;
}

int		Power::getWatts()
{
	return pWatts;
}

int		Power::getFanSize()
{
	return pFanSize;
}

Keyboard::Keyboard()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pBluetooth = 0;
	pKeys = 0;
}

Keyboard::Keyboard(int quantity, double price, std::string name, std::string brand, bool bluetooth, bool mechanical, int keys)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pBluetooth = bluetooth;
	pKeys = keys;
}

int		Keyboard::getKeys()
{
	return pKeys;
}

bool	Keyboard::getBluetooth()
{
	return pBluetooth;
}

bool	Keyboard::getMechanical()
{
	return pMech;
}

Mouse::Mouse()
{
	pQuantity = 0;
	pPrice = 0.0;
	pName = "";
	pBrand = "";
	pBluetooth = false;
	pButtons = 0;
}

Mouse::Mouse(int quantity, double price, std::string name, std::string brand, bool bluetooth, int buttons)
{
	pQuantity = quantity;
	pPrice = price;
	pName = name;
	pBrand = brand;
	pBluetooth = bluetooth;
	pButtons = buttons;
}

int		Mouse::getButtons()
{
	return pButtons;
}

bool	Mouse::getBluetooth()
{
	return pBluetooth;
}
