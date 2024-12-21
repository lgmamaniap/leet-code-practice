package org.example.solutions;

// 1784. Check if Binary String Has at Most One Segment of Ones
public class CheckIfBynaryString {
    public void testProblem() {
        String s1 = "1001", s2 = "110";
        System.out.println(this.solution(s1));
        System.out.println(this.solution(s2));
    }

    public boolean solution(String s) {
        return !s.contains("01");
    }
}
