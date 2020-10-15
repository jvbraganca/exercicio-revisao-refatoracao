#include "Engenheiro.h"
#include "Vendedor.h"
#include <string>
#include <utility>

Engenheiro::Engenheiro(std::string nome, double salario, int projetos, double horasTrabalhadas) :
        nome(std::move(nome)), projetos(projetos), Empregado(salario, horasTrabalhadas, projetos, 1) {}


int Engenheiro::getProjetos() const {
    return projetos;
}

void Engenheiro::setProjetos(int projetos) {
    Engenheiro::projetos = projetos;
}

const std::string &Engenheiro::getNome() const {
    return nome;
}

void Engenheiro::setNome(const std::string &nome) {
    Engenheiro::nome = nome;
}

void Engenheiro::printInfo() const {
    std::cout << "Nome: " << getNome() << std::endl;
    std::cout << "Salario Mes: " << this->getPagamentoMes() << std::endl;
    std::cout << "Projetos: " << getProjetos() << std::endl;
    std::cout << std::endl;
}

Engenheiro::~Engenheiro() = default;
