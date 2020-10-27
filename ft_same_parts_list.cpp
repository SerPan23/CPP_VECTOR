#include "vectors.h"
bool ft_same_parts_list(const vector <int> mass)
{
    bool f = 0;
    for(int i = 0; i < mass.size()-1; i++)
    {
        if((mass[i] >= 0 && mass[i+1] >= 0) || (mass[i] < 0 && mass[i+1] < 0))
            f = 1;
    }
    if(f)
        return true;
    return false;
}
