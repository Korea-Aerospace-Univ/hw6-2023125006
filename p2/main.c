#include <stdio.h>

int main(void) {
    int N;
    int a[20], b[20];  // 두 개의 정수 배열 (최대 20개)
    
    // N 입력
    scanf("%d", &N);
    
    // 첫 번째 배열 입력 (포인터로 접근)
    for (int *p = a; p < a + N; p++) {
        scanf("%d", p);
    }
    
    // 두 번째 배열 입력 (포인터로 접근)
    for (int *p = b; p < b + N; p++) {
        scanf("%d", p);
    }
    
    // 두 배열을 역방향으로 더하여 출력
    // a[i] + b[N-1-i] 형태로, 포인터 p는 a 앞에서부터, q는 b 뒤에서부터
    int *p = a;          // p: 배열 a의 시작을 가리키는 포인터
    int *q = b + N - 1;  // q: 배열 b의 마지막을 가리키는 포인터
    
    while (p < a + N) {          // p가 배열 a의 끝에 도달할 때까지 반복
        printf(" %d", *p + *q);  // a[i]와 b[N-1-i]를 더해 출력 (공백 먼저)
        p++;  // p는 앞
        q--;  // q는 뒤
    }
    
    printf("\n");
    
    return 0;
}
