#include <stdio.h>
#include <string.h>
/*
int main(void) {
	//int data1,data2;
	char s1[] = "ABCDEF";
	char ss[20];

	int a,b,c;
	a = 5;

	b = a++;
	//printf("b=%d\n", b);
	a = 5;

	c = ++a;
	//printf("c=%d\n", c);

	int n;
	for (n = 1; n < 5; n++) {	
		printf("1_n=%d\n", n);
	}
	//printf("n=%d\n", n);

	for (n = 1; n < 5; ++n) {
		printf("2_n=%d\n", n);
	}
	//printf("n=%d\n", n);


	//printf("２つの数字をカンマで区切って入力してください　＝＞");
	printf("文字列を入力してください　＝＞");

	//scanf("%d,%d",&data1,&data2);
	//scanf("%s", &ss);
	gets(ss);

	//printf("ss=%s\n", &ss);
	if (strcmp(s1, ss) == 0) {
		printf("同じ");
	}
	else {
		printf("ちがう");
	}


	//if (data1 == data2) {
	//	printf("同じ");
	//}
	//else {
	//	printf("ちがう");
	//}
	return 0;
}
*/

void add(int* p, int);

int main(void) {
/*
	int suu[3];

	for (int i = 0; i < 3; i++) {
		add(suu, i);
	}
	for (int i = 0; i < 3; i++) {
		printf("suu[%d]:%d \n", i,suu[i]);
	}
	*/

	char* name[7] = {
		"Iizumi", "Kanto", "Kudo", "Sato",
		"Sugawara", "Matuda", "Wada"
	};
	char** p;
	int i, j;

	p = name;
	for (i = 0; i < 7; i++) {
		for (j = 0; *(*(p + i) + j) != '\0'; j++);
		printf("%2d : %s\n", j, *(p + i));
	}

	return 0;
}



void add(int* p, int i) {
	*(p + i) = 1234 * i;
}