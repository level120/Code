------ML : 2512 KB, TL : 4 MS-------

#include <iostream>
#include <cstring>
using namespace std;
char s[1000001];
int main() {
	gets(s);
	int cnt = 0, len = strlen(s);
	for (int i = 0; i < len; i++)	{
		if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))	 {
			for (int j = i; j < len; j++) {
				if (s[j] == 32)	break;
				i = j;
			}
			++cnt;
		}
	}
	printf("%d", cnt);
	return 0;
}




------ML : 3064 KB, TL : 52 MS-------

#include <iostream>
#include <string>
using namespace std;
 
int main() {
    string s;
    getline(cin, s);
    int cnt = 0, len = s.length();
    for (int i = 0; i < len; i++)    {
        if ((s[i] > 64 && s[i] < 91) || (s[i] > 96 && s[i] < 123))   {
            for (int j = i; j < len; j++) {
                if (s[j] == 32) break;
                i = j;
            }
            ++cnt;
        }
    }
    cout << cnt;
    return 0;
}