#include <string>
#include "Empregado.h"
#include "Vendedor.h"

Vendedor::Vendedor(const std::string &nome, double salarioHora, double horasTrabalhadas, double quotaMensalVendas)
        : Empregado(salarioHora, horasTrabalhadas, quotaMensalVendas), nome(nome) {}

void Vendedor::setNome(const std::string &nome) {
    Vendedor::nome = nome;
}

const std::string &Vendedor::getNome() const {
    return nome;
}

double Vendedor::quotaTotalAnual() {
    return quotaMensalVendas * 12;
}

void Vendedor::printInfo() const {
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Salario Mes: " << this->getPagamentoMes() << std::endl;
    std::cout << "Quota vendas: " << getQuotaMensalVendas() << std::endl;
    std::cout << std::endl;
}

Vendedor::~Vendedor() = default;
