#include <map>
#include <iostream>

template<typename K, typename V>
class interval_map {
    std::map<K, V> m_map;
    V m_valBegin;

public:
    // Constructor
    interval_map(V const& val) : m_valBegin(val) {}

    // Assign value to interval [keyBegin, keyEnd).
    // If !(keyBegin < keyEnd), this designates an empty interval, and assign should do nothing.
    void assign(K const& keyBegin, K const& keyEnd, V const& val) {
        if (!(keyBegin < keyEnd)) return; // No action for empty interval

        // Find the starting point where keyBegin lies or would be inserted
        auto it = m_map.lower_bound(keyBegin);

        // If keyBegin is not already a boundary, set it with m_valBegin or preceding value
        if (it == m_map.begin() || std::prev(it)->second != val) {
            m_map[keyBegin] = val;
        }   

        // Erase elements within [keyBegin, keyEnd) range
        while (it != m_map.end() && it->first < keyEnd) {
            it = m_map.erase(it);
        }

        // If keyEnd is not a boundary, preserve the value after keyEnd if necessary
        auto itEnd = m_map.lower_bound(keyEnd);
        if (itEnd == m_map.end() || itEnd->second != val) {
            m_map[keyEnd] = (itEnd == m_map.end()) ? m_valBegin : itEnd->second;
        }

        // Remove redundant entries where consecutive intervals have the same value
        it = m_map.begin();
        while (it != m_map.end()) {
            auto next = std::next(it);
            if (next != m_map.end() && it->second == next->second) {
                m_map.erase(next);
            } else {
                ++it;
            }
        }
    }

    // For printing purposes to see the internal state of the map
    void print() const {
        std::cout << "m_valBegin: " << m_valBegin << "\n";
        for (const auto& entry : m_map) {
            std::cout << "[" << entry.first << "] -> " << entry.second << "\n";
        }
    }
};

int main() {
    interval_map<int, char> M('A');
    M.assign(1, 3, 'B');
    M.assign(3, 5, 'A');
    M.assign(2, 4, 'C');
    
    M.print();  // To view the internal map representation

    return 0;
}
