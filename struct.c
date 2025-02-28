#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    char phone[15];
} Person;


int main(void){
    Person p1;
    strcpy(p1.name, "John Doe");
    strcpy(p1.phone, "123-456-7890");

    printf("Name: %s\n", p1.name);
    printf("Phone: %s\n", p1.phone);

    return 0;
}