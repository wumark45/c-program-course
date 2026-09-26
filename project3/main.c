#include "my_array.h"
#include "my_sorting.h"

int main( int argc, char *argv[])
{
    int arr[5]= {1,7,10,2,8};
    print_array(arr,5);
    bubble_sort(arr,5);
    print_array(arr,5);
    return 0;
}
