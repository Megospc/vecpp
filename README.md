# vecpp
Library which adds vector types into C++.

Version: 1.3.0 (23.04.2024)

## Example
```C++
#include <iostream>

#include "vecpp.h"

using namespace vecpp;

int main() {
    vec2 myVec2 = vec2(1.0, 0.1); // Creating a vector
    
    vec4 myVec4 = vec4(myVec2, 0.0, 0.8); // Use other vector to create a new one
    
    float length = myVec4.length(); // Get length of vector
    
    std::cout << "myVec4's length: " << length << std::endl;
    
    myVec4 += 0.5; // Add 0.5 to any myVec4 basises
    myVec4 *= vec4(1.0, 0.01, 1.0, 0.5); // Multiple vectors
    
    std::cout << "myVec4: ";
    std::cout << "x=" << myVec4.x << ", "; // Getting X basis
    std::cout << "y=" << myVec4.y << ", ";
    std::cout << "z=" << myVec4[2] << ", "; // Or like this
    std::cout << "w=" << myVec4.w << std::endl;
    
    vec4 normalized1 = myVec4.normalize(); // Get normalized vector
    vec4 normalized2 = ~myVec4; // Same as normalized1
    
    // And double precision...
    dvec3 myDoubleVec = dvec3(0.1, 23.0, 4.0);
    
    return 0;
}
```

## Installing
1. Download `vecpp.h` file.
2. Put it into your project folder.
3. Include it:
```C++
#include "vecpp.h"
```