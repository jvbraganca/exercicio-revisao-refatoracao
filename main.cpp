#include "Engenheiro.h"
#include "Vendedor.h"


int main() {

    Engenheiro eng1("Joao Snow", 35, 3, 9.5);
    eng1.printInfo();

    Engenheiro eng2("Daniela Targaryen", 30, 1, 8);
    eng2.printInfo();

    Engenheiro eng3("Bruno Stark", 30, 2, 8);
    eng3.printInfo();

    Vendedor vend1("Tonho Lannister", 20, 6, 5000);
    vend1.printInfo();

    Vendedor vend2("Jose Mormont", 25, 8, 3000);
    vend2.printInfo();

    Vendedor vend3("Sonia Stark", 30, 8, 4000);
    vend3.printInfo();

    return 0;
}