#include <stdio.h>

int main() {
    char line[1000];
    FILE *fptr = fopen("bt01.txt", "r");

    if (fptr == NULL) {
        printf("loi ko mo dc file\n");
        return 1;
    }

    if (fgets(line, sizeof(line), fptr) != NULL) {
        printf("dong dau tien la  %s", line);
    } else {
        printf("file ko co du lieu\n");
    }

    fclose(fptr);

    return 0;
}
