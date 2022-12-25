#include <iostream>
using namespace std;

class heap
{
private:
    int arr[100];
    int size;

    // constructor
public:
    heap()
    {
        size = 0;
        arr[0] = -1;
    }

    // inserting in heap
    void insert(int val)
    {
        // updaing index i.e, reaching at last index
        size = size + 1;
        // update index equal last index of array
        int index = size;
        // put value to insert in last index of array
        arr[index] = val;

        while (index > 1)
        {
            // finding of parent index
            int parent = index / 2;
            // if parent holds value smaller the=an child then swap and update index
            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }

            else
            {
                return;
            }
        }
    }

    void print()
    {
        cout << "elements in heap are as follows :" << endl;
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deleteFromHeap()
    {
        if (size == 0)
        {
            cout << "nothing to delete" << endl;
            return;
        }

        //   step-1
        // put last node element at root node
        arr[1] = arr[size];

        // step-2
        // remove lase node i.e, decrease size
        size--;

        // step-3
        // put root node at corect position
        int i = 1;

        while (i < size)
        {
            // indexing is start from 1
            int leftIndex = 2 * i;
            int rightIndex = 2 * i + 1;

            if (leftIndex <= size && arr[i] < arr[leftIndex] && arr[leftIndex] > arr[rightIndex])
            {
                swap(arr[i], arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex <= size && arr[i] < arr[rightIndex] && arr[leftIndex] < arr[rightIndex])
            {
                swap(arr[i], arr[rightIndex]);
                i = rightIndex;
            }

            else
            {
                return;
            }
        }
    }
};

int main()
{

    heap h;
    h.insert(50);
    h.insert(54);
    h.insert(53);
    h.insert(52);
    h.insert(55);
    h.insert(60);

    h.print();

    h.deleteFromHeap();
    h.print();

    return 0;
}