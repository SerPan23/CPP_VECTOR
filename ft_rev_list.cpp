#include "vectors.h"
void ft_rev_list(vector <int> &mass)
{
    int len = mass.size()-1;
    for(int i = 0; i < len/2+1; i++)
    {
        int tmp = mass[i];
        mass[i] = mass[len-i];
        mass[len-i] = tmp;
    }
}
