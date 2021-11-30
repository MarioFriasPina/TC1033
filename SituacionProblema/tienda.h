#pragma once
#include "item.h"
#include "cliente.h"

class Tienda
{
private:

	double		pVendido;


	//Todas las listas y sus tamanos
	int			sizeClientes;
	int			clienteActual;
	Cliente*	listaClientes;
	
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
	void	totalVendido();
	void	listarClientes();

	void	venderProducto(const char *nombreProducto);
	Item*	buscarProducto(const char *nombre);

	//Metodos de clientes
	void	nuevoCliente(Cliente* cliente);

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