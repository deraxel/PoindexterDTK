#include <cstdlib>

int sum(const int* arr, int const arrlen){
	int out=0;
	for(int i=0; i<arrlen; i++){
		out+=*arr++;
	}
	return out;
}

int swap(int* arr,int const arrlen){
	int tempArr[6];
	int *temp=arr*;
	for(int i=0; i<arrlen; i++){
		*tempArr=*arr;
		tempArr*++;
		arr*++;
	}
	arr=temp;
	for(int i=0; i<arrlen; i++){
		arr*++=tempArr*--;
	}
	return *arr;
}

int main(){
	int arr[]={1,2,3,4,5,6};
	int thing=sum(arr,sizeof(arr)/sizeof(arr[0]));

	*arr=swap(arr,sizeof(arr)/sizeof(arr[0]));

	return 0;
}

//todo: create a function, sum, give that function an array of ints and it should calculate the sum of all elements in the array
//todo: sum function using pointer arithmetic
//todo: reverse the array using pointer arithmetic