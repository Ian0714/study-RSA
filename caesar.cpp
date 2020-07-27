#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int key;
	int tint[100];
	char text[100];
	string texter;

	cin >> key;
	getline(cin, texter);
	int len = texter.length();
	strcpy(text, texter.c_str());

	for(int b = 0; b < len; b++){
		tint[b] = static_cast<int>(text[b]);
	}

	for(int a = 0; a < len; a++){
		if(tint[a] == 32){
			continue;
		} else {
			tint[a] -= key;
			if(tint[a] < 65){
				tint[a] += 26;
			}
		}
		text[a] = static_cast<char>(tint[a]);
	}

	for(int c = 0; c < len; c++){
		cout << text[c];
	}
	return 0;
}