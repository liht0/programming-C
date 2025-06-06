#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Введите размер вектора: ");
    scanf("%d", &n);
    
    // Генерация вектора
    int *vector = malloc(n * sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        vector[i] = rand() % 100;
    }

    // Запись в файл
    FILE *file = fopen("input.txt", "w");
    for(int i = 0; i < n; i++) {
        fprintf(file, "%d\n", vector[i]);
    }
    fclose(file);
    
    // Преобразование чисел
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int num;
    while(fscanf(in, "%d", &num) != EOF) {
        if(num % 5 == 0 && num % 7 == 0) fprintf(out, "ПЯТЬСЕМЬ\n");
        else if(num % 5 == 0) fprintf(out, "ПЯТЬ\n");
        else if(num % 7 == 0) fprintf(out, "СЕМЬ\n");
        else fprintf(out, "%d\n", num);
    }
    fclose(in);
    fclose(out);
    
    // Дальнейшая реализация (формирование матрицы, подсчет сумм)
    // ...

    return 0;
}







#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n;
    printf("Введите размер вектора: ");
    scanf("%d", &n);
    
    // Генерация вектора
    int *vector = malloc(n * sizeof(int));
    srand(time(NULL));
    for(int i = 0; i < n; i++) {
        vector[i] = rand() % 100;
    }

    // Запись в файл
    FILE *file = fopen("input.txt", "w");
    for(int i = 0; i < n; i++) {
        fprintf(file, "%d\n", vector[i]);
    }
    fclose(file);
    
    // Преобразование чисел
    FILE *in = fopen("input.txt", "r");
    FILE *out = fopen("output.txt", "w");
    int num;
    while(fscanf(in, "%d", &num) != EOF) {
        if(num % 5 == 0 && num % 7 == 0) fprintf(out, "ПЯТЬСЕМЬ\n");
        else if(num % 5 == 0) fprintf(out, "ПЯТЬ\n");
        else if(num % 7 == 0) fprintf(out, "СЕМЬ\n");
        else fprintf(out, "%d\n", num);
    }
    fclose(in);
    fclose(out);
    
    // Дальнейшая реализация (формирование матрицы, подсчет сумм)
    // ...

    return 0;
}
