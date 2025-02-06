#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("bt01.txt","r");
    if (fptr == NULL) {
        printf("Không thể mở file bt01.txt\n");
        return 1;
    }
    int c = fgetc(fptr); 


        printf("Ký tự đầu tiên trong file là: '%c'\n", c);

    fclose(fptr);
    
    return 0;
}
