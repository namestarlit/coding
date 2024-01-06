#include <stdio.h>

/**
 * main - number conversation
 *
 * Return: 0 (success)
 */
int main(void)
{
	printf("0x89 >> 3 is: %x\n", (0x89 >> 3));
	printf("0x01 & 0x01 is: %x\n", (0x01 & 0x01));
	printf("~(0x98) is: %x\n", ~(0x98));
	printf("~(0x12) is: %x\n", ~(0x12));
	printf("0x01 | 0x00 is: %x\n", (0x01 | 0x00));
	printf("0b01101101 is: 0x%x\n", 0b01101101);
	printf("0x13 << 1 is: %x\n", (0x13 << 1));
	printf("0x02 >> 1 is: %x\n", (0x02 >> 1));
	printf("0x89 & 0x01 is: %x\n", (0x89 & 0x01));
	printf("0x44 | 0x22 is: %x\n", (0x44 | 0x22));
	printf("0x01 << 1 is: %x\n", (0x01 << 1));
	printf("0x66 & 0x22 is: %x\n", (0x66 & 0x22));
	printf("0x01 & 0x00 is: %x\n", (0x01 & 0x00));
	printf("0x88 & 0x01 is: %x\n", (0x88 & 0x01));

	return (0);
}
