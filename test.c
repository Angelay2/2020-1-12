#include <stdio.h>
#include <stdlib.h>

//int main1(){
//
//	int n = 0x11223344;
//	char* pc = (char*)&n;
//	int* pi = &n;
//	// 对指针解引用,指针的类型决定了其访问的字节数
//	*pc = 0;// 访问一个字节(char*) pc指的n 的第一个字节
//	*pi = 0;// 访问4个字节 pi指向4个字节 整个n都为0
//	pi = 0;// pi 为变量, 现在指针指向了0号地址 更改指向的内容 空间占4个字节
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

// 指针运算
#define M 5
int main(){
	float a[M];
	int i = 0;
	float* p = a;// a代表的是首元素的地址

	for (; i < M; i++){
	/*	a[i] = 0.0f;*/   
		*(p + 1) = 0.0f;
		printf("%f\n", *(p + 1));
		p[i] = 0.0f;
		printf("%f\n", p[i]);
		*(a + i) = 0.0f;
		printf("%f\n", *(a + i));// 这四种输出方式的结果一样 都可以输出0.00000
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