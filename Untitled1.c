#include <stdio.h>

int main() {
    int numSubjects;

    // Take the number of subjects as input
    printf("Enter the number of subjects: ");
    scanf("%d", &numSubjects);

    // Declare an array to store GPAs
    float gpaArray[numSubjects];

    // Take GPA input for each course
    for (int i = 0; i < numSubjects; ++i) {
        printf("Enter GPA for Subject %d: ", i + 1);
        scanf("%f", &gpaArray[i]);
    }

    // Calculate average GPA
    float sum = 0;
    for (int i = 0; i < numSubjects; ++i) {
        sum += gpaArray[i];
    }
    float average = sum / numSubjects;

    // Print the average GPA
    printf("\nAverage GPA: %.2f\n", average);

    // Print GPA for each course
    printf("\nIndividual GPAs:\n");
    for (int i = 0; i < numSubjects; ++i) {
        printf("Subject %d: %.2f\n", i + 1, gpaArray[i]);
    }

    return 0;
}
