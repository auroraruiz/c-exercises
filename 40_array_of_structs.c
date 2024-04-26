#include <stdio.h>
#include <string.h>

typedef char user[25];

typedef struct 
{
    char name[25];
    float gpa;
} Student;

int main(){
    printf("40. Array of structs");
    printf("\n");
    printf("--------------------\n");

    Student student1  = {"Spongebob", 3.0};
    Student student2  = {"Patrick", 2.5};
    Student student3  = {"Sandy", 4.0};
    Student student4  = {"Squidward", 2.0};

    Student students[4] = {student1, student2, student3, student4};
    size_t students_size = sizeof(students)/sizeof(students[0]);
    
    for (int i = 0; i< students_size; i++){
        printf("%-12s\t", students[i].name);
        printf("GPA: %.2f\n", students[i].gpa);
    }

    printf("--- Done ---");
    return 0;
}