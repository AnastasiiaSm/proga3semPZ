#include <iostream>
#include <cmath>
#include <typeinfo>

template <class T>
class Array {
	
private:
	int size;
	T* arr;
	
public:
	Array(int size) {
		this->size = size;
		arr = new T[size];
	};
	
	~Array() {
		delete[] arr;
	};
	
	void print() {
		for (int i = 0; i < size; i++)
			std::cout << arr[i] << " ";
		std::cout << std::endl;
	}
	
	void set(int a, T b) {
		typeid(T) == typeid(int);
		if (a < 0 || a >= size)
			throw std:out_of_range("")
		else if (b < -100 || b > 100)
			throw std:invalid_argument("")
		else arr[a] = b;
	}
	
	T get(int a) {
		if (a < 0 || a >= size)
			throw std:out_of_range("");
		else return arr[a];
	}
	
	void add(int a) {
		if (a >= -100 || a <= 100) {
			T *arr1;
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
			throw std:invalid_argument("");
	}
	
	void pls(T &second) {
		for (int i=0; i<=size; i++)
			arr[i] = arr[i] + second.arr[i];
	}
	
	void min(T &second) {
		for (int i=0; i<=size; i++)
			arr[i] = arr[i] - second.arr[i];
	}
	
	Array<T>& operator =(const Array<T>& a) {
		l = a.l;
		delete[] arr;
	    arr = new T[l];
		for (int i = 0; i < l; i++)
			arr[i] = a.arr[i];
		return *this;
	}
	
	friend std::ostream& operator <<(ostream& out, const Array<T>& b) {
		for (int i = 0; i < b.l; i++) {
			std::out << b.arr[i] << " ";			
		}
		std::out << std::endl;
		return out;
	}
	
	double dist (Array& c) {
		int d = 0;
		for (int i = 0; i< size; i++)
			d = d + (arr[i] - c.arr[i]) * (arr[i] - c.arr[i]);
		d = sqrt(d);
		return d;
	}
	
};


int main() {
	
}
