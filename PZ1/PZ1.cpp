#include <iostream>

class Array {
	
private:
	int size;
	int* arr;
	
public:
	GoodClass(int size) {
		this->size = size;
		arr = new int[size];
	};
	
	~GoodClass() {
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
			size = size + 1;
			arr[size] = a;
		}
		else
			std::cout << "Vihod za predel dopustimih znachenii" << std::endl;
	}
	
	void addition() {
		int a = 0;
		for (int i=0; i<=size; i++)
			a = a + arr[i];
		std::cout << "Sum = " << a << std::endl;
	}
	
	void subtraction() {
		int a = 0;
		for (int i=0; i<=size; i++)
			a = a - arr[i];
		std::cout << "Dif = " << a << std::endl;
	}
};


int main() {
	
}
