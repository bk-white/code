package Junit01;


/*
输入3个整数a、b和c分别作为三角形的三条边，要求a、b和c必须满足以下条件：
        1、整数
        2、3个数
        3、边长大于等于1，小于等于100
        4、任意两边之和大于第三边
        输出为5种情况之一：
        如果不满足条件1、2、3，则程序输出为“输入错误”。
        如果不满足条件4，则程序输出为“非三角形”。
        如果三条边相等，则程序输出为“等边三角形”。
        如果恰好有两条边相等，则程序输出为“等腰三角形”。
        如果三条边都不相等，则程序输出为“一般三角形”。*/


public class demo01 {
    public static void main(String[] args) {
        sjx(41, 4, 4);
    }

    public static void sjx(int a, int b, int c) {

        if (1 < a && a < 100 && 1 < b && b < 100 && 1 < c && c < 100) {
            if (!((a + b > c) && (a + c > b) && (b + c > a))) {
                System.out.println("非三角形");

            } else if (a == b && a == c && b == c) {
                System.out.println("等边三角形");

            } else if (a == b || a == c || b == c) {
                System.out.println("等腰三角形");

            }else if(!((a == b) || (a == c) || (b == c))){
                System.out.println("一般三角形");
            }
        }else
            System.out.println("输入错误");
    }
}



