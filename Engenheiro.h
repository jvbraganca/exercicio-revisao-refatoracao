#ifndef ENGENHEIRO_H
#define ENGENHEIRO_H

#include <string>
#include "Empregado.h"

class Engenheiro : public Empregado {

public:
    Engenheiro(std::string nome, double salario, int projetos, double horasTrabalhadas);

    const std::string &getNome() const;

    void setNome(const std::string &nome);

    int getProjetos() const;

    void setProjetos(int projetos);

    /**
    * Imprime as informações do funcionário.
    * Nome, Salário do mês e projetos
    * @return void
    */
    void printInfo() const;

    virtual ~Engenheiro();

private:
    std::string nome;
    int projetos;

};

#endif //ENGENHEIRO_H
