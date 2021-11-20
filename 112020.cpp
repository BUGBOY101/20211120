#define	_CRT_SECURE_NO_WARNINGS 1
//冒泡排序
#include<iostream>
using namespace std;
#define MAX 100
int main() {
	int n, i, j, a[MAX];
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (i = 0; i < n-1; i++) {
		for (j = 0; j < n - i - 1; j++) {
			if (a[j] > a[j + 1]) {//从小到大排序
				int temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}

//#include<stdio.h>
//int main() {
//	int n, i, j, sum = 0, ret = 0;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++) {
//		ret = 0;
//		for (j = 1; j <= i; j++) {
//			ret = ret + j;
//		}
//		sum = sum + ret;
//	}
//	printf("%d\n", sum);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n, a, b, c;
//	scanf("%d", &n);
//	a = n % 10;//个位
//	b = n / 10 % 10;//十位
//	c = n / 100;//百位
//	if (a * a * a + b * b * b + c * c * c == n)
//		printf("是\n");
//	else
//		printf("不是\n");
//}

//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	char str[20];
//	printf("请输入：");
//	scanf("%s", str);
//	int n = strlen(str);
//	int i = 0, arr1[100];
//	for (i = 0; i < n; i++) {
//		arr1[i] = str[i] - '0';
//	}
//	if ((arr1[0]) * (arr1[0]) * (arr1[0]) + (arr1[1]) * (arr1[1]) * (arr1[1]) + (arr1[2]) * (arr1[2]) * (arr1[2]) == (arr1[0]) * 100 + (arr1[1]) * 10 + arr1[2])
//	{
//		printf("为水仙花数\n");
//	}
//	else
//	{
//		printf("不是\n");
//	}
//	return 0;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, i, a[100] = {0,1,1 };
//	cin >> n;
//	for (i = 3; i <= 20; i++) {
//		a[i] = a[i - 1] + a[i - 2];
//	}
//	for (i = 1; i <= 20; i++) {
//		printf("%-6d", a[i]);
//		if (i % 10 == 0)
//			cout << endl;
//	}
//	cout << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, i, a[1000] = { 0 };
//	double sum = 0, aver;
//	cin >> n;
//	for (i = 0; i < n; i++) {
//		cin >> a[i];
//		sum += a[i];
//	}
//	aver = sum / n;
//	int max = a[0], min = a[0];
//	for (i = 1; i < n; i++) {
//		if (a[i] > max)
//			max = a[i];
//		if (a[i] < min)
//			min = a[i];
//	}
//	cout << "最大值：" << max << endl;
//	cout << "最小值：" << min << endl;
//	cout << "平均值：" << aver << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	/*int x = 19;
//	while (x++ < 20) {
//		x += 2;
//		printf("hehe\n");
//	}*/
//	int i;
//	for (i = 5; i++ < 6;) {
//		printf("hehe\n");
//	}
//	cout << i << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, a, b, c;
//	while (cin >> n) {
//		a = n % 10;
//		b = n / 10 % 10;
//		c = n / 100;
//		if (a * a * a + b * b * b + c * c * c == n)
//			cout << n << "是水仙花数" << endl;
//		else
//			cout << n << "不是水仙花数" << endl;
//	}
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int n, sum = 0, ret, i, j, flag = 1;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		ret = 1;
//		for (j = 1; j <= i; j++) {
//			ret *= j;
//		}
//		sum = sum + flag * ret;
//		flag = -flag;
//	}
//	cout << "1!-2!+3!-4!+...+n!=" << sum << endl;
//}

//#include<iostream>
//using namespace std;
//int main() {
//	int i, j, n;
//	cin >> n;
//	for (i = 1; i <= n; i++) {
//		for (j = 1; j <= n - i; j++)
//			cout << " ";
//		for (j = 1; j <= 2 * i - 1; j++)
//			cout << "*";
//		cout << endl;
//	}
//}

//int main() {
//	int a = 7, b = 1;
//	cout << a++ << ++b << endl;
//	cout << ((a = 3 * 5, a * 4), a + 15) << endl;
//	printf("%d\n", !a < b);
//	short int n = -32768; n--;
//	cout << pow(2, 15) << endl;
//	printf("n=%d\n", n);
//}

//#include<iostream>
//using namespace std;
//int main() {
//	double c, f;
//	cout << "请输入一个华氏温度：";
//	cin >> f;
//	c = 5.0 / 9 * (f - 32);
//	cout << "转换成摄氏温度为：";
//	printf("%.2lf\n", c);
//}

//#include<iostream>
//using namespace std;
//int main() {
//	char a = 'a';
//	printf("%d\n", a);
//	double b = 1.0;
//	float c = 1.2;
//	int d = 1;
//	cout << a * d + b - c << endl;
//	cout << sizeof("A") << endl;
//	cout << sizeof('a') << endl;
//}