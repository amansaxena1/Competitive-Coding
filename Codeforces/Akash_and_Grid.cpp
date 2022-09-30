#include <bits/stdc++.h>
using namespace std;

int aman(int arr[], int n){
	int ans;
	int i, j;

    int arr1[n];
    int arr2[n];

    arr1[0] = arr[0];
	for (i = 1; i < n; i++){
		arr1[i] = min(arr[i], arr1[i - 1]);
    }
	
    arr2[n - 1] = arr[n - 1];
	for (j = n - 2; j >= 0; --j){
		arr2[j] = max(arr[j], arr2[j + 1]);
    }

	i = 0, j = 0, ans = -1;
    while (j < n && i < n) {
		if (arr1[i] <= arr2[j]) {
			ans = max(ans, j - i);
			j++;
		}
		else{
			i++;
        }
	}

	return ans;
}

int main()
{
	int arr[] = { 9, 2, 3, 4, 5,
				6, 7, 8, 18, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int ans = aman(arr, n);
	cout << ans;
	return 0;
}
