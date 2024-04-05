#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
#include <string>
using namespace std;
bool backspaceCompare(string s, string t) {
    string a, b;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '#')
        {
            if (i > 0) {
                s.erase(i - 1, 2);
                i -= 2;
            }
            else if (i == 0)
            {
                s.erase(i, 1);
                i--;
            }
        }
    }
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == '#')
        {
            if (i > 0) {
                t.erase(i - 1, 2);
                i -= 2;
            }
            else if (i == 0)
            {
                t.erase(i, 1);
                i--;
            }
        }
    }
    if (s.compare(t) == 0)
        return true;
    return false;
}
    //bool backspaceCompare(string s, string t) {
    //    string a, b;
    //    for (int i = 0; i < s.length(); i++)
    //    {
    //        while (s[i] == '#')
    //        {
    //            if (a.length() > 0)
    //                a.erase(a.length() - 1, 1);
    //            i++;
    //        }
    //        a += s[i];
    //    }
    //    for (int i = 0; i < t.length(); i++)
    //    {
    //        while (t[i] == '#')
    //        {
    //            if (b.length() > 0)
    //                b.erase(b.length() - 1, 1);
    //            i++;
    //        }
    //        b += t[i];
    //    }
    //    return a == b;
    //}
    int main()
    {
        string s = "j##xfix",t="j###xfix";
        int a=backspaceCompare(s, t);
        return 0;
}
//class A {
//    mutable int a;
//public:
//    A() {
//        cout << "Default constructor called\n";
//    }
//    A(const A& a) {
//        cout << "Copy Constructor called\n";
//    }
//};
//int main(int argc, char const* argv[])
//{
//    A obj;
//    A a1 = obj;
//    A a2(obj);
//}
//#include<iostream>
//using namespace std;
//void func(int& x)
//{
//    cout << x << endl;
//}
//void test()
//{
//	int& x = 15;
//	int& p = x;
//	p = 12;
//	cout << x << endl;
//	return;
//}
//int main()
//{
//	const int& x = 15;
//	int* p = &x;
//	*p = 10;
//	cout << x << endl;
//	return 0;
//}
//int main()
//{
//	double a = 3.14;
//	const int& b = a;
//	a = 6.28;
//	cout << a << "," << b << endl;
//
//}