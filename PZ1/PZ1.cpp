#include <iostream>

class GoodClass {
	
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
	
	void set(int, int)
};


int main() {
	
}
