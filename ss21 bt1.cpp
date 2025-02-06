#include <stdio.h>

int main() {
    char userInput[1000]; 

    printf("nhap chuoi bat ky  ");
    fgets(userInput, sizeof(userInput), stdin);  

    FILE *fptr = fopen("bt01.txt", "w");
    if (fptr == NULL) {
        printf("loi file !\n");
        return 1;
    }

    fputs(userInput, fptr);

    fclose(fptr);
    printf("da ghi thanh cong!\n");
    return 0;
}
