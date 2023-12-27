#include <iostream>
#include <vector>

class Vector
{
private:
    std::vector<int> data;

public:
    // Constructors
    Vector() {}

    Vector(std::initializer_list<int> values) : data(values) {}

    // Overloading the * operator for scalar multiplication
    friend Vector operator*(const Vector &vec, int scalar)
    {
        Vector result = vec;
        for (int &value : result.data)
        {
            value *= scalar;
        }
        return result;
    }

    friend Vector operator*(int scalar, const Vector &vec)
    {
        return vec * scalar;
    }

    // Overloading the << operator for output stream insertion
    friend std::ostream &operator<<(std::ostream &os, const Vector &vec)
    {
        os << "[";
        for (size_t i = 0; i < vec.data.size(); ++i)
        {
            os << vec.data[i];
            if (i < vec.data.size() - 1)
            {
                os << ", ";
            }
        }
        os << "]";
        return os;
    }

    // Overloading the >> operator for input stream extraction
    friend std::istream &operator>>(std::istream &is, Vector &vec)
    {
        char c;
        is >> c; // Read the opening '['
        int value;
        vec.data.clear();

        while (true)
        {
            is >> value;
            vec.data.push_back(value);

            // Check for ',' or ']'
            is >> c;
            if (c == ']')
            {
                break;
            }
        }

        return is;
    }
};

int main()
{
    // Example usage of overloaded operators
    Vector v1 = {1, 2, 3};
    std::cout << "Original Vector: " << v1 << std::endl;

    Vector v2 = v1 * 2;
    std::cout << "Scalar Multiplication (v1 * 2): " << v2 << std::endl;

    Vector v3 = 3 * v1;
    std::cout << "Scalar Multiplication (3 * v1): " << v3 << std::endl;

    Vector v4;
    std::cout << "Enter a vector (e.g., [4, 5, 6]): ";
    std::cin >> v4;
    std::cout << "Entered Vector: " << v4 << std::endl;

    return 0;
}
