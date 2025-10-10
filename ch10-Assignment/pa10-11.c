/*
	학번 : 202511227
	이름 : 이승훈
	프로그램 명 : c언어 ch10-Assignment 과제 11번
	날짜 : 2025.10.01
*/

/*
	product 구조체 배열을 이용해 제품명을 입력받아 검색 후 주문 처리하는 프로그램을 작성하시오.
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
        {"아메리카노", 4000, 10},
        {"카페라떼",   4500, 10},
        {"플랫화이트", 5000, 10},
        {"카푸치노",   4800, 10},
        {"카페모카",   5200, 10}
    };
    int n = (int)(sizeof(items) / sizeof(items[0]));

    char pname[32] = { 0 };
    while (1)
    {
        printf("주문할 제품명? ");
        if (scanf("%31s", pname) != 1) break;
        if (strcmp(pname, "0") == 0) break;

        int idx = find_product(items, n, pname);
        if (idx < 0) {
            printf("해당 제품을 찾을 수 없습니다.\n");
            continue;
        }

        int qty = 0;
        printf("주문할 수량? ");
        if (scanf("%d", &qty) != 1) break;

        if (qty <= 0) {
            printf("수량은 1 이상이어야 합니다.\n");
            continue;
        }
        if (items[idx].stock < qty) {
            printf("재고가 부족합니다. 현재 재고: %d\n", items[idx].stock);
            continue;
        }

        items[idx].stock -= qty;
        int pay = items[idx].price * qty;
        printf("결제 금액: %d  %s 재고: %d\n", pay, items[idx].name, items[idx].stock);
    }

    for (int i = 0; i < n; i++) {
        printf("[%s %d원 재고:%d]\n", items[i].name, items[i].price, items[i].stock);
    }
}

// 기능명 : 상품의 재고를 조사하는 함수
// 내용 : 가지고 있는 상품 구조체안에 필요한 항목을 입력하면 남은 재고 출력함
// 입력 : 구조체 포인터(상품 재고), 항목(문자열), 갯수(정수)
// 출력 : 있다면 i(개수) 반환 / 없다면 -1 반환
// 오류 : x

int find_product(const PRODUCT* a, int n, const char* key)
{
    for (int i = 0; i < n; i++)
        if (strcmp(a[i].name, key) == 0)
            return i;
    return -1;
}