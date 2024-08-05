#include <iostream>
#include <vector>
using namespace std;

struct vertex
{
    int x, y, z;
    vertex(int x, int y, int z)
        :x(x), y(y), z(z)
    {
    }
    vertex(const vertex& vertex)
        :x(vertex.x),y(vertex.y),z(vertex.z)
    {
        cout << "copied" << endl;
    }
};

void printf(vertex& v)
{
    cout << v.x << v.y << v.z << endl;
}

int main()
{
    vector<vertex> vertices;
    vertices.reserve(3);//reserves 3 block of memory
    vertices.emplace_back( 1,2,3 );
    vertices.emplace_back(6, 2, 6);
    vertices.emplace_back(5, 9, 8);
    for (vertex& v : vertices)//avoid copies by using reference operator & to reduce memory usage.
    {
        printf(v);
    }


    vector<int> a;
    int n;

    // Ask the user for the number of elements they want to input
    cout << "Enter the number of elements: ";
    cin >> n;

    // Loop to take 'n' inputs from the user
    cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        int element;
        cin >> element;
        a.push_back(element);
    }

    // Optional: Print the vector to verify the contents
    cout << "The elements in the vector are: ";
    for (int i : a) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
