// This Program is RSA Encryption program for 4 letter word
// Haven't run yet
// Need more corrections

#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

// Encryption
long enc(long po, long mod, long code){
	long c = pow(code, po);
	return c%mod;
};

// Make It 4 Digit Number
long m4d(long j, long k){
	return j * 100 + k;
};

int main() {
  // Declare variables
	long p, q, e, ci[4];
	string a;
	char b[4];

	// Warning
	cout << "Warning: p and q should be followed as below;\n";
	cout << "p < q && gcd((p-1)(q-1), e) = 1\n";
	
	// Input
	cout << "Numbers should be Prime numbers\n";
	cin >> p >> q >> e;
	cout << "Prepare 4 letter word!\nWe will encrypt: ";
	cin >> a;

	// Initialize
	strcpy(b, a.c_str());
	for(int i = 0; i < 4; i++){
		ci[i] = static_cast<long>(b[i]) - 65;
	}

	// Prepare Encryption
	int n = p * q, f4 = m4d(ci[0], ci[1]), l4 = m4d(ci[2], ci[3]);
	
	// Print Output
	cout << "Encryped Code is: ";
	cout << enc(e, n, f4) << " " << enc(e, n, l4);
	return 0;
}

// Need code for two parts
// 1. Use Euclidean Algorithm for find if gcd((p-1)(q-1), e) = 1
// 2. Figure out p and q are prime numbers
// Decryption would upload near future