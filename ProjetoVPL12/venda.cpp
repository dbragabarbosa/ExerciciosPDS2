#include "venda.hpp"

#include <iomanip>

Venda::~Venda() {
  // TODO: Implemente este metodo
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_pedidos
   */
   
    for(auto it = m_pedidos.begin(); it != m_pedidos.end();)
    {
        delete * it;  
        it = m_pedidos.erase(it);
    }
   
}

void Venda::adicionaPedido(Pedido* p) 
{
  // TODO: Implemente este metodo
    m_pedidos.push_back(p);
}

void Venda::imprimeRelatorio() const 
{
  // TODO: Implemente este metodo
  /**
   * Aqui voce tem que percorrer a lista de todos os pedidos e imprimir o resumo
   * de cada um. Por ultimo, devera ser exibido o total de venda e a quantidade
   * de pedidos processados.
   */
   
   int pedido = 1;
   
   float custo = 0;
   int numPedidos = 0;
   
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
   
   for(auto it = m_pedidos.begin(); it != m_pedidos.end(); it++)
    {
        cout << "Pedido " << pedido << endl;
        cout << (*it)->resumo() << endl;
        pedido++;
        numPedidos++;
        custo += (*it)->calculaTotal();
    }
    
    cout << "Relatorio de Vendas " << endl;
    cout << "Total de vendas: R$ " << custo << endl;
    cout << "Total de pedidos: " << numPedidos;
    
    
}