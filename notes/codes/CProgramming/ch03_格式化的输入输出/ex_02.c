/*
 * 编写 printf 函数调用以下列格式来显示 float 型变量x：
 */

#include <stdio.h>

int main()
{
	float x = 3.14;

	// (a) 指数表示形式；最小为8的字段宽度内左对齐；小数点后保留1位数字
	printf("%-8.1e\n", x);

	// (b) 指数表示形式；最小为10的字段宽度内右对齐；小数点后保留6位数字
	printf("%10.6e\n", x);

	// (c) 定点十进制表示形式；最小为8的字段宽度内左对齐；小数点后保留3位数字
	printf("%-8.3f\n", x);

	// (d) 定点十进制表示形式；最小为6的字段宽度内右对齐；小数点后无数字
	printf("%6.0f\n", x);

	return 0;
}
