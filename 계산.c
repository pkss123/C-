#include <stdio.h>

int main() {
	int x, y, answer;
	char t;
	printf("수식 입력 : ");
	scanf("%d %c %d",  &x,  &t, &y);

	switch(t){
	case'+':
		answer = x + y;
	break;
	case'-':
		answer = x - y;
	break;
	case'*':
		answer = x * y;
	break;
	case'/':
		answer = x / y;
	break;
	default:
		printf("계산할 수 없습니다");
	}
	printf("%d %c %d = %d\n", x, t, y, answer);
	return 0;
}