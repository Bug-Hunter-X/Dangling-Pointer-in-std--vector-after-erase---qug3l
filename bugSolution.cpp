std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int val = vec[5]; // Access the element directly
vec.erase(vec.begin() + 4); // Remove element at index 4
int newVal = vec[4]; // Accessing the element at the new index 4 after erase