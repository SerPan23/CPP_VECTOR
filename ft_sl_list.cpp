#include "vectors.h"
int ft_sl_list(const vector <int> mass)
{
    int kol = 0;
    for(int i = 0; i < mass.size()-1; i++)
    {
        if(mass[i] < mass[i+1])
            kol++;
    }
    return kol;
}
