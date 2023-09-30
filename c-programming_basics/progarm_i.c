#include <stdio.h>

/*
 * main - function that define a variable
 */

int main()
{
	int x; //declaration
	x = 123; //initialization
	int y = 321; //declaration and initialization
	int age = 21; //integer
	float gpa = 2.06; //floating point number
	char grade = 'c'; //single character
	char name [] = "bro"; //array of characters

	printf("hello %s\n",name);
	printf("you are age %d years old\n",age);
	printf("your average grade is %c\n",grade);
	printf("your gpa is %f\n",gpa);

	return 0;
}
