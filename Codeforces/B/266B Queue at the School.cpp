#include <iostream>
	#include<string>
	using namespace std;

	int main()
	{
		int x, y;
		string s;
		cin >> x>> y;
		cin >> s;

		for (int i = 0, j = 0 ; i < y; i++) {
			for (int j = 0; j < s.size(); j++) {
				if (s[j] == 'B'&& s[j + 1] == 'G') {
					char x = s[j];
					s[j] = s[j+1];
					s[j+1] = x;
					j++;
				}
			}
		}

		cout << s<< endl;

		return 0;
	}