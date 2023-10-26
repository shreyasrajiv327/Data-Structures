#include <stdio.h>
#include <stdlib.h>

int main() {
    int arrsize;
    
    printf("How many elements do you want?\n");
    scanf("%d", &arrsize);
    
    // If malloc is not able to allot, segmentation fault
    int *imarray1 = (int *)malloc(arrsize * sizeof(int)); // fix allocation size
    printf("Size allocated is %d \n", arrsize * sizeof(int)); // fix output
    printf("address in the pointer is %p \n", imarray1);
    
    if (imarray1 == NULL) {
        printf("%d bytes was not allotted \n", arrsize * sizeof(int)); // fix output
        return(1);
    } else {
        printf("%d B allotted \n", arrsize * sizeof(int));
    }
    
    printf("%d is the first element; its address is %p \n", imarray1[0], &imarray1[0]); // fix output
    printf("%d is the last element; its address is %p \n", imarray1[arrsize-1], &imarray1[arrsize-1]); // fix output
    
    printf("\n**Freeing First Malloc-Note Address being reused in second malloc***Comment free() line & see the diff \n");
    free(imarray1);
    
    printf("\n*****************Second Malloc*************");
    
    int *imarray2 = (int *)malloc(arrsize * sizeof(int));
    
    if (imarray2 == NULL) {
        printf("%d bytes was not allotted \n", arrsize * sizeof(int));
        return 1; // add return value for main function
    } else {
        printf("%d B allotted\n", arrsize * sizeof(int));
    }
    
    for (int i = 0; i < arrsize; i++) {
        imarray2[i] = 100*i;
    }
    for (int i = 0; i < arrsize; i++) {
        printf("%d is the %dth element; its address is %p\n", imarray2[i], i, &imarray2[i]);
    }
    
    return 0; // add return value for main function
}
