/**
 * // This is the ArrayReader's API interface.
 * // You should not implement it, or speculate about its implementation
 * class ArrayReader {
 *   public:
 *     int get(int index);
 * };
 */

class Solution {
public:
    int search(const ArrayReader& reader, int target) {
                    int   l = 0;
                    int h = 100000;
                    while(l<=h){
                        int m = l+(h-l)/2;
                        if(reader.get(m) == target) return m;
                        if(reader.get(m)< target) l = m+1;
                        else h = m-1;
                        
                    }
        return -1;
    }
};
