#include <iostream>
#include <string>

typedef struct s_contacto {
    std::string nombre;
    std::string direccion;
    std::string telefono;
    std::string correo;
    std::string insta;
    std::string tiktok;
    int         conocerlo;
    std::string relacion;
} t_contacto;

void  agregar(t_contacto* lista, std::string nombre)
{
    t_contacto nuevo;

    nuevo.nombre = nombre;
    nuevo.direccion = "";
    nuevo.telefono = "";
    nuevo.correo = nuevo.nombre + "@tec.mx";
    nuevo.insta = "";
    nuevo.tiktok = "";
    nuevo.conocerlo = 0;
    nuevo.relacion = "";

    *lista = nuevo;
}

int     buscarNombre(t_contacto *lista, std::string nombre, int size, bool print = 0)
{
    for (int i = 0; i < size; i++)
        if (lista[i].nombre == nombre)
        {
            if (print)
                std::cout << lista[i].nombre << "\t" << lista[i].correo << std::endl;
            return (i);
        }
    return (-1);
}

int     buscarEmail(t_contacto* lista, std::string mail, int size, bool print = 0)
{
    for (int i = 0; i < size; i++)
        if (lista[i].correo == mail)
        {
            if (print)
                std::cout << lista[i].nombre << "\t" << lista[i].correo << std::endl;
            return (i);
        }
    return (-1);
}

void    modificarEmail(t_contacto *lista, int pos, std::string nuevo)
{
    if (pos != -1)
        (&lista[pos])->correo = nuevo;
    else
        std::cout << "No se encontro el correo\n";
}

int     main(void)
{
    t_contacto* lista;
    int         size = 100;

    lista = new t_contacto[size];
    for (int i = 0; i < size; i++)
        agregar(&lista[i], "usuario" + std::to_string(i));
    modificarEmail(lista, buscarNombre(lista, "usuario2", size), "mario@tec.mx");
    modificarEmail(lista, buscarEmail(lista, "usuario3@tec.mx", size), "pedro@tec.mx");
    modificarEmail(lista, buscarNombre(lista, "usuario6", size), "juan@tec.mx");

    delete[]lista;
    return 0;
}
