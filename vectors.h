#ifndef VECTORS_H_INCLUDED
#define VECTORS_H_INCLUDED
#include <iostream>
#include <vector>
using namespace std;

void ft_even_index_list(const vector <int> mass, vector <int> &mass2);
void ft_even_parts_list(const vector <int> mass, vector <int> &mass2);
int ft_positive_list(const vector <int> mass);
int ft_sl_list(const vector <int> mass);
bool ft_same_parts_list(const vector <int> mass);
void ft_rev_list(vector <int> &mass);
void ft_rev_par_list(vector <int> &mass);
void ft_rshift_list(vector <int> &mass);
void ft_super_shift_list(vector <int> &mass, int n);

#endif // VECTORS_H_INCLUDED
