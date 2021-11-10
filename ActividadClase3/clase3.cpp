#include <iostream>

void    departamento(int *total, const char *nombre)
{
    int gasto;

    std::cout << "Cuanto gastaste en " << nombre << ":";
    std::cin >> gasto;
    (*total) += gasto;
}

int     main(void)
{
    int total = 0;
    departamento(&total, "frutas y verduras");
    departamento(&total, "carnes y congelados");
    departamento(&total, "vinos y licores");
    departamento(&total, "dulceria");
    departamento(&total, "articulos de limpieza");
    std::cout << "El total fue: " << total << std::endl;
    return (0);
}
