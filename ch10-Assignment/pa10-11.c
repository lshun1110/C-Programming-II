/*
	�й� : 202511227
	�̸� : �̽���
	���α׷� �� : c��� ch10-Assignment ���� 11��
	��¥ : 2025.10.01
*/

/*
	product ����ü �迭�� �̿��� ��ǰ���� �Է¹޾� �˻� �� �ֹ� ó���ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct Product {
    char name[32];
    int price;
    int stock;
} PRODUCT;

void Assignment1011();
int  find_product(const PRODUCT* a, int n, const char* key);

int main()
{
    Assignment1011();
    return 0;
}

void Assignment1011()
{
    PRODUCT items[5] = {
        {"�Ƹ޸�ī��", 4000, 10},
        {"ī���",   4500, 10},
        {"�÷�ȭ��Ʈ", 5000, 10},
        {"īǪġ��",   4800, 10},
        {"ī���ī",   5200, 10}
    };
    int n = (int)(sizeof(items) / sizeof(items[0]));

    char pname[32] = { 0 };
    while (1)
    {
        printf("�ֹ��� ��ǰ��? ");
        if (scanf("%31s", pname) != 1) break;
        if (strcmp(pname, "0") == 0) break;

        int idx = find_product(items, n, pname);
        if (idx < 0) {
            printf("�ش� ��ǰ�� ã�� �� �����ϴ�.\n");
            continue;
        }

        int qty = 0;
        printf("�ֹ��� ����? ");
        if (scanf("%d", &qty) != 1) break;

        if (qty <= 0) {
            printf("������ 1 �̻��̾�� �մϴ�.\n");
            continue;
        }
        if (items[idx].stock < qty) {
            printf("��� �����մϴ�. ���� ���: %d\n", items[idx].stock);
            continue;
        }

        items[idx].stock -= qty;
        int pay = items[idx].price * qty;
        printf("���� �ݾ�: %d  %s ���: %d\n", pay, items[idx].name, items[idx].stock);
    }

    for (int i = 0; i < n; i++) {
        printf("[%s %d�� ���:%d]\n", items[i].name, items[i].price, items[i].stock);
    }
}

// ��ɸ� : ��ǰ�� ��� �����ϴ� �Լ�
// ���� : ������ �ִ� ��ǰ ����ü�ȿ� �ʿ��� �׸��� �Է��ϸ� ���� ��� �����
// �Է� : ����ü ������(��ǰ ���), �׸�(���ڿ�), ����(����)
// ��� : �ִٸ� i(����) ��ȯ / ���ٸ� -1 ��ȯ
// ���� : x

int find_product(const PRODUCT* a, int n, const char* key)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i].name, key) == 0)
            return i;
    return -1;
}