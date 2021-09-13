#include <iostream>
using namespace std;

int main()
{
	uint64_t key = 0;
	uint16_t scramblekey = 0;
	uint64_t truekey = 0;

	cout << "key: ";
	cin >> key;

	cout << "scramble key: ";
	cin >> scramblekey;

	// https://github.com/hozuki/libcgss/issues/4#issuecomment-429415659
	// https://blog.mottomo.moe/categories/Tech/RE/en/2018-10-12-New-HCA-Encryption/
	truekey = key * ((uint64_t)(scramblekey << 16) | (uint16_t)(~scramblekey + 2));

	cout << "true key: " << truekey;
}
