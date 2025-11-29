#include <stdio.h>
#include <string.h>

// Define a structure named 'Student'
struct Student {
    int roll_no;
    char name[50];
    float marks;
};

// Function to display student data
void display_student(struct Student *s_ptr) {
    // Access members using the -> operator (pointer to struct)
    printf("\n--- Student Details ---\n");
    printf("Roll No: %d\n", s_ptr->roll_no);
    printf("Name: %s\n", s_ptr->name);
    printf("Marks: %.2f\n", s_ptr->marks);
    printf("-------------------------\n");
}

int main() {
    // 1. Declare and initialize a struct variable
    struct Student student1 = {101, "Alice Johnson", 85.50};

    // 2. Declare a pointer to the struct
    struct Student *ptr_student1;

    // 3. Assign the address of the struct variable to the pointer
    ptr_student1 = &student1;

    // Initial display
    printf("Initial Data:\n");
    display_student(ptr_student1);

    // 4. Modify data using the -> operator (pointer to struct)
    // The syntax 'ptr_student1->member' is equivalent to '(*ptr_student1).member'
    ptr_student1->marks = 92.75;
    ptr_student1->roll_no = 105;
    // To modify the string:
    strcpy(ptr_student1->name, "Alice Smith");

    // Display modified data
    printf("\nData After Modification:\n");
    display_student(ptr_student1);

    return 0;
}