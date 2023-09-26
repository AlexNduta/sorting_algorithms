#include "sort.h"

/**
*buble_sort - sorts elements in a list using bublesort algo
*
*@array: The input array to be sorted
*@size: The size of of our input arra
#include "sort.h"
#include <stdio.h>

*/

void bubble_sort(int *array, size_t size)
{
size_t i = 0, j, flagging, e_mp;

if (array == NULL || size == 0)
return;

do {
flagging = 0;
j = 0;

do {
if (array[j] > array[j + 1])
{
e_mp = array[j];
array[j] = array[j + 1];
array[j + 1] = e_mp;
flagging = 1;
print_array(array, size);
}
j++;
} while (j < size - i - 1);

i++;

} while (flagging);
}
