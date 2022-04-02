// No media.cpp vamos implementar a função 

#include "media.h"
#include "soma.h"

float media(int n, float v[])
{
    return soma(n, v) / n;
}