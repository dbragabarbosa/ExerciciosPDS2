// No arquivo .cpp a gente implementa a função 

#include "soma.h"

float soma(int n, float v[])
{
    float s = 0;
    for (int i = 0; i < n; i++)
    {
        s = s + v[i];
    }
    return s;
}