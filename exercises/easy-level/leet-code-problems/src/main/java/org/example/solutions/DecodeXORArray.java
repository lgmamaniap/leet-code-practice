package org.example.solutions;

public class DecodeXORArray {
  public void testProblem() {
    int[] encoded = {1,2,3};
    int[] response = this.decode(encoded, 1);
    for (int j : response) System.out.print(j);
  }

  public int[] decode(int[] encoded, int first) {
    int[] resp = new int[encoded.length + 1];
    resp[0] = first;
    for (int i = 0; i < encoded.length; i++)
      resp[i + 1] = resp[i] ^ encoded[i];
    return resp;
  }
}
