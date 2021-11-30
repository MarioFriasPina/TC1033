#include "cliente.h"

Cliente::Cliente()
{
	pID = -1;
	pNombre = "";
	pPagado = 0;
}

Cliente::Cliente(int id, std::string name)
{
	pID = id;
	pNombre = name;
	pPagado = 0;
}

void	Cliente::pagarProducto(double precio)
{
	pPagado += precio;
}

std::string Cliente::getName()
{
	return pNombre;
}

int			Cliente::getID()
{
	return pID;
}

double		Cliente::getPagado()
{
	return pPagado;
}