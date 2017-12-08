#include <stdio.h>


int main()
{
	struct{
		char *name;
		int num;
		int age;
		char group;
		float score;
	}stu1 = {"Tom",12,18,'A',136.5}, *pstu = &stu1;
	
	printf("%s的学号是%d,年龄是:%d,在%c组，今年的成绩是:%.lf!\n",(*pstu).name,(*pstu).age,(*pstu).group,(*pstu).score);
	printf("%s的学号是%d,年龄是:%d,在%c组，今年的成绩是:%.lf\n",pstu->name,pstu->age,pstu->group,pstu->score);


	return 0;	
}
