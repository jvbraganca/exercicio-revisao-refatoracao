#include "Empregado.h"
#include <string>

/**
 * Construtor Engenheiro
 * @param salarioHora
 * @param horasTrabalhadas
 * @param projetos
 */
Empregado::Empregado(double salarioHora, double horasTrabalhadas, int projetos, bool engenheiro) :
        salarioHora(salarioHora), horasTrabalhadas(horasTrabalhadas), projetos(projetos) {}

/**
 * Construtor Vendedor
 * @param salarioHora
 * @param horasTrabalhadas
 * @param quotaMensalVendas
 */
Empregado::Empregado(double salarioHora, double horasTrabalhadas, double quotaMensalVendas) :
    salarioHora(salarioHora), horasTrabalhadas(horasTrabalhadas), quotaMensalVendas(quotaMensalVendas) {}


void Empregado::setHorasTrabalhadas(double horasTrabalhadas) {
    Empregado::horasTrabalhadas = horasTrabalhadas;
}

void Empregado::setSalarioHora(double salarioHora) {
    Empregado::salarioHora = salarioHora;
}

void Empregado::setQuotaMensalVendas(double quotaMensalVendas) {
    Empregado::quotaMensalVendas = quotaMensalVendas;
}

void Empregado::setProjetos(int projetos) {
    Empregado::projetos = projetos;
}

double Empregado::getHorasTrabalhadas() const {
    return horasTrabalhadas;
}

double Empregado::getSalarioHora() const {
    return salarioHora;
}

double Empregado::getQuotaMensalVendas() const {
    return quotaMensalVendas;
}

int Empregado::getProjetos() const {
    return projetos;
}

double Empregado::getPagamentoMes() const {

    double horasTrabalhadas = getHorasTrabalhadas();

    /**
     * Calcula as horas extras trabalhadas, bônus de 50% se
     * tiver mais que 8 horas extras trabalhadas.
     */
    if (horasTrabalhadas > MAX_HORAS_TRABALHADAS) {
        double x = horasTrabalhadas - MAX_HORAS_TRABALHADAS;
        horasTrabalhadas += x / 2;
    }
    return horasTrabalhadas * salarioHora;
}

Empregado::~Empregado() = default;
