#include<iostream>
using namespace std;
class Complex {
public:
	double real, image;
	Complex(double r, double i) {
		real = r, image = i;
	}
	Complex(const Complex & c1) {
		real = c1.real;
		image = c1.image;
		cout << "我被调用了";
	}
};
class Person {
public:
	Person() {
		cout<<"use Person()"<<endl;
	}
	~Person() {
		cout<<"use ~Person()"<<endl;
	}
};
//class Student {
//public:
//	Student() {
//		cout << "student" << " ";
//	}
//	Student(string name, int age) {
//		cout << name << " "<<age<<endl;
//	}
//	~Student() {
//		cout << "delete" << endl;
//	}
//};



//静态成员变量
class ClassName {
public:
	int num;
	static string name;
	//静态函数
	static void sayHello() {
		cout << "hello" << " " << name; //<<num << endl; 不能访问非静态成员
	}
};
//静态成员变量引用与初始化,可用类名引用和初始化，只能在main外面初始化
string ClassName::name = "张三";


//const修饰类的成员函数（可以访问类中所有，但是不能修改值）
class Student {
public:
	string name;
	int age;
	Student(string _name,int _age) {
		this->name = _name;
		this->age = _age;
	}
	/*const跟谁走就管谁，const type 函数() 前面修饰返回值，表示返回值只读 eg.const int& getAge()const {return age;}
	type 函数() const {}这个函数不能修改对象任何成员变量*/
	void sayhello()const {
		cout << "name: " << this->name << "age: " << this->age;
	}
};

int main() {
	Student s1("张三", 20);
	s1.sayhello();

	/*ClassName::sayHello();
	ClassName s2;
	s2.sayHello();*/


	////类名进行访问
	//cout << "ClassName::name: " << ClassName::name << endl;
	//ClassName s1;
	////对象名进行访问
	//cout << "s1 name: " << s1.name << endl;

	//Complex c1(1, 2);
	//Complex c2(c1);//调用复制函数
	//cout << c2.real << " " << c2.image;
	//Person* p1 = new Person();//动态创建对象
	//delete p1;


	////动态创建对象数组,在栈上，跳过默认构造函数
	//Student stu[] = { {"张三",20},{"王五",22} };
	////创建堆上对象数组必须提供构造函数（默认），开辟了20个大小为Student的数组空间，指针存的是数组首地址
	//Student* pstu = new Student[20];
	//delete[]pstu;
	////打印下来有22个delete,是因为delete手动释放20个数组，而程序结束，栈区的stu[]的数组进行了自动释放，对象数组释放需要有[]

	////new与delete普通数组
	//char* p1 = new char[50];
	//int* p2 = new int[50];
	//int* p3 = new int[10] {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	////释放数组内存
	//delete[]p1;
	//delete[]p2;
	//delete[]p3;

	
	return 0;
}