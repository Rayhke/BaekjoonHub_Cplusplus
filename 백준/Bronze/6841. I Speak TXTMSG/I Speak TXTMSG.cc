#include <iostream>
#include <map>
using namespace std;

map<string, string> Map = {
	{"CU","see you"},
	{":-)","I’m happy"},
	{":-(","I’m unhappy"},
	{";-)","wink"},
	{":-P","stick out my tongue"},
	{"(~.~)","sleepy"},
	{"TA","totally awesome"},
	{"CCC","Canadian Computing Competition"},
	{"CUZ","because"},
	{"TY","thank-you"},
	{"YW","you’re welcome"},
	{"TTYL","talk to you later"},
};

int main() {
	string S;
	while (cin >> S) {
		cout << (Map.find(S) != Map.end() ? Map[S] : S) << '\n';
		if (S == "TTYL") { break; }
	}
	return 0;
}