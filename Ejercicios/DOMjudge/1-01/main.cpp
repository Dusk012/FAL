#include <iostream>
#include <vector>

using namespace std;

void resolverCasos() {
	int n;
	cin >> n;
	vector<string> vector(n);

	for (int i = 0; i < n; i++) {
		cin >> vector[i];
	}

	string maxValue = vector[0];
	for (int i = 1; i < n; i++) {
		if (vector[i] < maxValue) maxValue = vector[i];
	}

	cout << maxValue << endl;
}

int main() {

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		resolverCasos();
	}
	


	return 0;
}