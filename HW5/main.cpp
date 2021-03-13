#include <iostream> 
#include <iomanip>
using namespace std;

template <typename T> void selectionSort(T* const array, int const size) {
	int smallest;
	for(int i = 0; i < size - 1; ++i) {
		smallest = i;
		for(int index = i + 1; index < size; ++index)
			if(array[index] < array[smallest])
				smallest = index;
		swap<T>(&array[i], &array[smallest]);
	}
}

template <typename T> void swap(T* const element1Ptr, T* const element2Ptr) {
	T hold = *element1Ptr;
	*element1Ptr = *element2Ptr;
	*element2Ptr = hold;
}

template <typename T> void printarray(T* const array, int const size) {
	for (int i = 0; i < size; ++i)
		cout << array[i];
}

int main() {
	const int arraySize = 10;
	int array1[arraySize] = {84, 56, 50, 33, 44, 53, 62, 30, 92, 94};
	float array2[arraySize] = {68.99, 52.95, 71.96, 68.98, 48.39, 87.85, 49.58, 76.77, 80.26, 34.6};

	cout << "Original data: " << setw(4) << endl;
	cout << "Int array: " << endl;
	printarray<int>(array1, arraySize);
	cout << "Float array: " << endl;
	printarray<float>(array2, arraySize);

	selectionSort<int>(array1, arraySize);
	selectionSort<float>(array2, arraySize);

	cout << "Sorted data: " << setw(4) << endl;
	cout << "Int array: " << endl;
	printarray<int>(array1, arraySize);
	cout << "Float array: " << endl;
	printarray<float>(array2, arraySize);
	return 0;
}