#include <stdio.h>
#include <stdlib.h>

//int main1(){
//
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	// ��ָ�������,ָ������;���������ʵ��ֽ���
//	*pc = 0;// ����һ���ֽ�(char*) pcָ��n �ĵ�һ���ֽ�
//	*pi = 0;// ����4���ֽ� piָ��4���ֽ� ����n��Ϊ0
//	pi = 0;// pi Ϊ����, ����ָ��ָ����0�ŵ�ַ ����ָ������� �ռ�ռ4���ֽ�
//
//	system("pause");
//	return 0;
//}

int main2(){
	int n = 10;
	char* pc = (char*)&n;
	int* pi = &n;

	printf("%p\n", &n);// D0
	printf("%p\n", pc);// D0
	printf("%p\n", pi);// D0
	printf("%p\n", pc + 1);// D1
	printf("%p\n", pi + 1);// D4

	system("pause");
	return 0;
}

// ָ������
#define M 5
int main(){
	float a[M];
	int i = 0;
	float* p = a;// a���������Ԫ�صĵ�ַ

	for (; i < M; i++){
	/*	a[i] = 0.0f;*/   
		*(p + 1) = 0.0f;
		printf("%f\n", *(p + 1));
		p[i] = 0.0f;
		printf("%f\n", p[i]);
		*(a + i) = 0.0f;
		printf("%f\n", *(a + i));// �����������ʽ�Ľ��һ�� ���������0.00000
	}

	
/*
	float a[M];
	float* vp;
	for (vp = &value[0]; vp < &values[N_VALUES];){
		*vp++ = 0;
	}*/
	system("pause");
	return 0;
}

//int main(){
//
//
//	system("pause");
//	return 0;
//}