#include<stdio.h>
void main() {
	int score[10] = {0}, i,max = 0;	//������������ͱȽϱ���
	printf("�밴˳������10λͬѧ�ĳɼ���");
	for (i = 0; i < 10; i++) {
		scanf_s("%d", &score[i]);	//����ʮλͬѧ�ĳɼ�
	}
	for (i = 0; i < 10; i++) {
		if (score[i] > score[max]) {
			max = i;		//��i�������Ƚϴ�ʱ������i������ֵ
		}
	}
	printf("������ߵ�ͬѧ����� %d ���ɼ���%d", max + 1, score[max] );
}