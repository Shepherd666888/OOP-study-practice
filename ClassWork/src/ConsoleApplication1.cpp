// ConsoleApplication1.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//
#include"TeachingClass.h"
#include"CollChinese.h"
#include"CollMath.h"
#include"Course.h"
#include"GradeOfCourse.h"
#include <iostream>

int main()
{
    TeachingClass tc(1,"sdf","123");
    tc.showInfo();
    CollChinese* d = new CollChinese("11", "钉钉", "2", "古文", "李同学");
   std::cout << d->getCourseTitle()<< std::endl;

   CollMath* e = new CollMath("11", "西南科技大学", "2", "古文", "李同学");
   std::cout << e->getCourseTitle() << std::endl;

   Course* p1 = new CollChinese("CH101", "大学语文", "2026秋", "张老师", "TA小李");
   Course* p2 = new CollMath("MA102", "高等数学", "2026秋", "TA小王", "作业A");
   std::cout << p1->establishCourse() << std::endl;
   std::cout << p2->establishCourse() << std::endl;
   delete p1;
   delete p2;

    std::cout << "Hello World!\n";
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
