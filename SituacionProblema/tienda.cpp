#include "tienda.h"

int main()
{
	Tienda tienda;

	tienda.listarInfo();

	Monitor	mon2(5, 2399.99, "LG G2 65", "LG", 56, 32, 3840, 2160);
	tienda.nuevoMonitor(&mon2);

	tienda.venderProducto("RTX 2070", "Mario");

	Cliente	cli("Pedro");
	tienda.nuevoCliente(&cli);

	tienda.venderProducto("LG G2 65", "Pedro");

	tienda.listarInfo();
	tienda.listarClientes();
	tienda.totalVendido();

	return 0;
}

Tienda::Tienda()
{
	pVendido = 0;

	sizeClientes = 0;
	Cliente	cli("Mario");
	nuevoCliente(&cli);
	clienteActual = 0;

	sizeMonitor = 0;
	Monitor	 mon(5, 2399.99, "LG G1 65", "LG", 56, 32, 3840, 2160);
	nuevoMonitor(&mon);
	sizeCPU = 0;
	CPU		cpu(5, 1249.99, "Test", "ASUS", 3.1, 8, 12);
	nuevoCPU(&cpu);
	sizeGPU = 0;
	GPU		gpu(5, 1999.99, "RTX 2070", "nvidia", 3.1, 16, 12);
	nuevoGPU(&gpu);
	sizeHDD = 0;
	HDD		mem(5, 999.99, "Memoria", "samsung", 2048, 12);
	nuevoHDD(&mem);
	sizeSSD = 0;
	SSD		solida(5, 2000.0, "Solid", "crucial", 1024, 10);
	nuevoSSD(&solida);
	sizeRAM = 0;
	RAM		ram(5, 1000.0, "pirate", "logitech", 8, 12);
	nuevoRAM(&ram);
	sizeMotherboard = 0;
	Motherboard	mb(5, 899.99, "isf", "logitech", 4);
	nuevoMotherboard(&mb);
	sizePower = 0;
	Power	pow(5, 1200.0, "bfab", "fnsk", 311, 120);
	nuevoPower(&pow);
	sizeMouse = 0;
	Mouse	ms(5, 300.0, "G305", "logitech", true, 5);
	nuevoMouse(&ms);
	sizeKeyboard = 0;
	Keyboard	kb(5, 700.0, "pricer", "razor", false, true, 104);
	nuevoKeyboard(&kb);
}

void	Tienda::listarInfo()
{
	printf("%-15s%-25s%-s\n", "Tipo", "Nombre", "Disponibles");
	for (size_t i = 0; i < sizeMonitor; i++)
		printf("%-15s%-25s%-d\n", "Monitor", listaMonitor[i].getName().c_str(), listaMonitor[i].getQuantity());

	for (size_t i = 0; i < sizeCPU; i++)
		printf("%-15s%-25s%-d\n", "CPU", listaCPU[i].getName().c_str(), listaCPU[i].getQuantity());

	for (size_t i = 0; i < sizeGPU; i++)
		printf("%-15s%-25s%-d\n", "GPU", listaGPU[i].getName().c_str(), listaGPU[i].getQuantity());

	for (size_t i = 0; i < sizeHDD; i++)
		printf("%-15s%-25s%-d\n", "HDD", listaHDD[i].getName().c_str(), listaHDD[i].getQuantity());

	for (size_t i = 0; i < sizeSSD; i++)
		printf("%-15s%-25s%-d\n", "SSD", listaSSD[i].getName().c_str(), listaSSD[i].getQuantity());

	for (size_t i = 0; i < sizeRAM; i++)
		printf("%-15s%-25s%-d\n", "RAM", listaRAM[i].getName().c_str(), listaRAM[i].getQuantity());

	for (size_t i = 0; i < sizeMotherboard; i++)
		printf("%-15s%-25s%-d\n", "Motherboard", listaMotherboard[i].getName().c_str(), listaMotherboard[i].getQuantity());

	for (size_t i = 0; i < sizePower; i++)
		printf("%-15s%-25s%-d\n", "Power", listaPower[i].getName().c_str(), listaPower[i].getQuantity());

	for (size_t i = 0; i < sizeKeyboard; i++)
		printf("%-15s%-25s%-d\n", "Keyboard", listaKeyboard[i].getName().c_str(), listaKeyboard[i].getQuantity());

	for (size_t i = 0; i < sizeMouse; i++)
		printf("%-15s%-25s%-d\n", "Mouse", listaMouse[i].getName().c_str(), listaMouse[i].getQuantity());
}

void	Tienda::totalVendido()
{
	printf("Total Vendido= $%.2f\n", pVendido);
}

void	Tienda::listarClientes()
{
	printf("%-5s%-25s%-s\n", "Id", "Cliente", "Pagado");
	for (size_t i = 0; i < sizeClientes; i++)
		printf("%-5d%-25s%-.2f\n", listaClientes[i].getID(), listaClientes[i].getName().c_str(), listaClientes[i].getPagado());
}

void	Tienda::venderProducto(const char* nombreProducto, const char* nombreCliente)
{
	Item*	producto;
	int		numCliente;

	producto = buscarProducto(nombreProducto);
	numCliente = buscarCliente(nombreCliente);
	if (producto == NULL)
		printf("El producto no se encuentra en el catalogo\n");
	else if (numCliente == -1)
		printf("El cliente no se encuentra en la lista\n");
	else if (producto->sellOne())
	{
		pVendido += producto->getPrice();
		listaClientes[numCliente].pagarProducto(producto->getPrice());
	}
	else
		printf("No existen suficientes existencias para su producto\n");
}

int		Tienda::buscarCliente(const char* nombre)
{
	for (size_t i = 0; i < sizeClientes; i++)
		if (listaClientes[i].getName().compare(nombre) == 0)
			return i;
	return -1;
}

Item*	Tienda::buscarProducto(const char *nombre)
{
	for (size_t i = 0; i < sizeMonitor; i++)
		if (listaMonitor[i].getName().compare(nombre) == 0)
			return &listaMonitor[i];

	for (size_t i = 0; i < sizeCPU; i++)
		if (listaCPU[i].getName().compare(nombre) == 0)
			return &listaCPU[i];

	for (size_t i = 0; i < sizeGPU; i++)
		if (listaGPU[i].getName().compare(nombre) == 0)
			return &listaGPU[i];

	for (size_t i = 0; i < sizeHDD; i++)
		if (listaHDD[i].getName().compare(nombre) == 0)
			return &listaHDD[i];

	for (size_t i = 0; i < sizeSSD; i++)
		if (listaSSD[i].getName().compare(nombre) == 0)
			return &listaSSD[i];

	for (size_t i = 0; i < sizeRAM; i++)
		if (listaRAM[i].getName().compare(nombre) == 0)
			return &listaRAM[i];

	for (size_t i = 0; i < sizeMotherboard; i++)
		if (listaMotherboard[i].getName().compare(nombre) == 0)
			return &listaMotherboard[i];

	for (size_t i = 0; i < sizePower; i++)
		if (listaPower[i].getName().compare(nombre) == 0)
			return &listaPower[i];

	for (size_t i = 0; i < sizeKeyboard; i++)
		if (listaKeyboard[i].getName().compare(nombre) == 0)
			return &listaKeyboard[i];

	for (size_t i = 0; i < sizeMouse; i++)
		if (listaMouse[i].getName().compare(nombre) == 0)
			return &listaMouse[i];

	return NULL;
}

void	Tienda::nuevoCliente(Cliente* cliente)
{
	Cliente* copia;

	copia = new Cliente[++sizeClientes];
	if (sizeClientes > 1)
	{
		for (size_t i = 0; i < sizeClientes - 1; i++)
		{
			copia[i] = listaClientes[i];
		}
		delete[] listaClientes;
	}
	copia[sizeClientes - 1] = *cliente;
	listaClientes = copia;
	listaClientes[sizeClientes - 1].setID(sizeClientes);
}

void	Tienda::nuevoMonitor(Monitor *producto)
{
	Monitor*	copia;

	copia = new Monitor [++sizeMonitor];
	if (sizeMonitor > 1)
	{
		for (size_t i = 0; i < sizeMonitor - 1; i++)
		{
			copia[i] = listaMonitor[i];
		}
		delete[] listaMonitor;
	}
	copia[sizeMonitor - 1] = *producto;
	listaMonitor = copia;
}
void	Tienda::nuevoGPU(GPU *producto)
{
	GPU* copia;

	copia = new GPU [++sizeGPU];
	if (sizeGPU > 1)
	{
		for (size_t i = 0; i < sizeGPU - 1; i++)
			copia[i] = listaGPU[i];
		delete[] listaGPU;
	}
	copia[sizeGPU -1] = *producto;
	listaGPU = copia;
}
void	Tienda::nuevoCPU(CPU *producto)
{
	CPU* copia;

	copia = new CPU [++sizeCPU];
	if (sizeCPU > 1)
	{
		for (size_t i = 0; i < sizeCPU - 1; i++)
			copia[i] = listaCPU[i];
		delete[] listaCPU;
	}
	copia[sizeCPU -1] = *producto;
	listaCPU = copia;
}
void	Tienda::nuevoHDD(HDD *producto)
{
	HDD* copia;

	copia = new HDD [++sizeHDD];
	if (sizeHDD > 1)
	{
		for (size_t i = 0; i < sizeHDD - 1; i++)
			copia[i] = listaHDD[i];
		delete[] listaHDD;
	}
	copia[sizeHDD -1] = *producto;
	listaHDD = copia;
}
void	Tienda::nuevoSSD(SSD *producto)
{
	SSD* copia;

	copia = new SSD [++sizeSSD];
	if (sizeSSD > 1)
	{
		for (size_t i = 0; i < sizeSSD - 1; i++)
			copia[i] = listaSSD[i];
		delete[] listaSSD;
	}
	copia[sizeSSD -1] = *producto;
	listaSSD = copia;
}
void	Tienda::nuevoRAM(RAM *producto)
{
	RAM* copia;

	copia = new RAM [++sizeRAM];
	if (sizeRAM > 1)
	{
		for (size_t i = 0; i < sizeRAM - 1; i++)
			copia[i] = listaRAM[i];
		delete[] listaRAM;
	}
	copia[sizeRAM -1] = *producto;
	listaRAM = copia;
}
void	Tienda::nuevoMotherboard(Motherboard *producto)
{
	Motherboard* copia;

	copia = new Motherboard [++sizeMotherboard];
	if (sizeMotherboard > 1)
	{
		for (size_t i = 0; i < sizeMotherboard - 1; i++)
			copia[i] = listaMotherboard[i];
		delete[] listaMotherboard;
	}
	copia[sizeMotherboard -1] = *producto;
	listaMotherboard = copia;
}
void	Tienda::nuevoPower(Power *producto)
{
	Power* copia;

	copia = new Power [++sizePower];
	if (sizePower > 1)
	{
		for (size_t i = 0; i < sizePower - 1; i++)
			copia[i] = listaPower[i];
		delete[] listaPower;
	}
	copia[sizePower -1] = *producto;
	listaPower = copia;
}
void	Tienda::nuevoKeyboard(Keyboard *producto)
{
	Keyboard* copia;

	copia = new Keyboard [++sizeKeyboard];
	if (sizeKeyboard > 1)
	{
		for (size_t i = 0; i < sizeKeyboard - 1; i++)
			copia[i] = listaKeyboard[i];
		delete[] listaKeyboard;
	}
	copia[sizeKeyboard -1] = *producto;
	listaKeyboard = copia;
}
void	Tienda::nuevoMouse(Mouse *producto)
{
	Mouse* copia;

	copia = new Mouse [++sizeMouse];
	if (sizeMouse > 1)
	{
		for (size_t i = 0; i < sizeMouse - 1; i++)
			copia[i] = listaMouse[i];
		delete[] listaMouse;
	}
	copia[sizeMouse -1] = *producto;
	listaMouse = copia;
}

Tienda::~Tienda()
{
	delete[] listaMonitor;
	delete[] listaCPU;
	delete[] listaGPU;
	delete[] listaHDD;
	delete[] listaSSD;
	delete[] listaRAM;
	delete[] listaMotherboard;
	delete[] listaPower;
	delete[] listaKeyboard;
	delete[] listaMouse;

	delete[] listaClientes;
}