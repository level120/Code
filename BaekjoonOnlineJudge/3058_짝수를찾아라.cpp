#include <cstdio>
using namespace std;
 
int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int s = 0;
        int min = 101;
        for(int i=0; i<7; i++) {
            int a;
            scanf("%d", &a);
            if(a%2 != 0)    continue;
            s += a;
            if(a<min)    min = a;
        }
        printf("%d %d\n", s, min);
    }
    return 0;
}
