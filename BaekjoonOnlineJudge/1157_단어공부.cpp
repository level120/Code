#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;
int n[26];
char s[1000001];
int main() {
    scanf("%s", s);
    int len = strlen(s);
    for (int i = 0; i < len; i++)    {
        if (s[i]<96) n[s[i] - 65]++;
        else n[s[i] - 97]++;
    }
    bool check = false;
    int cnt = 0, ans;
    for (int i = 0; i < 26; i++) {
        if (n[i] != 0) {
            if (n[i] > cnt)      { cnt = n[i]; ans = i; check = true; }
            else if (n[i] == cnt)   check = false;
        }
    }
    printf("%c", check ? ans+65 : '?');
    return 0;
}