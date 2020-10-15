#ifndef EMPREGADO_H
#define EMPREGADO_H

#include <iostream>
#include <string>

#define MAX_HORAS_TRABALHADAS 8

class Empregado {

private:
    double salarioHora{};
    double horasTrabalhadas{};
    int projetos{};

public:
    int getProjetos() const;
    void setProjetos(int projetos);

protected:
    double quotaMensalVendas{};

public:

    /**
     * Construtor de ENGENHEIRO
     * @param salarioHora
     * @param horasTrabalhadas
     * @param quotaMensalVendas
     * @param projetos
     */
    Empregado(double salarioHora, double horasTrabalhadas, int projetos, bool engenheiro);

    /**
     * Construtor de VENDEDOR
     * @param salarioHora
     * @param horasTrabalhadas
     * @param quotaMensalVendas
     * @param projetos
     */
    Empregado(double salarioHora, double horasTrabalhadas, double quotaMensalVendas);

    void setHorasTrabalhadas(double horasTrabalhadas);

    void setSalarioHora(double salarioHora);

    void setQuotaMensalVendas(double quotaMensalVendas);

    double getHorasTrabalhadas() const;

    double getSalarioHora() const;

    double getQuotaMensalVendas() const;

    /**
     * Retorna o sálario do mês conforme as horas trabalhadas
     * @param horasTrabalhadas
     * @return
     */
    double getPagamentoMes() const;


    virtual ~Empregado();

};

#endif