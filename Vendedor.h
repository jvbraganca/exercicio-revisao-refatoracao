#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <iostream>
#include "Empregado.h"

class Vendedor : public Empregado {

private:
    std::string nome;

    double quotaTotalAnual();

public:
    Vendedor(const std::string &nome, double salarioHora, double horasTrabalhadas, double quotaMensalVendas);

    void setNome(const std::string &nome);

    const std::string &getNome() const;

    /**
    * Imprime as informações do funcionário.
    * Nome, Salário do mês e cota mensal de vendas
    * @return void
    */
    void printInfo() const;

    ~Vendedor() override;
};


#endif //VENDEDOR_H
