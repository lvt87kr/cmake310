#include <mimalloc.h>
#include <stdio.h>

int main(void) {
    int *ptr;
    
    printf("build_exec: calling `mi_malloc()` and `mi_free()`...\n");
    
    ptr = mi_malloc(sizeof(int)); 
    mi_free(ptr);
    
    return 0;
}