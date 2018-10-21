

#include <iostream>
#include <string>
using namespace std;


bool isUpper(char c) {
	if (c >= 'A' && c <= 'Z')
		return true;
	else
		return false;
}



int main()
{

	int n;
	cin >> n;

	for (int j = 0; j < n; j++) {
		string str_in;
		string str_out;
		int len = 0;

		cin >> str_in;
		len = str_in.length();



		for (int i = 0; i < len; i++) {
			if (isUpper(str_in[i]) == false) {
				str_out += str_in[i];
			}
			else if (isUpper(str_in[i]) == true)
			{
				if (i == 0) {
					str_out += str_in[i] + 32;
				}
				else if (i == len - 1)
				{
					str_out += str_in[i] + 32;
				}
				else if (i > 0 && isUpper(str_in[i - 1]) == false) {
					str_out += '_';
					str_out += str_in[i] + 32;
				}
				else if (i < len && isUpper(str_in[i + 1]) == false)
				{
					str_out += '_';
					str_out += str_in[i] + 32;
				}
				else if (i < len && isUpper(str_in[i + 1]) == true)
				{
					str_out += str_in[i] + 32;
				}
			}
		}

		cout << str_out;
		if (j < n - 1) {
			cout << "*" << endl;
		}
	}
	return 0;
}





































