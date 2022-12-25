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

        // when we put index>1 then we can reach at most parent index = 1 i.e, for 2 the parent
        //  will be 1 and it is reqquired enough

        // but when we make index>=1 then for n = 1, the parent will be 1/2 i.e, 0 and
        //  then we are accessing element corrospond to 0'th index which is incorrect

        // that's why we keep index>1

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

    return 0;
}