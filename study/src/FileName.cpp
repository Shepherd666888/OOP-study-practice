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
//class ClassName {
//public:
//	int num;
//	static string name;
//	//静态函数
//	static void sayHello() {
//		cout << "hello" << " " << name; //<<num << endl; 不能访问非静态成员
//	}
//};
////静态成员变量引用与初始化,可用类名引用和初始化，只能在main外面初始化
//string ClassName::name = "张三";
//

////const修饰类的成员函数（可以访问类中所有，但是不能修改值）
//class Student {
//private:
//	string name;
//	int age;
//public:
//	Student(string _name,int _age) {
//		this->name = _name;
//		this->age = _age;
//	}
//	/*this指针是一个隐含的参数，指向调用该成员函数的对象，存的是对象的地址，this指针只能在类的非静态成员函数中使用
//	 静态函数是归属类的，不归属对象，所以静态函数中没有this指针*/
//	void show() {
//		cout << "this: " << this << endl;
//	}
//	/*const跟谁走就管谁，const type 函数() 前面修饰返回值，表示返回值只读 eg.const int& getAge()const {return age;}
//	type 函数() const {}这个函数不能修改对象任何成员变量*/
//	void sayhello()const {
//		cout << "name: " << this->name << "age: " << this->age;
//	}
//};


//练习，创建矩形类，判断是不是正方形，计算面积
//class Rectangle {
//private:
//	int width;
//	int height;
//public:
//	Rectangle(int w, int h) {
//		this->width = w;
//		this->height = h;
//	}
//	bool isSquare() {
//		return this->width ==this-> height;
//	}
//	int getArea() {
//		return width * height;
//	}
//};

/*练习，定义一个动物类，实现一个静态变量count，记录被实例化次数，
创建动物吃，睡，跑等动作，再创建两个实例，分别调用*/
//class Animal {
//	private:
//		static int count;
//		string name;
//		string eat;
//		string sleep;
//		string run;
//public:
//	
//	Animal(string _name, string _eat, string _sleep, string _run) {
//			this->name = _name;
//			this->eat = _eat;
//			this->sleep = _sleep;
//			this->run = _run;
//			count++;
//		}
//		void show() {
//			cout << "name: " << this->name << " eat: " << this->eat << " sleep: " << this->sleep << " run: " << this->run << endl;
//		}
//		static int getCount() {
//			return count;
//		}
//
//};
////静态变量存在“全局/静态储存区”，生命周期为整个程序，全局共享，内存地址不变
//int Animal::count = 0;

////访问限定符,  public,  protected  , private
//	类的对象	 o			x			x
//	友元函数	 o			o			o
//	类的函数	 o			o			o
//	子类函数	 o			o			x
//class Student {
//public:
//	int v1 = 100;
//protected:
//	int v2 = 200;
//private:
//	int v3 = 300;
//public:
//	void showInfo() {
//		cout << "v1=" << v1<<endl;
//		cout << "v2=" << v2 << endl;
//		cout << "v3=" << v3<<endl;
//
//	}
//};
//class Student2 {
//private:
//	string name;
//	int age;
//public:
//	Student2(string _name, int _age) {
//		this->name = _name;
//		this->age = _age;
//	}
//	//类的友元函数，定义在类的外部，访问类的私有成员和保护成员，原型在类的定义出现过，but不属于类的成员函数
//	friend void printStudent2(Student2);
//	
//};
//
//void printStudent2(Student2 stu) {
//	cout << "name= " << stu.name<<endl;
//	cout << "age= " << stu.age<<endl;
//}


//友元类
class Teacher;
class Student{
private:
	string sname;
	int sage;
public:
	Student(string _sname, int _sage) {
		this->sname = _sname;
		this->sage = _sage;
	}
	void stu_print(Teacher& t);
};
class Teacher {
private: 
	string tname;
	int tage;
public:
	friend class Student;
	Teacher(string _tname, int _tage) {
		this->tname = _tname;
		this->tage = _tage;
	}
};
void Student::stu_print(Teacher &t) {
	cout << this->sname<<endl;
	cout << t.tname;
}

//运算符重载
//不能重载的运算符，.(类属关系运算符)，：：(域运算符)，sizeof(取类型长度运算符),?:(条件运算符)，.*(成员指针运算符)，#(编译预处理符号)

//运算符重载为类：
//函数类型 operator 运算符(参数列表) {
//	//函数体
//}
//运算符重载为友元函数：
//friend 函数类型 operator 运算符(参数列表) {
//	//函数体
//}


int main() {
	Student s1("张三", 20);
	Teacher t1("李四", 30);
	s1.stu_print(t1);



	/*Student2 s2("张三", 22);
	printStudent2(s2);*/

	/*Student s1;
	s1.showInfo();
	s1.v1 = 99;*/
	/*s1.v2 = 99;
	s1.v3 = 99;*/




	/*Animal a1("狗", "吃骨头", "未睡觉", "跑步");
	a1.show();
	cout<<"count1: "<<Animal::getCount()<<endl;
	Animal a2("猫", "吃鱼", "睡觉", "走路");
	a2.show();
	cout << "count2: " << Animal::getCount();*/


	/*Rectangle r1(10, 20);
	if (r1.isSquare()) {
		cout << "是正方形" << endl;
	}
	else {
		cout << "不是正方形" << endl;
	}
	cout<<"矩形面积： "<<r1.getArea();*/



	/*Student s1("张三", 20);
	s1.show();
	cout << "s1= " << &s1 << endl;
	Student s2("李四", 22);
	s2.show();
	cout << "s2= " << &s2 << endl;*/

	//s1.sayhello();

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