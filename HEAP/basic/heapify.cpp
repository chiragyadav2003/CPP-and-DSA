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

        // put last node element at root node
        arr[1] = arr[size];

        // remove lase node
        size--;

        // put root node at corect position
        int i = 1;

        while (i < size)
        {
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

// here i corrospond to index in array regarding to which we want to heapify our array corrospond to value hold by that index in array
void heapify(int arr[], int n, int i)
{
    // here now currently largest point to max value corrosponding index in array
    int largest = i;

    int left = 2 * i;
    int right = 2 * i + 1;

    // update largest if left child holds value larger than root
    if (left <= n && arr[left] > arr[largest])
        largest = left;

    // update largest if right child holds value greater than root
    if (right <= n && arr[right] > arr[largest])
        largest = right;

    // we will swap only when our larget index get updated
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        // check further for remaining tree for largest
        heapify(arr, n, largest);
    }
}

int main()
{

    heap h;
    h.insert(50);
    h.insert(54);
    h.insert(53);
    h.insert(52);
    h.insert(55);
    h.insert(60);

    cout << "after insertion : ";
    h.print();

    cout << "after deletion : ";
    h.deleteFromHeap();
    h.print();

    int arr[6] = {-1, 54, 53, 55, 52, 50};
    // here n = 5 as we have to ignore index 0 corrospond value
    // index to be consider = 1, 2, 3, 4, 5
    int n = 5;

    cout << "printing array before heapify :" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = n / 2; i > 0; i--)
    {
        heapify(arr, n, i);
    }

    cout << "printing array after heapify :" << endl;
    for (int i = 1; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
