
import java.util.*;

class Solution {
    public boolean checkInclusion(String s1, String s2) {
        if (s1.length() > s2.length()) {
            return false;
        }

        Map<Character, Integer> m = new HashMap<>();
        Map<Character, Integer> n = new HashMap<>();
        for (char c : s1.toCharArray()) {
            m.put(c, m.getOrDefault(c, 0) + 1);
        }

        int k = s1.length();
        for (int i = 0; i < k; i++) {
            char c = s2.charAt(i);
            n.put(c, n.getOrDefault(c, 0) + 1);
        }

        if (m.equals(n)) {
            return true;
        }
        for (int j = k; j < s2.length(); j++) {
            char add = s2.charAt(j);
            n.put(add, n.getOrDefault(add, 0) + 1);
            char remove = s2.charAt(j - k);
            n.put(remove, n.get(remove) - 1);

            if (n.get(remove) == 0) {
                n.remove(remove);
            }

            if (m.equals(n)) {
                return true;
            }
        }

        return false;
    }
}
