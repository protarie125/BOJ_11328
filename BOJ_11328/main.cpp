#include <algorithm>
#include <bit>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <limits>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using vb = vector<bool>;
using vvb = vector<vb>;
using vi = vector<int>;
using vvi = vector<vi>;
using vl = vector<ll>;
using vvl = vector<vl>;
using pii = pair<int, int>;
using vii = vector<pii>;
using pll = pair<ll, ll>;
using vll = vector<pll>;
using vs = vector<string>;

bool checkFry(const string& a, const string& b) {
	vector<char> acs(26, 0);
	vector<char> bcs(26, 0);

	for (const auto& x : a) {
		++acs[x - 'a'];
	}

	for (const auto& x : b) {
		++bcs[x - 'a'];
	}

	for (auto i = 0; i < 26; ++i) {
		if (acs[i] != bcs[i]) {
			return false;
		}
	}

	return true;
}

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	int N;
	cin >> N;
	while (0 < (N--)) {
		string a, b;
		cin >> a >> b;

		if (checkFry(a, b)) {
			cout << "Possible\n";
		}
		else {
			cout << "Impossible\n";
		}
	}

	return 0;
}