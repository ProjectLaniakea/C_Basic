#include <stdio.h>
#include <stdlib.h>
/*
struct Student
{
        char name[50];
        char major[50];
        int age;
        double gpa;
};
*/
int main()
{
    /*
    FILE * fpointer = fopen("employees.txt", "w");

    fprintf(fpointer, "Bibek, Salesman\nSubedi, Employee");

    fclose(fpointer);
    */

    char line[255];
    FILE * fpointer = fopen("employees.txt", "r");

    fgets(line, 255, fpointer);
    printf("%s", line);
    /*
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';


    printf("%p", &age);
    */



    /*
    struct Student student1;


    student1.age = 22;
    student1.gpa = 3.2;
    strcpy( student1.name, "Bibek Subedi");
    strcpy( student1.major, "Comp Sci");

    */

    /*
    double num1, num2;
    char op;

    printf("Enter a number: ");
    scanf("%lf", &num1);

    printf("Enter operator: ");
    scanf(" %c", &op);

    printf("Enter a number: ");
    scanf("%lf", &num2);


    if(op == '+'){
        printf("%f", num1 + num2);
    }
    else if(op == '-'){
        printf("%f", num1 - num2);
    }
    else if(op == '*'){
        printf("%f", num1 * num2);
    }
    else if(op == '/'){
        printf("%f", num1 / num2);
    }
    else{
        printf("Invalid Operator");
    }
    */
    return 0;
}
