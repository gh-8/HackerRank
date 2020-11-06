using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
/*
Task
Given an array of integers, find the sum of its elements.
Input Format
The first line contains an integer n denoting the size of the array.
The second line contains n space-separated integers representing the array's elements.
*/
class Solution {
    static int simpleArraySum(int[] ar) {

        int sum=0;
        for(int i=0;i<ar.Length;i++)
        {
            sum+=ar[i];
        }
         return sum;

    }

    static void Main(string[] args) {
        TextWriter textWriter = new StreamWriter(@System.Environment.GetEnvironmentVariable("OUTPUT_PATH"), true);

        int arCount = Convert.ToInt32(Console.ReadLine());

        int[] ar = Array.ConvertAll(Console.ReadLine().Split(' '), arTemp => Convert.ToInt32(arTemp))
        ;
        int result = simpleArraySum(ar);

        textWriter.WriteLine(result);

        textWriter.Flush();
        textWriter.Close();
    }
}
