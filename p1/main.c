#include <stdio.h>

int main(void) {
    char x[10];      // 10개의 문자를 저장할 배열
    
    // 문자열을 한 번에 입력받아 배열에 저장
    scanf("%s", x);
    
    char maxChar = *x;  // 가장 많이 나타난 문자 (초기값: 첫 번째 문자)
    int maxCount = 0;   // 최대 빈도수 (초기값: 0)
    
    // 외부 루프: 포인터 p로 기준 문자를 하나씩 순회
    for (char *p = x; p < x + 10; p++) {
        int count = 0;  // 현재 기준 문자의 빈도수
        
        // 내부 루프: 포인터 q로 전체 배열을 순회하며 기준 문자와 비교
        for (char *q = x; q < x + 10; q++) {
            if (*p == *q) {  // 기준 문자(*p)와 같은 문자(*q)가 있으면
                count++;     // 빈도수 증가
            }
        }
        
        // 현재 빈도수가 최대 빈도수보다 크면 갱신
        // 같을 경우 갱신하지 않으므로 먼저 나타난 문자가 유지됨
        if (count > maxCount) {
            maxCount = count;  // 최대 빈도수 갱신
            maxChar = *p;      // 최다 빈도 문자 갱신
        }
    }
    
    // 가장 많이 나타난 문자와 빈도수 출력
    printf("%c %d\n", maxChar, maxCount);
    
    return 0;
}
