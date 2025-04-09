#include <iostream>
#include <vector> // for using vector
using namespace std;

int main()
{
    // Different vector initializations
    vector<int> vec1;              // empty vector
    vector<int> vec2 = {1, 2, 3};  // vector with values
    vector<int> vec3(3, 1);        // vector with only one value (1), 3 times → [1, 1, 1]
    vector<int> vec4(3);           // vector with 3 elements, default value is 0 → [0, 0, 0]

    // Accessing elements with [] — no bounds checking!
    cout<<"vec1 "<<vec1[0]<<" of size "<< sizeof(vec1);
    // ❌ vec1 is empty, so vec1[0] is out of bounds — causes undefined behavior or crash
    // 🔸 This line might crash or print garbage because there's no element at index 0

    cout<<"vec2 "<<vec2[0]<<" " << vec2[1] << " " << vec2[2] << " of size " << sizeof(vec2);
    // ✅ vec2 has 3 elements, accessing with [] is valid
    // ❗ But [] doesn't check if the index is valid — you're responsible

    cout << "vec3 " << vec3[0] << " " << vec3[1] << " " << vec3[2] << " of size " << sizeof(vec3);
    // ✅ vec3 also has 3 elements — accessing with [] is fine here

    cout << "vec4 " << vec4[0] << " " << vec4[1] << " " << vec4[2] << " of size " << sizeof(vec4);
    // ✅ vec4 has 3 default-initialized elements (0s)

    cout << endl;

    // NEW: Safe access using .at() for learning
    // This will throw an exception if out of bounds, unlike []

    cout << "Accessing using .at():\n";

    if (!vec1.empty()) {
        cout << "vec1.at(0): " << vec1.at(0) << endl;
    } else {
        // ✅ .at() provides built-in safety and will throw std::out_of_range
        cout << "vec1 is empty, vec1.at(0) would throw out_of_range exception.\n";
        // 🔸 Unlike [], this will not crash — you'll get a clear runtime error instead
    }

    // ✅ .at() works the same as [], but with bounds checking
    // If you try vec2.at(5), it would throw an exception instead of crashing
    cout << "vec2.at(0): " << vec2.at(0) << ", vec2.at(1): " << vec2.at(1) << ", vec2.at(2): " << vec2.at(2) << endl;
    // Safe and valid

    cout << "vec3.at(0): " << vec3.at(0) << ", vec3.at(1): " << vec3.at(1) << ", vec3.at(2): " << vec3.at(2) << endl;
    // Also safe and valid — same output as vec3[0], etc., but safer

    cout << "vec4.at(0): " << vec4.at(0) << ", vec4.at(1): " << vec4.at(1) << ", vec4.at(2): " << vec4.at(2) << endl;
    // Works just like [], but avoids undefined behavior if index is invalid

    return 0;
}
