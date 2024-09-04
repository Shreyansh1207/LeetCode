class MyHashSet {
private:
    static const int capacity = 1000; // A prime number for better distribution
    vector<list<int>> buckets;

    int hash(int key) {
        return key % capacity;
    }
    
public:
    MyHashSet() {
        buckets.resize(capacity);
    }
    
    void add(int key) {
        int bucketIndex = hash(key);
        auto& bucket = buckets[bucketIndex];
        if (!contains(key)) {
            bucket.push_back(key);
        }
    }
    
    void remove(int key) {
        int bucketIndex = hash(key);
        auto& bucket = buckets[bucketIndex];
        bucket.remove(key); // remove the key if it exists
    }
    
    bool contains(int key) {
        int bucketIndex = hash(key);
        auto& bucket = buckets[bucketIndex];
        for (int element : bucket) {
            if (element == key) {
                return true;
            }
        }
        return false;
    }
};
