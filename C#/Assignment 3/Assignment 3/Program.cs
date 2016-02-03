using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace Assignment_3
{
    class Program
    {
        static void Main(string[] args)
        {
            int num = 0;
            while (true)
            {
                Console.WriteLine("Please enter the size of the sequence:");     //提示用户输入序列长度；
            L2:try
                {
                    num = Convert.ToInt32(Console.ReadLine());
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Input invild,please input again:");
                    goto L2;
                }
                Console.WriteLine("Please enter the value of the sequence:");    //提示用户输入序列元素；
                int[] array = new int[num];       //声明数组；
            L3:try
                {
                    for (int i = 0; i < array.Length; i++)
                        array[i] = Convert.ToInt32(Console.ReadLine());
                }
                catch (Exception ex)
                {

                    Console.WriteLine("Input invild,please input the whole integer sequence again:");
                    goto L3;
                }
                Console.WriteLine("Please enter the way of sort by A or D(A for ascending order and D for descending order):");  //提示用户输入排序方式，升序A或者降序D；
                char n;
            L4: try
                {
                    n = Convert.ToChar(Console.ReadLine());
                }
                catch (Exception ex)
                {
                    Console.WriteLine("input invild,pelase input again:");
                    goto L4;
                }
                if (n != 'A' && n != 'D') { Console.WriteLine("input invild,pelase input again:"); goto L4; }
                SelectionSort(array, n);                                   //调用选择排序的函数；
                Console.WriteLine("The sorted array is:");
                foreach (int value in array)                     //输出排序之后的数组
                    Console.Write("  {0}", value);
                Console.WriteLine();
                Console.WriteLine("Continue to sort another integer sequence?input Y or N:");
                char r;
            L1:try
                {
                     r = Convert.ToChar(Console.ReadLine());
                }
                catch (Exception ex)
                {
                    Console.WriteLine("Input invild,please input again:");
                    goto L1;
                }
                if (r != 'N' && r != 'Y') { Console.WriteLine("Input invild,please input again:"); goto L1; }
                if (r == 'N') break;
            }
        }

        public static void SelectionSort(int[] array, char n)
        {
            int length = array.Length;
            if (n == 'A')
            {
                for (int i = 0; i < length - 1; i++)
                {                                         //定义选择排序方法，k用来记录最小元素的下标；
                    int k = i;
                    for (int j = i + 1; j < length; j++)
                        if (array[j] < array[i])
                        {
                            k = j;
                            Swap(ref array[k], ref array[i]);
                        }
                }//循环结束

            }
            else if (n == 'D')
            {
                for (int i = 0; i < length - 1; i++)
                {                              //定义选择排序方法，k用来记录最大元素的下标，默认最大的为array[0]
                    int k = i;
                    for (int j = i + 1; j < length; j++)
                    {
                        if (array[j] > array[i])
                        {
                            k = j;
                            Swap(ref array[k], ref array[i]);
                        }
                    }

                }//循环结束
            }      //降序显示数组

        }   //定义方法结束

        public static void Swap(ref int num1, ref int num2)
        {
            int num;
            num = num1; num1 = num2; num2 = num;
        }
    }
}
