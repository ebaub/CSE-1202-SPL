#include <stdio.h>

/*
1. Find the average mark of the students
2. Search for a specific student by their id
3. Search for a specific student by their name
4. Find number of students who is admitted in 2024 and has obtained more than 65 marks'
5. Find top 5 students
*/



struct Student
{
    char name[50];
    int id;
    int semester;
    int batch;
    int mark;
};

int main()
{
    struct Student students[20] = {
        {"Rahim", 101, 1, 2024, 85},
        {"Karim", 102, 2, 2023, 78},
        {"Sakib", 103, 3, 2022, 92},
        {"Hasan", 104, 4, 2022, 67},
        {"Nusrat", 105, 1, 2024, 89},
        {"Sumaiya", 106, 2, 2023, 95},
        {"Tanvir", 107, 3, 2022, 73},
        {"Farhan", 108, 4, 2022, 81},
        {"Ayesha", 109, 1, 2024, 88},
        {"Mehedi", 110, 2, 2023, 76},
        {"Rifat", 111, 3, 2022, 90},
        {"Jannat", 112, 4, 2022, 84},
        {"Shakil", 113, 1, 2024, 69},
        {"Mim", 114, 2, 2023, 93},
        {"Arif", 115, 3, 2022, 77},
        {"Tania", 116, 4, 2022, 86},
        {"Fahim", 117, 1, 2024, 91},
        {"Sadia", 118, 2, 2023, 80},
        {"Nayeem", 119, 3, 2022, 74},
        {"Rumana", 120, 4, 2022, 96}};

    int i;

    printf("STUDENT INFORMATION\n");
    printf("-------------------\n");
    for (i = 0; i < 20; i++)
    {
        if (students[i].mark >= 80)
        {
            printf("ID: %d\n", students[i].id);
            printf("Name: %s\n", students[i].name);
            printf("Batch: %d\n", students[i].batch);
            printf("Semester: %d\n", students[i].semester);
            printf("Mark: %d\n", students[i].mark);
            printf("\n\n\n");
        }
    }
}