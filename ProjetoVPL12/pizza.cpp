#include "pizza.hpp"

std::string Pizza::descricao() const {
  // TODO: Implemente este metodo.
  /*
   * Note que aqui voce deve retornar uma descricao detalhada da pizza.
   *
   * Exemplos:
   * 2X Pizza Calabresa, 4 pedacos e borda recheada.
   * 2X Pizza Calabresa, 4 pedacos sem borda recheada.
   */
   
  string result;
//   result = this->m_qtd + "X Pizza " + this->sabor + ", " + this->pedacos + " pedacos ";


    result = to_string(this->m_qtd) + "X Pizza " + this->sabor + ", " + to_string(this->pedacos) + " pedacos ";
   
    if(this->borda_recheada)
    {
        result += "e borda recheada.";
    }
    else 
    {
        result += "e sem borda recheada.";
    }
   
  return result;
}

Pizza::Pizza(const std::string& sabor,
             int pedacos,
             bool borda_recheada,
             int qtd,
             float valor_unitario) {
  // TODO: Implemente este metodo.
  
    this->sabor = sabor;
    this->pedacos = pedacos;
    this->borda_recheada = borda_recheada;
    this->m_qtd = qtd;
    this->m_valor_unitario = valor_unitario;
  
}