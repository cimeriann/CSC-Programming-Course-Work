#include <stdio.h>
void staticArrayInit(void);
void automaticArrayInit(void);

int main (void){
    puts("first call to each function");
    staticArrayInit();
    automaticArrayInit();

    puts("Second call to each function");
    staticArrayInit();
    automaticArrayInit();
}
void staticArrayInit(void){
    static int array1[3];
    puts("\n Values on entering staticArrayInit");
    // output content of array 1
    for (size_t i = 0; i <= 2; i++ ){
        printf("array1[%u] = %d ", i, array1[i]);
    };
    puts("\n Values on exiting staticArrayInit");
    //modify and output contents of array1
    for (size_t i = 0; i <= 2; i++){
        printf("array1[%u] = %d ", i, array1[i] += 5);
        puts("");
    }
}

void automaticArrayInit(void){
    int array2[3] = {1, 2, 3};

    puts("\n\nValues on entering automaticArrayInit");

    for (size_t i = 0; i <= 2; ++i){
        printf("array2[%u] = %d   ", i, array2[i]);
    }

    puts("\n Values on exiting staticArrayInit");

    for (size_t i = 0; i <= 2; i++){
            printf("array2[%u] = %d ", i, array2[i] += 5);
        }
    puts("");
}