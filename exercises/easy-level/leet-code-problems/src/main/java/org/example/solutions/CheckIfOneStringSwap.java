package org.example.solutions;

import java.util.HashMap;
import java.util.Map;
import java.util.Vector;

// 1790. Check if One String Swap Can Make Strings Equal
public class CheckIfOneStringSwap {
  public void testProblem() {
    System.out.println(this.solution("bank", "kanb"));
    System.out.println(this.solution("attack", "defend"));
    System.out.println(this.solution("kelb", "kelb"));
  }

  public boolean solution(String s1, String s2) {
    Map<String, Integer> swapMap = new HashMap<>();
    boolean swap = false;
    int counter = 0;
    for (int i = 0; i < s1.length(); i++) {
      if (s1.charAt(i) == s2.charAt(i)) continue;

      counter++;
      if (counter > 2) return false;

      String inverseKey = Character.toString(s2.charAt(i)) + Character.toString(s1.charAt(i));
      String key = Character.toString(s1.charAt(i)) + Character.toString(s2.charAt(i));
      if (swapMap.containsKey(inverseKey)) {
        swap = true;
      }
      swapMap.put(key, i);
    }
    if (counter == 0 ) return true;
    return counter == 2 && swap;
  }
}
