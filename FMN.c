#include <stdio.h>

int main() {

	int n = 0;

	scanf("%d", &n);

	int arr[n];

	for(int i=0; i<n; i++){
	   scanf("%d",&arr[i]);
	}
	
	int max = 0;
	int index = 0;
	for(int i=0; i<n; i++) {
		if(arr[i]>max) {
		    max= arr[i];
			index = i;
		}
	}
	printf("%d",index);

	return 0;
}