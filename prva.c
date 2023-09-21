#include <stdio.h>
#include <stdlib.h>

int main() {
    char *ptr = malloc(0);
    if (ptr == NULL) {
        printf("malloc(0) returned NULL\n");
    } else {
        printf("malloc(0) returned a non-NULL pointer\n");
        *ptr = 'c';
        // ptr++;
        // ptr++;
        // *(ptr + 10) = 'd';
        // printf("%s", ptr + 10);
        // free(ptr);  // Don't forget to free the allocated memory
    }
    return 0;
}