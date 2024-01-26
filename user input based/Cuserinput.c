#include <stdio.h>
// file>preferences>settings>search for code runner> check the box saying run in terminal.
int main(){
    char name[25];// 25 is the size of the array. if we go over that it'll be an oveflow.
    int age;
    printf("How old are you?\n");
    scanf("%d",&age);
    printf("What is your name?\n");
    scanf("%s",&name);
    printf("\nHello %s,how are you?",name);
    printf("\nYou are %d years old.",age);
    // taking multiple words . basically taking 2 words input in same line . sepaarated by a space.
    printf("What is your name?\n");
    fgets(name,25,stdin);
    printf("\nHello %s,how are you?",name);

}