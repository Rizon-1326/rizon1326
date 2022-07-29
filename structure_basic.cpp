#include <stdio.h>
#include <stdlib.h>
struct student
{
	char name[20];
	int roll;
	int id;
	int * marks;
};

int main()
{
	struct student s[10];
	int exams[10];
	for(int i = 0; i < 3; i++){
		scanf("%d %s%d", &s[i].roll, s[i].name, &s[i].id);
		printf("How many exams did he attend to?\n");
		scanf("%d",&exams[i]);
		s[i].marks = (int*)malloc(exams[i]*sizeof(int));
		for(int j = 0; j < exams[i]; j++){
			scanf("%d", &s[i].marks[j]);
		}
	}
	for(int i = 0; i < 3; i++){
		printf("%d. %s: %d\n", s[i].roll, s[i].name, s[i].id);
		for(int j = 0; j < exams[i]; j++){
			printf("Exam %d: %d\n", j+1, s[i].marks[j]);
		}
	}
	return 0;
}
