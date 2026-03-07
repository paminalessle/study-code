#include <stdio.h>

int main() {

    int new_file_number = 12;
    char filename[50];

    sprintf(filename, "%d_simulation_data.txt", new_file_number);
    FILE *fptr;

    fptr = fopen(filename, "w");
    if (fptr == NULL) {
        printf("Error creating file");
    }

    fclose(fptr);



    return 0;
}