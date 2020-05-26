/*
四则运算钟的“+”号常见用法：
1：对于数值来说就是加法。
2：对字符char来说，计算之前变成int，然后在计算（参照ascll表）
3：对于字符串String（首字母大写，但不是关键字）来说，加号表示连接字符串操作。
任何数据类型和字符串连接都会变成字符串。
*/

public class Test04{
	public static void main(String[] args){
		String str1 = "Hello";
		System.out.println(str1);
		System.out.println("Hello"+"World");
	}
}