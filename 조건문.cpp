#include <stdio.h>

int main() {
    /*int a = 0;
    printf("정수를 입력하세요 : ");
    scanf_s("%d", &a);

    if (a > 0)
    {
        printf("a는 %d보다 큽니다.", a);
    }
    if (a <= 0)
    {
        printf("a는 %d보다 작거나 같습니다.", a);
    }

    return 0;
}*/

    //swtich-case문

    /*int shortcut = 0;
    
    printf("단축키를 입력하세요 : ");
    scanf_s("%d", &shortcut);

    switch (shortcut)
    {
    case 1: 
        printf("엄마 : 010-xxxx-xxxxx\n");
        break;
    case 2:
        printf("아빠 : 010-xxxx-xxxxx\n");
        break;
    case 3:
        printf("친구 : 010-xxxx-xxxxx\n");
        break;
    default:
        printf("해당 단축키가 없습니다.\n");
        break;
    }*/

	int season = 0;

	printf("지금은 몇 월 인가요 : ");
	scanf_s("%d", &season);

	switch (season)
	{
	case 1:
	case 2:
		printf("%d월은 겨울입니다.\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("%d월은 봄입니다.\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("%d월은 여름입니다.\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("%d월은 가을입니다.\n");
		break;
	case 12:
		printf("%d월은 겨울입니다.\n");
		break;
	default:
		printf("그런 숫자는 달력에 없어요.");
		break;
	}
}