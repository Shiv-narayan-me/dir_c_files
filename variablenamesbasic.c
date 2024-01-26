#include <stdio.h>
int main(){
    int x;
    x=123;
    int age=19;
    float c=3.8;
    char grade='b';
    char name[]="Shiv";/*there are no 
    string variables in c as its not a oopl. so string is represented as am array of characters.*/

    printf("Hello %s.\n",name);
    printf("You are %d years old.\n",age);
    printf("Your average grade is %c\n",grade);
    printf("Your average gpa is %f\n",c);
    return 0;
}