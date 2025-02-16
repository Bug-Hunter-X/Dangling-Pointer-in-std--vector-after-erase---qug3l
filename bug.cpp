std::vector<int> vec; 
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
int* ptr = &vec[5];
vec.erase(vec.begin() + 4); // Remove element at index 4
int val = *ptr; // Use dangling pointer