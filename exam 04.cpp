#include <iostream>

class Tree {
public:
    // Constructor
    Tree(int w, int h) : width(w), height(h) {
        std::cout << "Tree object created with width " << width << " and height " << height << std::endl;
    }

    // Destructor
    ~Tree() {
        std::cout << "Tree object destroyed" << std::endl;
    }

    // Set function to take input
    void setValues(int w, int h) {
        width = w;
        height = h;
    }

    // Display function to show values
    void display() {
        std::cout << "Tree width: " << width << ", height: " << height << std::endl;
    }

private:
    int width;
    int height;
};

int main() {
    // Creating an object of Tree class using constructor
    Tree myTree(10, 20);

    // Using the setValues function to change the object's attributes
    myTree.setValues(15, 25);

    // Displaying the values using the display function
    myTree.display();

    return 0;
}
