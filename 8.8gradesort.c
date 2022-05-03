#include <stdio.h>
#include <stdlib.h>

typedef struct student
{
    char sid[11];
    int x;
    int y;
    int z;
} student;

void swap(student *a, student *b)
{
    student temp = *a;
    *a = *b;
    *b = temp;
}

int cmp(student a, student b)
{
    return (a.x + a.y + a.z) > (b.x + b.y + b.z);
}


void sortgrade(student *students, int n)
{
    if (n <= 1)
        return;
    student k = students[n - 1];
    int left = 0;
    int i = 0;
    for (; i < n - 1; i++)
    {
        if (cmp(students[i], k) == 0)
        {
            swap(&students[i], &students[left]);
            left++;
        }
    }
    swap(&students[left], &students[n - 1]);
    sortgrade(students, left);
    sortgrade(students + left + 1, n - left - 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    student *students = (student *)malloc(sizeof(student) * n);
    for (int i = 0; i < n; i++)
    {

        scanf("%s %d %d %d", 
        students[i].sid, &students[i].x, &students[i].y, &students[i].z);
    }
    sortgrade(students, n);
    printf("%s %d %d %d %.2f", students[0].sid, students[0].x, students[0].y, students[0].z,
    (float) (students[0].x + students[0].y + students[0].z) / 3);
    for (int i = 1; i < n; i++)
    {
        printf("\n%s %d %d %d %.2f", students[i].sid, students[i].x, students[i].y, students[i].z,
        (float) (students[i].x + students[i].y + students[i].z) / 3);
    }
    free(students);
}