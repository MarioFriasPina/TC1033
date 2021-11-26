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

GPU::GPU(double price, std::string name, std::string brand, float speed, int ram, int bus)
{
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

HDD::HDD(double price, std::string name, std::string brand, int size, int speed)
{
	pPrice = price;
	pName = name;
	pBrand = brand;
	pCapacity = size;
	pSpeed - speed;
}

int HDD::getSpeed()
{
	return pSpeed;
}

int HDD::getCapacity()
{
	return pCapacity;
}

SSD::SSD(double price, std::string name, std::string brand, int size, int speed)
{
	pPrice = price;
	pName = name;
	pBrand = brand;
	pCapacity = size;
	pSpeed - speed;
}

int SSD::getSpeed()
{
	return pSpeed;
}

int SSD::getCapacity()
{
	return pCapacity;
}

RAM::RAM(double price, std::string name, std::string brand, int size, int speed)
{
	pPrice = price;
	pName = name;
	pBrand = brand;
	pSize = size;
	pSpeed - speed;
}

int RAM::getSpeed()
{
	return pSpeed;
}

int RAM::getSize()
{
	return pSize;
}

Motherboard::Motherboard(double price, std::string name, std::string brand, int slots)
{
	pPrice = price;
	pName = name;
	pBrand = brand;
	pSlots = slots;
}

int Motherboard::getSlots()
{
	return pSlots;
}

Power::Power(double price, std::string name, std::string brand, int power, int fan)
{
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

Keyboard::Keyboard(double price, std::string name, std::string brand, bool bluetooth, bool mechanical, int keys)
{
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

Mouse::Mouse(double price, std::string name, std::string brand, bool bluetooth, int buttons)
{
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

int main()
{
	Monitor	mon(2399.99, "LG G1 65", "LG", 56, 32, 3840, 2160);
	CPU		cpu(1249.99, "Test", "ASUS", 3.1, 8, 12);
	GPU		gpu(1999.99, "RTX 2070", "nvidia", 3.1, 16, 12);
	HDD		mem(999.99, "Memoria", "samsung", 2048, 12);
	SSD		solida(2000.0, "Solid", "crucial", 1024, 10);
	RAM		ram(1000.0, "pirate", "logitech", 8, 12);
	Motherboard	mb(899.99, "isf", "logitech", 4);
	Power	pow(1200.0, "bfab", "fnsk", 311, 120);
	Mouse	ms(300.0, "G305", "logitech", true, 5);
	Keyboard	kb(700.0, "pricer", "razor", false, true, 104);

	std::cout << mon.getName() << "\t" << mon.getPrice() << std::endl;
	std::cout << cpu.getName() << "\t" << cpu.getPrice() << std::endl;

	return 0;
}