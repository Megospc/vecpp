# vecpp
Vector types in C++.

Version: 1.7.3 (24.04.2024)

## Example
```C++
#include <iostream>

#include "vecpp.h"

using namespace vecpp;

int main() {
    vec2 myVec2 = vec2(1.0, 0.1); // Create a 2-beses-vector
    
    vec4 myVec4 = vec4(myVec2, 0.0, 0.8); // Use vector to create a new one
    
    float length = myVec4.length(); // Get length of vector
    
    std::cout << "myVec4's length: " << length << std::endl;
    
    myVec4 += 0.5; // Add 0.5 to any myVec4 bases
    myVec4 *= vec4(1.0, 0.01, 1.0, 0.5); // Multiple vectors
    
    std::cout << "myVec4: ";
    std::cout << "x=" << myVec4.x << ", "; // Get X basis
    std::cout << "y=" << myVec4.y << ", ";
    std::cout << "z=" << myVec4[2] << ", "; // Or like this
    std::cout << "w=" << myVec4.w << std::endl;

    myVec4.x = 0.01; // Set X basis

    vec3 child = myVec4.ywz(); // Get child vector
    // child.x = myVec4.y
    // child.y = myVec4.w
    // child.z = myVec4.z

    vec2 value = vec2(0.3, -1.0);

    myVec4.xw(value); // Set child vector
    // myVec4.x = value.x
    // myVec4.w = value.y

    myVec4.w *= -1.0; // Multiple X basis
    
    vec4 normalized1 = myVec4.normalize(); // Get normalized vector
    vec4 normalized2 = ~myVec4; // The same

    if (all(myVec4 > 0.0)) std::cout << "All myVec4 bases are greater than 0.0" << std::endl;
    if (!any(myVec2 < 0.0)) std::cout << "myVec2 has no basis less than 0.0" << std::endl;
    
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