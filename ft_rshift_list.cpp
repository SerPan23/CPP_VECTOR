#include "vectors.h"
void ft_rshift_list(vector <int> &mass)
{
    int len = mass.size();
    int tmp = mass[0];
    for(int i = 1; i < len; i++)
    {
        //cout << mass[i] << " " << tmp << " || ";
        int t = mass[i];
        mass[i] = tmp;
        tmp = t;
        //cout << mass[i] << " " << tmp << endl;
    }
    mass[0] = tmp;
}
