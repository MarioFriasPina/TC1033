#include <iostream>
#include <string>

#define NUM_CLIENTES 5

typedef struct s_cliente {
    std::string nombre;
    std::string telefono;
    int         gasto;
} t_cliente;

void  agregar(t_cliente* lista, std::string nombre)
{
    t_cliente nuevo;

    nuevo.nombre = nombre;
    nuevo.telefono = "";
    nuevo.gasto = 0;

    *lista = nuevo;
}

void    departamento(t_cliente *cliente, std::string nombre)
{
    int gasto;

    std::cout << "Hola " << cliente->nombre << ", bienvenido\t";
    std::cout << "Cuanto gastaste en " << nombre << ":";
    std::cin >> gasto;
    cliente->gasto += gasto;
}

void    pasa_cliente(t_cliente *cliente)
{
    departamento(cliente, "frutas y verduras");
    departamento(cliente, "carnes y congelados");
    departamento(cliente, "vinos y licores");
    departamento(cliente, "dulceria");
    departamento(cliente, "articulos de limpieza");
}

int    imprime_total(t_cliente *lista, int size, bool imprime = false)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += lista[i].gasto;
        std::cout << "hola, soy " << lista[i].nombre << " y gaste " << lista[i].gasto << " en el supermercado\n";
    }
    std::cout << "El total del supermercado es: " << total << std::endl;
    return (total);
}

int     main(void)
{
    t_cliente* lista;
    int         size = 10;

    t_cliente   cliente;

    lista = new t_cliente[size];
    for (int i = 0; i < NUM_CLIENTES; i++)
        agregar(&lista[i], "usuario" + std::to_string(i));

    for (int i = 0; i < size; i++)
        pasa_cliente(&lista[i]);
    imprime_total(lista, size, true);
    delete[]lista;
    return 0;
}
