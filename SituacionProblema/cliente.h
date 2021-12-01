#pragma once
#include <string>

class Cliente
{
private:
	int			pID;
	std::string	pNombre;
	double		pPagado;

public:
	Cliente();
	Cliente(std::string name);
	void pagarProducto(double precio);
	std::string	getName();
	int			getID();
	double		getPagado();
	void		setID(int id);
};