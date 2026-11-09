#include "array_process.h"

int find_position(int *a, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) sum += a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] < sum / 3.0) return i;
    }
    return -1;
}