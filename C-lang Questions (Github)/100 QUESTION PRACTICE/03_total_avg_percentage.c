// ==================================================
// TOTAL MARKS / AVERAGE / PERCENTAGE
// ==================================================


// Q19. A student scored 72, 81 and 65 in three subjects.
// Find total, average and percentage out of 300.

#include <stdio.h>

int main()
{
    int m1, m2, m3, total;
    float average, percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;
    average = total / 3.0;
    percentage = (total / 300.0) * 100;

    printf("Total = %d\n", total);
    printf("Average = %.2f\n", average);
    printf("Percentage = %.2f%%", percentage);

    return 0;
}


// Q20. A student has scored marks in three subjects.
// The first subject is out of 100, second out of 150,
// and third out of 200. Find the overall percentage.

#include <stdio.h>

int main()
{
    int m1, m2, m3;
    int total;
    float percentage;

    printf("Enter marks of subject 1: ");
    scanf("%d", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%d", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%d", &m3);

    total = m1 + m2 + m3;

    percentage = ((float)total / 450) * 100;

    printf("Total Marks = %d\n", total);
    printf("Overall Percentage = %.2f%%", percentage);

    return 0;
}


// Q21. A student has an average of 68 in three subjects.
// He scored 61 and 72 in the first two subjects.
// Find the marks required in the third subject.

#include <stdio.h>

int main()
{
    float average, m1, m2, required;

    printf("Enter target average: ");
    scanf("%f", &average);

    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);

    required = (average * 3) - (m1 + m2);

    printf("Required marks = %.2f", required);

    return 0;
}


// Q22. A student wants at least 75% overall.
// He has already obtained some marks.
// Find the minimum additional marks required
// to reach 75%.

#include <stdio.h>

int main()
{
    float obtained, totalMarks, targetPercentage, required;

    printf("Enter marks already obtained: ");
    scanf("%f", &obtained);

    printf("Enter total maximum marks: ");
    scanf("%f", &totalMarks);

    printf("Enter target percentage: ");
    scanf("%f", &targetPercentage);

    required = (targetPercentage / 100) * totalMarks - obtained;

    printf("Additional marks required = %.2f", required);

    return 0;
}


// Q23. A student's percentage increased from one semester
// to another. Find the percentage increase in his marks.

#include <stdio.h>

int main()
{
    float oldMarks, totalMarks=100, percentageofprevioussem, percentageofnewsem, newMarks, increase;

    printf("Enter previous marks: ");
    scanf("%f", &oldMarks);

    percentageofprevioussem = (oldMarks/totalMarks)*100 ;
    printf("Percentage of pervious semester = %.2f%%" , percentageofprevioussem);

    printf("\nPercentage of Current semester: ");
    scanf("%f",&percentageofnewsem);

    increase = ((float)percentageofnewsem - (float)percentageofprevioussem)/(float)percentageofprevioussem * 100 ;
    printf("Hence the percentage inc in his marks is = %.2f%%", increase);

    newMarks = (increase/100 * oldMarks) + oldMarks ;
    printf("\nAnd your New Marks is= %.2f", newMarks);
    
    return 0 ;

}


// Q24. A student scored 420 marks out of 500.
// Find how many marks he can lose and still maintain 80%.

#include <stdio.h>

int main()
{
    float obtained, totalMarks, targetPercentage;
    float requiredMarks, marksCanLose;

    printf("Enter obtained marks: ");
    scanf("%f", &obtained);

    printf("Enter total marks: ");
    scanf("%f", &totalMarks);

    printf("Enter target percentage: ");
    scanf("%f", &targetPercentage);

    requiredMarks = (targetPercentage / 100) * totalMarks;

    marksCanLose = obtained - requiredMarks;

    printf("Marks that can be lost = %.2f", marksCanLose);

    return 0;
}


// Q25. A student's marks in three subjects are known.
// Find the marks required in the fourth subject
// so that the overall percentage becomes 80%.
// Each subject is out of 100.

#include <stdio.h>

int main()
{
    float m1, m2, m3, targetPercentage;
    float required;

    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &m3);

    printf("Enter target percentage: ");
    scanf("%f", &targetPercentage);

    required = (targetPercentage * 4)- (m1 + m2 + m3);

    printf("Marks required in subject 4 = %.2f", required);

    return 0;
}


// Q26. A student scored 70% in the first three subjects.
// Find what percentage he must score in the fourth subject
// to make his overall percentage 75%.
// Assume all subjects have equal maximum marks.

#include <stdio.h>

int main()
{
    float firstPercentage, targetPercentage;
    float requiredPercentage;

    printf("Enter percentage of first three subjects: ");
    scanf("%f", &firstPercentage);

    printf("Enter target overall percentage: ");
    scanf("%f", &targetPercentage);

    requiredPercentage = (targetPercentage * 4) - (firstPercentage * 3);

    printf("Required percentage in fourth subject = %.2f%%", requiredPercentage);

    return 0;
}


// Q27. A student has marks in theory and internal assessment.
// Theory is out of 70 and internal is out of 30.
// Find the final percentage.

#include <stdio.h>

int main()
{
    int theory, internal;
    float percentage;

    printf("Enter theory marks: ");
    scanf("%d", &theory);

    printf("Enter internal marks: ");
    scanf("%d", &internal);

    percentage = ((float)(theory + internal) / 100) * 100;

    printf("Final Percentage = %.2f%%", percentage);

    return 0;
}


// Q28. A student wants to improve his percentage from 65% to 75%.
// His total marks are 800.
// Find how many additional marks are required.

#include <stdio.h>

int main()
{
    float totalMarks, currentPercentage, targetPercentage;
    float currentMarks, targetMarks, additional;

    printf("Enter total marks: ");
    scanf("%f", &totalMarks);

    printf("Enter current percentage: ");
    scanf("%f", &currentPercentage);

    printf("Enter target percentage: ");
    scanf("%f", &targetPercentage);

    currentMarks = (currentPercentage / 100) * totalMarks;
    targetMarks = (targetPercentage / 100) * totalMarks;

    additional = targetMarks - currentMarks;

    printf("Current Marks = %.2f\n", currentMarks);
    printf("Target Marks = %.2f\n", targetMarks);
    printf("Additional Marks Required = %.2f", additional);

    return 0;
}


// Q29. A student scored 78, 82 and 69 in three subjects.
// His fourth subject is out of 150 marks.
// Find the minimum marks required in the fourth subject
// to achieve 75% overall.
// First three subjects are out of 100 each.

#include <stdio.h>

int main()  
{
    float m1, m2, m3;
    float targetPercentage;
    float required;

    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &m3);

    printf("Enter target percentage: ");
    scanf("%f", &targetPercentage);

    required = (3*targetPercentage  - (m1+m2+m3))/2;

    printf("Required marks in subject 4 = %.2f", required);

    return 0;
}


// Q30. A student's marks are given for three subjects.
// After adding bonus marks, calculate the new percentage
// and determine how much the percentage increased.

#include <stdio.h>

int main()
{
    float m1, m2, m3, bonus;
    float oldPercentage, newPercentage;
    float oldTotal, newTotal;

    printf("Enter marks of subject 1: ");
    scanf("%f", &m1);

    printf("Enter marks of subject 2: ");
    scanf("%f", &m2);

    printf("Enter marks of subject 3: ");
    scanf("%f", &m3);

    printf("Enter bonus marks: ");
    scanf("%f", &bonus);

    oldTotal = m1 + m2 + m3;

    newTotal = oldTotal + bonus;

    oldPercentage = (oldTotal / 300) * 100;
    newPercentage = (newTotal / 300) * 100;

    printf("Old Percentage = %.2f%%\n", oldPercentage);
    printf("New Percentage = %.2f%%\n", newPercentage);
    printf("Percentage Increase = %.2f%%",
           newPercentage - oldPercentage);

    return 0;
}