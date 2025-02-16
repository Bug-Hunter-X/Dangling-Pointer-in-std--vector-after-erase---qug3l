# Dangling Pointer in std::vector after erase()
This repository demonstrates a common error in C++: creating a dangling pointer after using the erase() method on a std::vector.
The file 'bug.cpp' contains the erroneous code that leads to undefined behavior due to the use of a dangling pointer. The file 'bugSolution.cpp' provides a corrected version.