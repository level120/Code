#include <iostream>
#include <string>
#include <map>
using namespace std;

void db(int s, int e) {
	multimap<int,string> k = {
		{ 1967, "DavidBowie" },
		{ 1969, "SpaceOddity" },
		{ 1970, "TheManWhoSoldTheWorld" },
		{ 1971, "HunkyDory" },
		{ 1972, "TheRiseAndFallOfZiggyStardustAndTheSpidersFromMars" },
		{ 1973, "AladdinSane" },
		{ 1973, "PinUps" },
		{ 1974, "DiamondDogs" },
		{ 1975, "YoungAmericans" },
		{ 1976, "StationToStation" },
		{ 1977, "Low" },
		{ 1977, "Heroes" },
		{ 1979, "Lodger" },
		{ 1980, "ScaryMonstersAndSuperCreeps" },
		{ 1983, "LetsDance" },
		{ 1984, "Tonight" },
		{ 1987, "NeverLetMeDown" },
		{ 1993, "BlackTieWhiteNoise" },
		{ 1995, "1.Outside" },
		{ 1997, "Earthling" },
		{ 1999, "Hours" },
		{ 2002, "Heathen" },
		{ 2003, "Reality" },
		{ 2013, "TheNextDay" },
		{ 2016, "BlackStar" }
	};

	pair<multimap<int, string>::iterator, multimap<int, string>::iterator> itr;
	multimap<int, string>::iterator j;

	for (int i=s, ans=0; i<e+1; i++) {
		itr = k.equal_range(i);
		for (j = itr.first; j != itr.second; j++)	ans++;
		if (i == e)	printf("%d\n", ans);
	}

	for (int i=s; i<e+1; i++) {
		itr = k.equal_range(i);
		for (j = itr.first; j != itr.second; j++)	cout << j->first << " " << j->second << '\n';
	}
}

int main() {
	int t;
	scanf("%d", &t);
	while(t--) {
		int s, e;
		scanf("%d %d", &s, &e);
		db(s, e);
	}
	return 0;
}