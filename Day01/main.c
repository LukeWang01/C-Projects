#include <stdio.h>
#include <math.h>
#include <strings.h>

void sayhi();

void sayhiadv(char name[], int age); // declare here

double cube(double num){
    return num*num*num;
}

int max_num(int num1, int num2, int num3){
    int resule = 0;
    if(num1 > num2 && num1 > num3){
        resule =num1;
    } else if(num2 > num1 && num2 > num3){
        resule = num2;
    } else{
        resule = num3;
    }
    return resule;
}


// strux

struct Student {
    int gpa;
    double points;
    int age;
    char student_name[50];
    char major[50];
};


int main() {
    printf("Hello, World!\n");

    const NUM_CONST = 8894;

    int a = 1;
    char b = 'c';
    char c[] = "wow";

    // This is a comment for my first C program
    /* Another comment */

    printf("%c\n", b);
    printf("%s\n", c);
    printf("%f\n", sqrt(36));
    printf("%d\n", 2*5);
    printf("%f\n", 15/3.0);
    printf("%d\n", 2*15);

    int number[] = {0,2,3,5,}; // creat array
    number[0] = 1;

    char cahrs[] = {'q', 's', 'd'};
    printf("%c\n",cahrs[0]);

    char strings[] = "LukeWang HAHA Array";

//    int age;
//    int now;
//    scanf("%i\n",&age);
//    printf("%d", age);
    sayhi(); // define the name and usage first
    sayhiadv("Luke", 100);
    printf("-------split--------\n");

    printf("cube %f\n", cube(4));



    // if statement:
    // && and, || or, != not equal,

    printf("max number: %i", max_num(5,6,10));

    // small toy:
    double n1;
    double n2;
    char op;

    printf("Enter a number:");
    scanf("%lf", &n1);
    printf("Enter operator:");
    scanf(" %c", &op);
    printf("Enter another number:");
    scanf("%lf", &n2);
    if (op == '+'){
        printf("%f", n1 + n2);
    }else if(op == '-'){
        printf("%f", n1 - n2);
    }else if(op == '*'){
        printf("%f", n1 * n2);
    }else if(op == '/'){
        printf("%f", n1 / n2);
    }else{
        printf("invalid input\n");
    }

    printf("---------split---------\n");


    // switch statement
    char grade = 'B';

    switch (grade) {
        case 'A' :
            printf("well done");
            break;
        case 'B' :
            printf("OK\n");
            break;
        default:
            printf("Invalid input");
    }
    printf("------------split-------------\n");
    struct Student student1;
    student1.age = 24;
    student1.gpa = 3;
    strcpy(student1.student_name, "Luke");
    strcpy(student1.major, "CS");
    printf("%s 's major is %s\n", student1.student_name, student1.major);

    printf("--------split---------\n");


    /////// while loops, do while loop will run the code first and then check the condition

    int todo = 1;
    while (todo <= 8){
        printf("%d\n",todo);
        todo++;
    }
    printf("--------split----------\n");


    ///// for loops
    for (int i = 0; i < 5; ++i) {
        printf("%i\n", i);
    }

    /////
    int twodimension[2][2]= {
            {1,2},
            {1,2}
    };

    printf("%i\n", twodimension[1][0]);
    printf("--------split--------\n");

    for (int i = 0; i < 2; ++i) {
        for (int j = 0; j < 2; ++j) {
            printf("%i\n", twodimension[i][j]);
        }
    }


    ////// address
    int p1 = 30;
    double p2 = 4.0;

    printf("%p\n%p\n%p\n",&p1, &p2, &student1);
    //0x7ff7b5ea4680
    //0x7ff7b5ea4678
    //0x7ff7b703c6d8


    printf("---------split---------\n");
    // pointer, a kind of data type, save the address
    int bala = 30;
    double bala1 = 30.4;
    char bala2 ='A';
    int * pbal = &bala; // save the address
    char * pbala2 = &bala2;
    printf("%d\n", * pbal);  //print the address value
    printf("%p\n", pbal);
    printf("%d\n", * pbala2);
    printf("%p\n", pbala2);
    printf("%d\n", * &bala);  //


    printf("-------split-------\n");

    // File IO

    FILE  * fpointer = fopen("test.txt", "w"); // r for read, w for write, a for append

    fprintf(fpointer, "Luke BABA\nHAHHAHAHAHA\n\n End, that's it.\n");  // this will override the content

    fclose(fpointer); // file need to be closed.

    FILE * fpointer2 = fopen("test.txt", "a");

    fprintf(fpointer2, "This is the appended information\n");

    fclose(fpointer2);

    // read file

    char line[255];
    FILE * fpointer3 = fopen("test.txt", "r");

    fgets(line, 255, fpointer3);  // read first line, and move the pointer to next line
    printf("%s\n", line);
    fgets(line, 255, fpointer3);  // read first line, and move the pointer to next line
    printf("%s\n", line);

    fclose(fpointer3);




    return 0;
}




//////////////////////////////////////////

void sayhiadv(char name[], int age) {
    printf("Hi %s, you are %d\n", name, age);

}

void sayhi() {
    printf("Hi Luke BABA\n");
}
