#include <stdio.h>

int binary_search(int left, int right, int val, int array[]);

int main()
{
int nb_elements;
int i;
int value;

printf("Input the number of elements: ");
scanf("%i", &nb_elements);
int array[500];

int left = 0
int right = nb_elements;

for(i=0; i<nb_elements ; i++)
{
    printf("Array element number %i: ", i);
    scanf("%i", &array[i]);
}

printf("\nThe value to search: ");
scanf("%i", &value);

sort_array(array);

int result = binary_search(left,right,value,array);

if(result == -1)
    printf("The value does not exist.");
else
    printf("The value is on position %i.", result);

}

int binary_search(int l, int r, int val, int array[]){
    int mid;
    mid = (l + r) / 2;
    if(l > r )
        return -1;
    if(array[mid] < val)
        binary_search(mid + 1, r, val, array);
    else
        if(array[mid] > val)
            binary_search(l, mid - 1, val, array);
        else
            return mid;
}

