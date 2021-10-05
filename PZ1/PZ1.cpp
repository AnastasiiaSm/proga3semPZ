#include <iostream>

class Array {
	
private:
	int size;
	int* arr;
	
public:
	Array(int size) {
		this->size = size;
		arr = new int[size];
	};
	
	~Array() {
		delete[] arr;
	};
	
	void print() {
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	
	void set(int a, int b) {
		if (a < 0 || a >= size)
			std::cout << "Vihod za predel massiva" << std::endl;
		else if (b < -100 || b > 100)
			std::cout << "Vihod za predel dopustimih znachenii" << std::endl;
		else arr[a] = b;
	}
	
	void get(int a) {
		if (a < 0 || a >= size) {
			std::cout << "Vihod za predel massiva" << std::endl;
			return -1;
		}
		else return arr[a];
	}
	
	void add(int a) {
		if (a >= -100 || a <= 100) {
			int *arr1;
			int size1 = size + 1;
			this -> size1 = size1;
			arr1 = new int[size1];
			for (int i = 0; i < size; i++)
				arr1[i] = arr[i];
			arr1[size] = a;
			free(arr):
			arr = arr1;
			size = size + 1;
		}
		else
			std::cout << "Vihod za predel dopustimih znachenii" << std::endl;
	}
	
	void pls(Array &second) {
		for (int i=0; i<=size; i++)
			arr[i] = arr[i] + second.arr[i];
	}
	
	void min(Array &second) {
		for (int i=0; i<=size; i++)
			arr[i] = arr[i] - second.arr[i];
	}
};


int main() {
	
}
