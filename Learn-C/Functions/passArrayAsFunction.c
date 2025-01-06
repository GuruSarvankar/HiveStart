#include<stdio.h>

void myFunction(int examMarks[], int arrayLength) {
    int i;
    float sumMarks = 0;  // Initialize sumMarks
    printf("My marks are: ");
    for (i = 0; i < arrayLength; i++) {
        printf("%d", examMarks[i]);  // Display mark
        if (i < arrayLength - 1) {
            printf(", ");  // Add a comma except for the last element
        }
        sumMarks += examMarks[i];  // Sum the marks
    }
    printf("\nTotal Marks: %.2f\n", sumMarks);  // Print total marks outside the loop
}

int main() {
    int examMarks[] = {10, 20, 30, 40, 50};
    int arrayLength = sizeof(examMarks) / sizeof(examMarks[0]);  // Calculate array length
    myFunction(examMarks, arrayLength);
    return 0;
}
