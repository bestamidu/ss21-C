#include <stdio.h>

int main() {
    char userInput[1000];
    printf("nhap chuoi can them vo filee: ");
    fgets(userInput, sizeof(userInput), stdin);

  FILE *fptr= fopen("bt01.txt", "a");
    if (fptr == NULL) {
        printf("loi ko mo duoc file");
        return 1;
    }
    fputs(userInput, fptr);
    fclose(fptr);

    printf("da them thanh cong\n");
    return 0;
}
