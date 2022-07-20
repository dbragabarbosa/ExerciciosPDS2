#include "google_password.hpp"

#include <iostream>

void GooglePassword::insert(const std::string& url,
                            const std::string& login,
                            const std::string& password) {
  // TODO: Implemente este metodo
  /**
   * Lembre-se que as credenciais so podem ser inseridas com as seguintes
   * condicoes:
   * Condicao 1: A senha nao pode ter a seguencia '123456'.
   * Condicao 2: A senha nao pode ter mais do que 50 caracteres (no maximo 50).
   * Condicao 3: A senha nao pode ter menos do que 6 caracteres (no minimo 6).
   * Condicao 4: A senha nao pode ter caracteres em branco ' '.
   *
   * Exemplos de senhas invalidas:
   * 123456
   * test_123456
   * 123456_test
   * test_123456_test
   * senha test
   */
   
    if(!checkPassword(password))
    {
        return;
    }
    
    // Usuario x1(login, password);
    
    // cout << x1.getLogin() << "  " << x1.getPassword() << endl;
    
    // m_passwords[url] = x1;
    
    m_passwords.insert(make_pair(url, Usuario(login, password) ));
   
}

void GooglePassword::remove(const std::string& url) 
{
  // TODO: Implemente este metodo
  
  m_passwords.erase(url);
}


void GooglePassword::update(const std::string& url,
                            const std::string& login,
                            const std::string& old_password,
                            const std::string& new_password) {
  // TODO: Implemente este metodo
  /**
   * Este metodo nao pode inserir novas credenciais, apenas atualizar as
   * ja existentes. Alem disso, o login e/ou senha do usuario so podem ser
   * atualizados se a senha armazenada no sistema for igual a old_password.
   * Nao esqueca de verificar se o novo password tambem e valido.
   */
   
    if(!checkPassword(new_password))
    {
        return;
    }
    
    if(m_passwords.count(url))
    {
        if((m_passwords.at(url)).getPassword() == old_password)
        {
            m_passwords.at(url).setPassword(new_password);
            m_passwords.at(url).setLogin(login);
        }
    }
   
}

void GooglePassword::printPasswords() 
{
  // TODO: Implemente este metodo
  /**
   * Exemplo de saida:
   * 3
   * aaa.site.com: login and password
   * www.site.com: login and password
   * zzz.site.com: login and password
   *
   */
   
   cout << m_passwords.size() << endl;
   
   for(auto it = m_passwords.begin(); it != m_passwords.end(); it++)
   {
       cout << (*it).first << ": " << (*it).second.getLogin() << " and " << (*it).second.getPassword() << endl;
   }
   
}

bool GooglePassword::checkPassword(const std::string& password) const 
{
  // TODO: Implemente este metodo
  
    if(password.size() > 50)
    {
        return false;
    }
    else if(password.size() < 6)
    {
        return false;
        
    }
    else if(password.find(' ') <= 50)
    {
        return false;
    }
    else if(password.find('1') <= 50 && password.find('2') <= 50 && password.find('3') <= 50 && password.find('4') <= 50 && password.find('5') <= 50 && password.find('6') <= 50)
    {
        return false;
    }
    else 
    {
        return true;
    }
  
}

