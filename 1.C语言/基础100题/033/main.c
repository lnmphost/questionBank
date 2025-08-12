/*
 * 33.学习clrscr()函数与gotoxy()
 *
 * 题目：学习clrscr()函数与gotoxy() (在Turbo C中实现）。
 *
 * 程序分析：无.   
*/

#include <stdio.h>
#include <stdlib.h>


#if 0
/*
这段代码是使用了一些特定编译器（如 Turbo C）中的非标准库函数，
这些函数在现代 C 语言编译器（如 GCC、Clang 等）中通常是不支持的。

具体来说，代码中使用了几个问题函数：
clrscr()：清屏函数，属于 Turbo C 的 conio.h 库
textbackground()：设置文本背景色，非标准函数
gotoxy()：定位光标位置，非标准函数
cprintf()：带格式的控制台输出，非标准函数
*/

int main()
{
	//clrscr();						// 清屏函数
	//textbackground(2);

  clrscr();/*清屏函数*/
  textbackground(2);
  gotoxy(1, 5);/*定位函数*/
  cprintf("Output at row 5 column 1\n");
  textbackground(3);
  gotoxy(20, 10);
  cprintf("Output at row 10 column 20\n");


	system("pause");
	return 0;
}
#endif

/*
// 使用ANSI转义序列设置控制台文本属性（背景色、前景色）
void setConsoleAttribute(int bgColor) {
    // 背景色对应的ANSI代码：绿色(42)、青色(46)、默认(49)
    printf("\033[%dm", bgColor);
}
// 使用ANSI转义序列设置光标位置（行从1开始，列从1开始）
void setCursorPosition(int row, int col) {
    printf("\033[%d;%dH", row, col);
}
*/

// 定义颜色常量
#define BG_BLACK 40
#define BG_RED 41
#define BG_GREEN 42
#define BG_YELLOW 43
#define BG_BLUE 44
#define BG_MAGENTA 45
#define BG_CYAN 46
#define BG_WHITE 47
#define BG_DEFAULT 49


// 设置控制台文本属性（背景色）
void setConsoleAttribute(int bgColor) {
    // 简单的参数范围检查
    if (bgColor >= 40 && bgColor <= 47 || bgColor == 49) {
		// 通过 printf 输出 ANSI 转义序列 \033[<color>m
		// 其中 \033 是 ESC 字符的 ASCII 码表示
        printf("\033[%dm", bgColor);
    } else {
        // 无效颜色时使用默认
        printf("\033[49m");
    }
}

/*
此外，ANSI 转义序列还支持相对移动光标，例如：
\033[<n>A：上移 n 行
\033[<n>B：下移 n 行
\033[<n>C：右移 n 列
\033[<n>D：左移 n 列
*/
// 使用ANSI转义序列设置光标位置（行从1开始，列从1开始）
void setCursorPosition(int row, int col) {
    // 确保行和列的值至少为1
    if (row < 1) row = 1;
    if (col < 1) col = 1;
    printf("\033[%d;%dH", row, col);
}

int main(void) {
    // 清屏（跨平台方式）
    system("clear || cls");  // Linux/macOS用clear，Windows用cls

    // 设置背景色为绿色，前景色为黑色
    setConsoleAttribute(BG_GREEN);  // 42对应绿色背景

    // 定位到(1,5)并输出（行5，列1）
    setCursorPosition(5, 1);
    printf("Output at row 5 column 1\n");

    // 设置背景色为青色，前景色为黑色
    setConsoleAttribute(BG_CYAN);  // 46对应青色背景

    // 定位到(20,10)并输出（行10，列20）
    setCursorPosition(10, 20);
    printf("Output at row 10 column 20\n");

    // 恢复默认控制台属性（默认背景色，白色前景色）
    setConsoleAttribute(49);  // 49恢复默认背景
    printf("\033[37m");       // 37设置白色前景（默认）

    // 光标移至最后，避免覆盖输出
    setCursorPosition(12, 1);

	system("pause");
    return 0;
}