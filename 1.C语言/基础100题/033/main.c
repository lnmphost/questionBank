/*
 * 33.ѧϰclrscr()������gotoxy()
 *
 * ��Ŀ��ѧϰclrscr()������gotoxy() (��Turbo C��ʵ�֣���
 *
 * �����������.   
*/

#include <stdio.h>
#include <stdlib.h>


#if 0
/*
��δ�����ʹ����һЩ�ض����������� Turbo C���еķǱ�׼�⺯����
��Щ�������ִ� C ���Ա��������� GCC��Clang �ȣ���ͨ���ǲ�֧�ֵġ�

������˵��������ʹ���˼������⺯����
clrscr()���������������� Turbo C �� conio.h ��
textbackground()�������ı�����ɫ���Ǳ�׼����
gotoxy()����λ���λ�ã��Ǳ�׼����
cprintf()������ʽ�Ŀ���̨������Ǳ�׼����
*/

int main()
{
	//clrscr();						// ��������
	//textbackground(2);

  clrscr();/*��������*/
  textbackground(2);
  gotoxy(1, 5);/*��λ����*/
  cprintf("Output at row 5 column 1\n");
  textbackground(3);
  gotoxy(20, 10);
  cprintf("Output at row 10 column 20\n");


	system("pause");
	return 0;
}
#endif

/*
// ʹ��ANSIת���������ÿ���̨�ı����ԣ�����ɫ��ǰ��ɫ��
void setConsoleAttribute(int bgColor) {
    // ����ɫ��Ӧ��ANSI���룺��ɫ(42)����ɫ(46)��Ĭ��(49)
    printf("\033[%dm", bgColor);
}
// ʹ��ANSIת���������ù��λ�ã��д�1��ʼ���д�1��ʼ��
void setCursorPosition(int row, int col) {
    printf("\033[%d;%dH", row, col);
}
*/

// ������ɫ����
#define BG_BLACK 40
#define BG_RED 41
#define BG_GREEN 42
#define BG_YELLOW 43
#define BG_BLUE 44
#define BG_MAGENTA 45
#define BG_CYAN 46
#define BG_WHITE 47
#define BG_DEFAULT 49


// ���ÿ���̨�ı����ԣ�����ɫ��
void setConsoleAttribute(int bgColor) {
    // �򵥵Ĳ�����Χ���
    if (bgColor >= 40 && bgColor <= 47 || bgColor == 49) {
		// ͨ�� printf ��� ANSI ת������ \033[<color>m
		// ���� \033 �� ESC �ַ��� ASCII ���ʾ
        printf("\033[%dm", bgColor);
    } else {
        // ��Ч��ɫʱʹ��Ĭ��
        printf("\033[49m");
    }
}

/*
���⣬ANSI ת�����л�֧������ƶ���꣬���磺
\033[<n>A������ n ��
\033[<n>B������ n ��
\033[<n>C������ n ��
\033[<n>D������ n ��
*/
// ʹ��ANSIת���������ù��λ�ã��д�1��ʼ���д�1��ʼ��
void setCursorPosition(int row, int col) {
    // ȷ���к��е�ֵ����Ϊ1
    if (row < 1) row = 1;
    if (col < 1) col = 1;
    printf("\033[%d;%dH", row, col);
}

int main(void) {
    // ��������ƽ̨��ʽ��
    system("clear || cls");  // Linux/macOS��clear��Windows��cls

    // ���ñ���ɫΪ��ɫ��ǰ��ɫΪ��ɫ
    setConsoleAttribute(BG_GREEN);  // 42��Ӧ��ɫ����

    // ��λ��(1,5)���������5����1��
    setCursorPosition(5, 1);
    printf("Output at row 5 column 1\n");

    // ���ñ���ɫΪ��ɫ��ǰ��ɫΪ��ɫ
    setConsoleAttribute(BG_CYAN);  // 46��Ӧ��ɫ����

    // ��λ��(20,10)���������10����20��
    setCursorPosition(10, 20);
    printf("Output at row 10 column 20\n");

    // �ָ�Ĭ�Ͽ���̨���ԣ�Ĭ�ϱ���ɫ����ɫǰ��ɫ��
    setConsoleAttribute(49);  // 49�ָ�Ĭ�ϱ���
    printf("\033[37m");       // 37���ð�ɫǰ����Ĭ�ϣ�

    // ���������󣬱��⸲�����
    setCursorPosition(12, 1);

	system("pause");
    return 0;
}