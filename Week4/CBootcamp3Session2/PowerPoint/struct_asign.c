#include <stdio.h>
#include <string.h>

struct student {
    char name[20];
    char student_id[11]; // Assuming up to 10 digits.
    unsigned mark;
};

int main() {
    struct student new_student;

    strcpy(new_student.name, "Name Surname");
    strcpy(new_student.student_id, "13902178");

    printf("Student Name: %s\n", new_student.name);
    printf("Student ID: %s\n", new_student.student_id);
    printf("Final Mark: %u\n", new_student.mark);

    return 0;
}