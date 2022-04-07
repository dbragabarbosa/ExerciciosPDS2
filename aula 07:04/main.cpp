#include <iostream>

void Trocar(float a, float b)  //Exemplo de função que troca dois valores
{
    float aux = a;
    a = b;
    b = aux;
}

void Trocar(float* ptr_a float* ptr_b)  //FUNCAO USANDO PONTEIROS
    float aux = (*ptr_a);
    (*ptr_a) = (*ptr_b);
    (*ptr_b) = aux;
}

void Trocar(float& a float& b)  //FUNCAO PASSANDO OS VALORES POR REFERÊNCIA
{
    float aux = (*ptr_a);
    (*ptr_a) = (*ptr_b);
    (*ptr_b) = aux;
}

int main()
{

// PONTEIROS

    float x = 4.5;
    float* ptr = &x;   // PONTEIRO PARA FLOAT
    //Poderia ter feito tambem: float *ptr = &x;

    std::cout << ptr << std::endl;  //Retorna o conteúdo de ptr, que é o endereço de memória de X

    (*ptr) = -2.64; // Para me referir à variável referenciada pelo ponteiro ptr 

    std::cout << x << std::endl;

    // A vantagem de se usar ponteiros por no permitir acessar qualquer parte da memória e a utilizar como quiser
    // 

    
    // Se eu tentar fazer 
    //float* ptr = (float*)0xfa234783;
    // Vai dar erro 'Segmentation fault (core dumped)'
    // Pois estou tentando acessar uma posição de memória inválida 



    // MOTIVOS PARA USAR PONTEIRO

// Implementei a função de troca de dois valores

    float x = 4.5;
    float y = -32;
    Trocar(x,y);    // Nao dá certo pois C++ utiliza passagem por cópia 
    std::cout << x << std::endl << y << std::endl; 

    Trocar(&x, &y);    // AGORA VAI DAR CERTO POIS ESTOU USANDO PONTEIROS 
    std::cout << x << std::endl << y << std::endl; 

    // AGORA VOU PASSAR OS VALORES POR REFERÊNCIA 
    Trocar(x, y);
    std::cout << &x << std::endl << &y << std:: endl;








    return 0;
}