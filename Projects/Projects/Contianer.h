template <typename T>
class Container
{
	int array_size = 0, Sizex = 1;
	T *array_t;
public:
	Container(){
		array_t = new T[Sizex];
	};
	~Container(){
		delete[] array_t;
	};
	void add(T object){
		if (array_size == Sizex){
			Sizex = 2 * Sizex;
			T *new_array_t = new T[Sizex];
			for (int i = 0; i < array_size; i++){
				new_array_t[i] = array_t[i];
			}
			new_array_t[array_size] = object;
			delete[] array_t;
			array_t = new_array_t;
		}
		else
			array_t[array_size] = object;
		array_size++;

	}
	;
	int length(){
		return array_size;
	};
	T& operator[](int index){
		try{
			if (index >= array_size) {
				std::cout << index + 1 << " - index not exists\n";
				throw 1;
			}
			return array_t[index];
		}
		catch (...){}
	};
	bool isEmpty(){
		return array_size == 0;
	};
	void clear(){
		array_size = 0;
		Sizex = 1;
		delete[] array_t;
		array_t = new T[Sizex];
	};

};

