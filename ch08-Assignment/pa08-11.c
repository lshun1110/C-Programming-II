/*
    �й� : 202511227
    �̸� : �̽���
    ���α׷� �� : c��� ch-08 Assignment ���� 11��
    ��¥ : 2025.09.21
*/

/*
    ���簢���� ���̿� �鷹�� ���ϴ� get_rect_info �Լ��� �ۼ��Ͻÿ�.
    ���簢���� ����, ������ ���̸� �Է¹��� ���� get_rect_info �Լ��� �̿��ؼ� ���簢���� ���̿�
    �ѷ��� ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void Assignment0811();
void get_rect_info(int width, int height, int* area, int* perimeter);

int main()
{
    Assignment0811();
    return 0;
}

// ��ɸ� : ���簢���� ���̿� �ѷ��� ���ϴ� �Լ�
// ����: ���� ���� �Է� �޾� ���簢���� ���̿� �ѷ��� ���ϴ� �Լ�
// �Է� : ����,����, ���̸� ������ ������, �ѷ��� ������ ������
// ��� : x
//���� : x

void get_rect_info(int width, int height, int* area, int* perimeter)
{
    *area = width * height;
    *perimeter = 2 * (width + height);
}

void Assignment0811()
{
    int w, h, a, p;

    printf("����? ");
    scanf("%d", &w);

    printf("����? ");
    scanf("%d", &h);

    get_rect_info(w, h, &a, &p);

    printf("����: %d, �ѷ�: %d\n", a, p);
}