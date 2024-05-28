#include<stdio.h>
#include <string.h>

void reverseString(char *str) {
    int length = strlen(str), i;
    for ( i = 0; i < length / 2; i++) {
        char temp = str[i];
        str[i] = str[length - i - 1];
        str[length - i - 1] = temp;
    }
}

int isPalindrome(char *str) {
    int length = strlen(str), i;
    for ( i = 0; i < length / 2; i++) {
        if (str[i] != str[length - i - 1]) {
            return 0; // Not a palindrome
        }
    }
    return 1; // Palindrome
}

struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

void printEmployeeInfo(struct Employee emp) {
    printf("Employee Number: %d\n", emp.empno);
    printf("Employee Name: %s\n", emp.empname);
    printf("Address: %s\n", emp.address);
    printf("Age: %d\n", emp.age);
}
main()
{
	/* 8. WAP to reverse a string and check that the string is palindrome or not
	Write a program of structure employee that provides the following
	a. information -print and display empno, empname, address
	andage
	b. Write a program of structure for five employee that
	provides the following information -print and display
	empno, empname, address andage. */
	
	  // Test string for palindrome
    char test_string[100];
    printf("Enter a string: ");
    scanf("%s", test_string);
    
    reverseString(test_string);
    printf("Reversed String: %s\n", test_string);
    
    if (isPalindrome(test_string)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    // Creating an employee instance
    struct Employee emp = {101, "Sardar singh", "123 Main St, City", 30};
    // Printing employee information
    printf("\nEmployee Information:\n");
    printEmployeeInfo(emp);
}

