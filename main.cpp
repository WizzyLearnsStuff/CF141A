#include<iostream>

using namespace std;

int main() {
	int a[26];

	for (int &i : a) i = 0;

	string b;
	cin >> b;
	for(char c : b) a[c - 'A']++;
	cin >> b;
	for(char c : b) a[c - 'A']++;

	cin >> b;
	for (char c : b) a[c - 'A']--;

	for (int i : a) if (i != 0) {
		cout << "NO"; return 0;
	}

	cout << "YES";
}
