/* Example #1 - LAB #1 */

#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Greek");

    int a = 10; int *p;
    p = &a; /* Assign p to variable a */

    printf("Memory address of variable a: "); /* � ��������� ������ ���� ����� ����� ������������ � ��������� � */
    printf("%p \n", p); /* This is the same as "%p", &a */

    printf("Value of the variable a: "); /* � ���� ��� ���������� � */
    printf("%d \n", a);

    printf("Value of the pointer p: "); /* � ���� ��� ������ p */
    printf("%p \n", *p);

    printf("Value pointed by pointer p: "); /* �� ����������� ��� ���������� ������ ���� ����� ������� � p */
    printf("%d \n", a); /* This is the same as "%d", *p */

    printf("Memory address of the pointer p: "); /* �� ��������� ������ ���� ����� ����� ������������� � p */
    printf("%p \n", &p);

    return 0;
}
