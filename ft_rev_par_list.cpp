#include "vectors.h"
void ft_rev_par_list(vector <int> &mass)
{
    int len = mass.size();
    int k = 2;
    if(len%2 == 0)
        k = 1;
    for(int i = 0; i < len-k; i+=2)
    {
        int tmp = mass[i];
        mass[i] = mass[i+1];
        mass[i+1] = tmp;
    }
}
