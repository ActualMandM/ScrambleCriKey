#include <iostream>
using namespace std;

int main()
{
	uint64_t KeyCode = 0;
	uint16_t AwbHash = 0;
	uint64_t AcbKey = 0;

	cout << "Key Code: ";
	cin >> KeyCode;

	cout << "AWB Hash: ";
	cin >> AwbHash;

	// https://github.com/hozuki/libcgss/issues/4#issuecomment-429415659
	// https://blog.mottomo.moe/categories/Tech/RE/en/2018-10-12-New-HCA-Encryption/
	AcbKey = KeyCode * ((uint64_t)(AwbHash << 16) | (uint16_t)(~AwbHash + 2));

	cout << "ACB Key: " << AcbKey;
}
