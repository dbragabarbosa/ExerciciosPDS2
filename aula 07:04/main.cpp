#include <iostream>

void Trocar(float a, float b)  //Exemplo de função que troca dois valores
{
    float aux = a;
    a = b;
    b = aux;
}



int main()
{

// PONTEIROS

    float x = 4.5;
    float* ptr = &x;   // PONTEIRO PARA FLOAT

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



    float x = 4.5;
    float y = -32;
    Trocar(x,y);
    cout << x << endl << y << endl;

    return 0;
}