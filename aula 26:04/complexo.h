#ifndef COMPLEXO_H
#define COMPLEXO_H

// struct Complexo
// {
//     // PARA PROIBIR QUE QUALQUER MÉTODO OU FUNÇÃO DE FORA ACESSE ESSES DADOS :
//     private:
//         double real_;  // DADOS DO MEU TAD
//         double imag_;

//     public:      // PARA REPRESENTAR QUAIS MÉTODOS PODEM SER ACESSADOS FORA DESSE TAD 
//         Complexo(double a, double b)  // CRIANDO UM MÉTODO CONSTRUTOR.  EM C++, O CONSTRUTOR TEM O MESMO NOME DA CLASSE
//         {
//             real_ = a;   //  O MÉTODO CONSTRUTOR SÓ PODE SER CHAMADO NA CONSTRUÇÃO DE NOSSOS DADOS
//             imag_ = b;
//         }  
//         double real(return real_);  // MÉTODO QUE, INDEPENDENTE DE COMO ESTIVER REPRESENTADO OS DADOS DO MEU TAD, VAI RETORNAR SUA PARTE REAL
//         double imag(return imag_);  //     -   -  -     -        -     -  -       -         -        -     -    - -      -    -   -    - IMAGINÁRIA

//     Complexo conjugado();   //ESSA FUNÇÃO NÃO RECEBE PARÂMETRO, POIS ELA JÁ É CHAMADA POR ALGUM NÚMERO COMPLEXO ESPECIFICO 
// };

// #endif   

// A FUNÇÃO MAIN NUNCA VAI ACESSAR DIRETAMENTE OS DADOS/ATRIBUTOS DO MEU TAD
// A FUNÇÃO MAIN SÓ VAI RECEBER OS MÉTODOS DO MEU TAD, E A PARTIR DAÍ É POSSÍVEL DELE ACESSAR OS DADOS
// ISSO NOS DÁ LIBERDADE PARA MUDAR O TAD DA FORMA QUE QUISERMOS NA HORA QUE QUISER 



// POR EXEPLO, AGORA VOU MUDAR A IMPLEMENTAÇÃO 
// E CONTINUA TUDO FUNCIONANDO, SEM EU TER QUE MODIFICAR NADA NO ARQUIVO MAIN


class Complexo    // QUANDO COMEÇAMOS A USAR TÉCNICAS MAIS AVANÇADAS, TROCAMOS O NOME DE STRUCT PARA CLASS 
{
    private: 
        double v[2];
    public: 
        Complexo(double a, double b);
        Complexo
        double real(); 
        double imag();
        Complexo conjugado();
        Complexo simetrico();
        Complexo somar(Complexo k);
}



