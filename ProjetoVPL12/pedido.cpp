#include "pedido.hpp"


Pedido::~Pedido() 
{
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve deletar os ponteiros contidos na lista m_produtos
   */
//   m_produtos~list();

    for(auto it = m_produtos.begin(); it != m_produtos.end();)
    {
        delete * it;  
        it = m_produtos.erase(it);
    }

}

void Pedido::setEndereco(const std::string& endereco) 
{
  // TODO: Implemente este metodo.
  this->m_endereco = endereco;
}

float Pedido::calculaTotal() const 
{
  // TODO: Implemente este metodo.
  float result = 0;
  for(auto it = m_produtos.begin(); it != m_produtos.end(); it++)
  {
      result += ((*it)->getValor() * (*it)->getQtd());
  }
  return result;
}

void Pedido::adicionaProduto(Produto* p) 
{
  // TODO: Implemente este metodo.
  m_produtos.push_back(p);
}

std::string Pedido::resumo() const 
{
  // TODO: Implemente este metodo.
  /**
   * Aqui voce deve percorrer a lista de produtos para criar um resumo completo
   * do pedido. A cada iteracao, utilize o metodo descricao de cada produto para
   * montar o resumo do pedido. Por fim, adicione o endereco de entrega.
   *
   */
   
   string result;
   
   for(auto it = m_produtos.begin(); it != m_produtos.end(); it++)
    {
      result += (*it)->descricao();
      result += "\n";
    }
    
    result += ("Endereco: " + m_endereco);
   
  return result;
}