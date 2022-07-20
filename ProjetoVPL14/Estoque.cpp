#include <string>

#include <iostream>
#include <map>

#include "Estoque.hpp"

using namespace std;

void Estoque::add_mercadoria(const std::string& mercadoria, unsigned int qtd) 
{
  // TODO
  
    if(meuEstoque.count(mercadoria))
    {
        meuEstoque.at(mercadoria) += qtd;
    }
    else 
    {
        meuEstoque.insert(make_pair(mercadoria, qtd));
    }
}

void Estoque::sub_mercadoria(const std::string& mercadoria, unsigned int qtd) 
{
  // TODO
  
    if(meuEstoque.count(mercadoria))
    {
        if(meuEstoque.at(mercadoria) < qtd)
        {
            cout << mercadoria << " insuficiente";
        }
        else
        {
            meuEstoque.at(mercadoria) -= qtd;
        }
    }
    else 
    {
        cout << mercadoria << " inexistente";
    }
  
}

unsigned int Estoque::get_qtd(const std::string& mercadoria) const 
{
  // TODO
  
    if(meuEstoque.count(mercadoria))
    {
        return meuEstoque.at(mercadoria);
    }
    else 
    {
        return 0;
    }
  
}

void Estoque::imprime_estoque() const 
{
  // TODO
  
    for(auto it = meuEstoque.begin(); it != meuEstoque.end(); it++)
    {
        cout << (*it).first << ", " << (*it).second << endl;
    }
  
}

Estoque& Estoque::operator += (const Estoque& rhs) 
{
  // TODO
//   return *this;


    // for(auto it = meuEstoque.begin(); it != meuEstoque.end(); it++)
    // for(auto it = rhs.begin(); it != rhs.end(); it++)

    // {
        // rhs.add_mercadoria( (*it).first, (*it).second);
        // meuEstoque.add_mercadoria( (*it).first, (*it).second );
    // }
    
    Estoque& aux = *this;
    
    for(auto it = rhs.meuEstoque.begin(); it != rhs.meuEstoque.end(); it++) 
    {
        
        if(aux.meuEstoque.count( (it)->first ))
        {
            aux.meuEstoque.at( (it)->first ) += (it)->second;
        }
        else 
        {
            aux.meuEstoque.insert(make_pair((it)->first, (it)->second));
        }
        
    }
    
    return aux;

}

Estoque& Estoque::operator -= (const Estoque& rhs) 
{
  // TODO
  // return *this;
  
    Estoque& a = *this;
  
    for(auto it = rhs.meuEstoque.begin(); it != rhs.meuEstoque.end(); it++) 
    {
        
        if(a.meuEstoque.count( (it)->first ) )
        {
            a.meuEstoque.at( (it)->first ) -= (it)->second;
        }
        
    }
  
}

bool operator < (Estoque& lhs, Estoque& rhs) 
{
  // TODO
  
  //return false;
  
    for(auto it = lhs.meuEstoque.begin(); it != lhs.meuEstoque.end(); it++) 
    {
        if( rhs.meuEstoque.count( (it)->first ) )
        {
            if( rhs.meuEstoque.at( (it)->first ) > (it)->second )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else 
        {
            return false;
        }
    }
    
}

bool operator > (Estoque& lhs, Estoque& rhs) 
{
  // TODO
  
  //return false;
  
  
    for(auto it = rhs.meuEstoque.begin(); it != rhs.meuEstoque.end(); it++) 
    {
        if( lhs.meuEstoque.count( (it)->first ) )
        {
            if( lhs.meuEstoque.at( (it)->first ) > (it)->second )
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        else 
        {
            return false;
        }
    }
  
}






