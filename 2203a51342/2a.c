#include <stdio.h>
#include <string.h>

struct Address
{
    char street[50];
    char city[50];
    int pin;
};

struct Person 
{
    char name[50];
    struct Address a;
};

int main() 
{
    struct Person p1 = {"siddartha", {"1-3-222/2", "wgl", 11232342}};
    printf("Name: %s\n", p1.name);
    printf("Address: %s, %s - %d\n", p1.a.street, p1.a.city, p1.a.pin);
    return 0;
}        

