

template<typename T>
class Array
{
private:

    T* data = nullptr;
    int size;

public:

    Array(int _size=10)
    {
        size = _size;
        data = new T[size] {'0'};
    }
    ~Array()
    {
        if ( size > 0 ) delete [] data;
    }
    int length() { return size;}

    T& operator[](int index);
};

template<typename T>
T& Array<T>::operator[](int index)
{
    return data[index];
}
