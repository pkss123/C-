#include <stdio.h>

int main() {
	int x, y, answer;
	char t;
	printf("���� �Է� : ");
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
		printf("����� �� �����ϴ�");
	}
	printf("%d %c %d = %d\n", x, t, y, answer);
	return 0;
}