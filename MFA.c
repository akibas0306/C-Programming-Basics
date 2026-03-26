#include <stdio.h>

int main() {
	int n=0;

    printf("Most frequently appearing\nNote:If there are multiple elements with the same frequency, print the first element that appears. \nHow many number are there?:");
	scanf("%d",&n);

	int arr[n];
    printf("Enter each number individually (press space after entering.\n");
	for(int i=0; i<n; i++) {
		scanf("%d", &arr[i]);
	}

	int maxcount=0;
	int result = arr[0];

	for(int i=0; i<n; i++) {
		int count = 0;

		for(int j=0; j<n ; j++) {
			if(arr[i]==arr[j]) {
				count++;
			}
		}
		if(maxcount<count) {
			maxcount = count;
			result = arr[i];
		}
	}

	printf("The most frequently appearing number is %d, with a frequency of %d.", result, maxcount);
	return 0;
}