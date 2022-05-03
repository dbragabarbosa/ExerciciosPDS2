//




// pilha e heap são regiões de memória diferentes 
// 
// quando uma função começa, todas as variáveis são empilhadas, e quando ela termina, as variáveis são desempilhadas
// isso vira um problema, pois eu preciso saber do tamanho de todas as variáveis antes dele ser executado, e isso pode ser um problema, para vetores por exemplo
// então aprendemos a alocação dinâmica, que acontece em tempo de execução
// aprendemos isso na aula passada e vamos continuar agora 
// fazemos a alocação dinâmica usando NEW e DELETE
// 




#include <iostream>

using namespace std;


//
int main()
{
    int n;
    cin >> n;
    float* v = new float[n];

    // quando vc usa o NEW, o sistema vai alocar pra vc N caixas de float, no heap, e retorna o endereço de memória para onde ele alocou, diferente da pilha que é utilizada para variáveis alocadas antes da execução
    // a variável N e V saem da mamória automaticamente 

    delete [] v;  // o programa está deletando o CONTEÚDO de V 
    // mas eu quero devolver todas as caixinhas a frente do endereço de memória apontado, que no caso é a primeira posição de V
    // por isso eu coloco []
    //

    return 0;
}



//
//vamos fazer uma lista encadeada
// para alocar cada elemento vamos precisar de duas 'caixinhas' de memória 
// uma caixinha guarda o valor e a próxima caixinha guarda o endereço de memória do próximo elemento
// dessa forma, quando eu quero alocar um novo elemento, eu não preciso me preocupar como me preocupava, se tinha algo na frente do meu vetor na minha memória por exemplo
// eu passo a alocar os novos elementos em qualquer lugar da memória e coloco seu endereço de memória ao lado do último elemento alocado
// eu posso agora também apagar qualquer elemento sem ter que mudar muito os outros 
//
