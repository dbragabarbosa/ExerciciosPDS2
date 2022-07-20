#include <regex>
#include <math.h>
#include <string>
#include <vector>
#include <sstream>

#include "LineProcessor.hpp"

void LinePrinter::processaLinha(const std::string &str) {
  std::cout << str << std::endl;
}

bool ContadorPopRural::linhaValida(const std::string &str) const {
  // Neste exemplo usaremos expressoes regulares para verificar se uma linha
  // eh valida ou nao.
  //
  // Esta expressao regular eh formada por cinco partes. Cada uma dessas
  // partes eh um dos tres tipos de padrao regular abaixo:
  //
  // \\w+ eh qualquer palavra com um ou mais digitos, letras e sublinhas (_)
  // \\s* eh qualquer sequencia de zero ou mais espacos (inclui tab)
  // \\d+ eh qualquer sequencia de um ou mais digitos
  std::regex regularExpr("\\w+\\s*\\d+\\s*\\d+");

  // A funcao regex_match vai retornar verdadeiro se a string str casa-se com
  // a expressao regular que acabamos de criar:
  return std::regex_match(str, regularExpr);
}

void ContadorPopRural::processaLinha(const std::string &str) {
  //
  // Em geral eh mais facil ler dados de uma string se a string eh transformada
  // em um objeto do tipo stringstream:
  std::stringstream ss(str);
  //
  // Iremos ler os dados da string nestas tres variaveis abaixo:
  std::string nomePais;
  unsigned populacao, percUrbana;
  //
  // Como sabemos que a linha contem string int int, podemos fazer a leitura
  // facilmente usando o operador de streaming:
  ss >> nomePais >> populacao >> percUrbana;
  //
  // Note que precisamos arredondar o valor que serah impresso. O arredondamento
  // serah feito via a funcao floor. Ou seja, decimais serao sempre
  // arredondados para baixo:
  unsigned popRural = floor(populacao - (populacao * (percUrbana/100.0)));
  //
  // Uma vez encontrados os valores que precisam ser impressos, seguimos o
  // modelo do enunciado do exercicio:
  std::cout << popRural << " pessoas vivem no campo no " << nomePais <<
    std::endl;
}

bool ContadorNumNaturais::linhaValida(const std::string &str) const 
{
  // TODO: Implemente este metodo
  
  std::regex regularExpr("(\\s*(?:\\d\\s*)*)");
  
  return std::regex_match(str, regularExpr);
}

void ContadorNumNaturais::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:
  
  std::stringstream in(str);
  
  int val = 0;
  int sum = 0;
  
  while(in >> val)
  {
      sum = sum + val;
  }
  
  std::cout << sum;
  std::cout << std::endl;

}

bool LeitorDeFutebol::linhaValida(const std::string &str) const 
{
  // TODO: Implemente este metodo
  
  std::regex regularExpr(" *[A-Za-z]+ +[0-9]+ +[A-Za-z]+ +[0-9]+");
  
  return std::regex_match(str, regularExpr);
}

void LeitorDeFutebol::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:
  
  int golsCasa;
  int golsFora;
  std::string timeCasa;
  std::string timeFora;
  
  std::stringstream in(str);
  in>>timeCasa;
  in>>golsCasa;
  in>>timeFora;
  in>>golsFora;
  
  if(golsCasa == golsFora)
  {
      std::cout << "Empate" << std::endl;
  } else 
  {
      std::cout << "Vencedor: " << ((golsCasa > golsFora) ? timeCasa : timeFora) << std::endl;
  }
  
}

void ContadorDePalavras::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:
  
  int x = 0;
  
  std::stringstream in(str);
  std::string aux;
  
  while(in >> aux)
  {
      x++;
      //std::cout << x << std::endl;
  }

    std::cout << x << std::endl;
  
}

bool InversorDeFrases::linhaValida(const std::string &str) const 
{
  // TODO: Implemente este metodo
  
    std::regex regularExpr("([a-zA-Z](?:\\s*[a-zA-Z])*)");
  
    return std::regex_match(str, regularExpr);
}

void InversorDeFrases::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:
  
  std::string splt;
  std::stringstream in(str);
  std::vector<std::string> all;
  
  while(in >> splt)
  {
      all.push_back(splt);
  }
  
  int i = 0;
  i = (all.size() - 1);
  
  for(i; i >= 0; i--)
  {
      std::cout << all[i] << " ";
  }
  
  std::cout << std::endl;
  
}

bool EscritorDeDatas::linhaValida(const std::string &str) const 
{
//   std::string dateFormat = "\\s*\\d\\d?/\\d\\d?/\\d{4}";
  // TODO: Implemente este metodo
  // Note que você pode usar uma expressao regular como:
  // "\\s*\\d\\d?/\\d\\d?/\\d{4}" para saber se a linha eh valida:
  
    return std::regex_match(str,std::regex("\\s*\\d\\d?/\\d\\d?/\\d{4}"));
  
}

void EscritorDeDatas::processaLinha(const std::string &str) 
{
  // TODO: Implemente este metodo:
  // Lembre-se que as iniciais dos meses sao:
  // "Jan", "Fev", "Mar", "Abr", "Mai", "Jun", "Jul", "Ago", "Set", "Out",
  // "Nov", e "Dez".
  
    std::stringstream in(str); 
    std::string mon;
    getline(in,mon,'/'); getline(in,mon,'/');
  
    int m = stoi(mon);
    if(m == 1)
    {
        mon = "Jan";
    }
    
    if(m == 2)
    {
        mon = "Fev";
    }
    
    if(m == 3)
    {
        mon = "Mar";
    }
  
    if(m == 4)
    {
        mon = "Abr";
    }
  
    if(m == 5)
    {
        mon = "Mai";
    }
  
    if(m == 6)
    {
        mon = "Jun";
    }
  
    if(m == 7)
    {
        mon = "Jul";
    }
  
    if(m == 8)
    {
        mon = "Ago";
    }
  
    if(m == 9)
    {
        mon = "Set";
    }
  
    if(m == 10)
    {
        mon = "Out";
    }
  
    if(m == 11)
    {
        mon = "Nov";
    }
  
    if(m == 12)
    {
        mon = "Dez";
    }
    
    std::cout << mon << std::endl;
  
}
