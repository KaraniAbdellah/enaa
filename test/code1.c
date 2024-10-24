#include <stdio.h>

// Declaration
typedef struct Etudiant {
    int code;
    int age;
    char nom[30];
} Etudiant;


int main() {
    // Creation
    Etudiant e1 = {10, 20, "Ahmed"};

    e1.code = 100;

    scanf("%d", &e1.code);

    printf("Code : %d", e1.code);


    return 0;
}





























/*
    // Declaration
    typedef struct Etudiant {
        int code;
        int age;
        char nom[20];
        char prenom[20];
    } Etudiant;
*/







