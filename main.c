#include <stdio.h>
#include "array_io.h"
#include "array_process.h"

int main() {
#elif defined(__linux__)
    printf("Running on Linux\n");
#else
    printf("Unknown OS\n");
#endif
    int a[30];
    printf("Enter 30 elements:\n");
    input_array(a, 30);
    printf("Array: ");
    print_array(a, 30);
    int pos = find_position(a, 30);
    if (pos == -1)
        printf("No element found\n");
    else
        printf("Position: %d\n", pos);
    return 0;
}