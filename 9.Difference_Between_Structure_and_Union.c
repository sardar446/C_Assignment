#include <stdio.h>

// Define a structure
struct Person {
    char name[50];
    int age;
};

// Define a union
union Number {
    int intValue;
    float floatValue;
};

main() {
	
	/* 9. WAP to show difference between Structure and Union*/
    // Structure example
    struct Person person1;
    strcpy(person1.name, "John");
    person1.age = 30;

    printf("Structure Example:\n");
    printf("Name: %s\n", person1.name);
    printf("Age: %d\n", person1.age);
    printf("Size of struct Person: %lu bytes\n", sizeof(person1));

    // Union example
    union Number num;
    num.intValue = 10;

    printf("\nUnion Example:\n");
    printf("Int value: %d\n", num.intValue);
    printf("Float value: %.2f\n", num.floatValue);
    printf("Size of union Number: %lu bytes\n", sizeof(num));

}

