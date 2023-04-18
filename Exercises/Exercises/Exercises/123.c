#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv[]) {
    float result_sum;
    int i;
    for (i = 0; i < argc - 1; i++) {
        result_sum = atof(argv[i + 1]) + result_sum;
    }
    for (i = 1; argv[i]; i++) {
        result_sum = atof(argv[i]) + result_sum;
    }
    printf("%f\r\n", result_sum);
}