struct MyVector
{
	int* arr;
	int index;
	int Size;

	void vector_new();
	void vector_delete();
	void vector_push_back(int a);
	void vector_pop_back();
	int& vector_front();
	int& vector_back();
	int vector_size();
	void vector_print();

};
