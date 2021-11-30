#pragma once
#include "item.h"

class Tienda
{
private:

	int			pVendido;

	//Todas las listas y sus tamanos
	int			sizeMonitor;
	Monitor*	listaMonitor;
	int			sizeGPU;
	GPU*		listaGPU;
	int			sizeCPU;
	CPU*		listaCPU;
	int			sizeHDD;
	HDD*		listaHDD;
	int			sizeSSD;
	SSD*		listaSSD;
	int			sizeRAM;
	RAM*		listaRAM;
	int			sizeMotherboard;
	Motherboard*	listaMotherboard;
	int			sizePower;
	Power*		listaPower;
	int			sizeKeyboard;
	Keyboard*	listaKeyboard;
	int			sizeMouse;
	Mouse*		listaMouse;

public:
	//Crea la tienda con valores default
	Tienda();
	//Libera las alocaciones de las listas
	~Tienda();
	//Imprime todos los productos de la tienda, su tipo y su cantidad
	void	listarInfo();

	void	venderProducto(const char *nombreProducto);

	Item*	buscarProducto(const char *nombre);

	//Agrega un producto de algun tipo
	void	nuevoMonitor(Monitor *producto);
	void	nuevoGPU(GPU *producto);
	void	nuevoCPU(CPU *producto);
	void	nuevoHDD(HDD *producto);
	void	nuevoSSD(SSD *producto);
	void	nuevoRAM(RAM *producto);
	void	nuevoMotherboard(Motherboard *producto);
	void	nuevoPower(Power *producto);
	void	nuevoKeyboard(Keyboard *producto);
	void	nuevoMouse(Mouse *producto);
};