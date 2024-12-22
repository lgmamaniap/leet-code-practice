package org.example.solutions;

import java.lang.reflect.Array;
import java.util.*;

public class NearestValidPoint {
  public void testNearestValidPoint() {
    int x = 3, y = 4;
    int[][] points1 = {
        {1,2},
        {3,1},
        {2,4},
        {2,3},
        {4,4}
    };

    int[][] points2 = {
        {3,4}
    };

    int[][] points3 = {
        {2,3}
    };

    int[][] points4 = {{1,2}};

    System.out.println(this.solution(x, y, points1));
    System.out.println(this.solution(x, y, points2));
    System.out.println(this.solution(x, y, points3));
    System.out.println(this.solution(1, 1, points4));
  }

  public int solution(int x, int y, int[][] points) {
    int index = -1;
    int lessValue = Integer.MAX_VALUE;

    for (int i = 0; i < points.length; i++) {
      if (x == points[i][0] && y == points[i][1]) return i;

      if (x == points[i][0] || y == points[i][1]) {
        int nearD = Math.abs(x - points[i][0]) + Math.abs(y - points[i][1]);
        if (lessValue > nearD) {
          lessValue = nearD;
          index = i;
        }
      }
    }

    return index;
  }
}
