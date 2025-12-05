#include <stdio.h>

int main() {
    int n = 30; 

    for (int i = 1; i <= n; i++) {

        char filename[20];
        sprintf(filename, "%d.c", i); 

        FILE *fp = fopen(filename, "w");

        if (fp == NULL) {
            printf("Error%s\n", filename);
            continue;
        }

        fprintf(fp,
            "#include <stdio.h>\n\n"
            "int main() {\n\n"
            "    return 0;\n"
            "}\n"
        );

        fclose(fp);
    }

    printf("successfull!\n");
    return 0;
}
