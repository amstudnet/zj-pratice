#include <iostream>
#include <string>
#include <map>
using namespace std;

bool IsPalindrome(string input) {
	int half = (input.size() - 1) >> 1;
	for (int i = 0; i <= half; ++i)
		if (input[i] != input[input.size() - i - 1])
			return false;
	return true;
}

int main() {
	cin.sync_with_stdio(false), cin.tie(nullptr);
	map <string, bool> checked;
	string input, buffer;
	int counts;
	while (cin >> input) {
		checked.clear(), counts = 0;
		for (int i = 0; i != input.size(); ++i)
			for (int j = 1; j <= input.size() - i; ++j) {
				buffer = input.substr(i, j);
				if (!checked[buffer]){
					if(IsPalindrome(buffer)){
						counts++;
						checked[buffer]=true;
					}
				}
				
			}
		cout << "The string \'" << input << "\' contains " << counts << " palindromes.\n";
	}
}
