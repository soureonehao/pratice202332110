#include<stdio.h>
void main() {
	int score[10] = {0}, i,max = 0;	//定义数组变量和比较变量
	printf("请按顺序输入10位同学的成绩：");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &score[i]);	//输入十位同学的成绩
	}
	for (i = 0; i < 10; i++) {
		if (score[i] > score[max]) {
			max = i;		//当i处的数比较大时，保留i处数的值
		}
	}
	printf("分数最高的同学序号是 %d ，成绩是%d", max + 1, score[max] );
}