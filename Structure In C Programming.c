#include <stdio.h>
#include <string.h>


struct person {
  char name[50];
  int age;
  float salary;
}person1,person2,person3;


int main() {

strcpy(person1.name, "Niko Bellic");
person1.age = 35;
person1.salary=45000;

printf("Name: %s\n",person1.name);
printf("age: %d\n",person1.age);
printf("salary: %.2f\n",person1.salary);

  return 0;
}
