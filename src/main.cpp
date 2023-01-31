#include <iostream>
#include <string>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	string s; cin >> s;

	cout << (s[0] == s[1] ? 1 : 0);

	return 0;
}