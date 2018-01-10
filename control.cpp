#include<stdio.h>
#include<inttypes.h>

#define MAX_RANGE 10000

int 32_t prime[MAX_RANGE + 5] = 0;

int32_t main() {
    for (int32_t i = 2; i <= MAX_RANGE；i++) {
        if (!prime[i]) { prime[++prime[0]] = i;}
        for (int32_t j = 1; j <= prime[0]; j++) {
            if (prime[i] * j > MAX_RANGE) break;
            prime[i * prime[j]] = 1;
            if (i % prime[j] == 0) break;
            }
        }
        return 0;
 }
 
#include <stdio.h>
#include <inttypes.h>
 
#define MAX_RANGE 10000 // 求出10000以内的素数
 
int32_t prime[MAX_RANGE + 5] = {0}; // 初始值为0，代表没有被标记成合数
 
int32_t main() {
    for (int32_t i = 2; i * i <= MAX_RANGE; i++) {
        if (!prime[i]) // i 没有被标记过，说明 i 是素数
            for (int32_t j = 2 * i; j <= MAX_RANGE; j += i) // 枚举 i 的倍数
                prime[j] = 1; // 将 i 的倍数标记为1，说明其是合数
    }
    int32_t n;
    while (scanf("%d", &n) != EOF) {
        //如果 n 是素数，输出 YES，否则输出 NO
        printf("%s\n", prime[n] == 0 ? "YES" : "NO");
    }
    return 0;
}
 
 int gcd(int a, int b) {
     if (!b) {
     return a;
     }
     return gcd(b, a % b);
 }

int max_int(int num, ...) {
    int ans = 0, temp;
    va_list arg;
    va_start(arg, num);
    while(num--) {
        temp = va_arg(arg, int);
        if (temp > ans) ans = temp;
        va_end(arg);
    }
        return ans;
}
            
