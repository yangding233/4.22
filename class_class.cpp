
// ////////c++中用new操作符开辟数据///////// 
// #include<iostream>
// using namespace std;
// #include<string>

// int * func()
// {
//     //在堆区船舰整形数据
//     //new返回是 该数据类型的指针
//     int * p = new int(10);
//     return p;
// }

// void test01()
// {
//     int * p = func();
//     cout << *p << endl;
//     //堆区的数据用delete释放//
//     delete p;
//     cout << *p << endl;//这里被释放了，所以显示的乱码

// };

// void test02()
// {
//     //创建数组要用[]
//     int * arr = new int[10];

//     for(int i = 0;i < 10;i++)
//     {
//         arr[i] = i;
//         cout << arr[i] << endl;
//     }
//     delete[] arr;//释放数组需要加[]  
// }

// int main()
// {
//     test01();
//     test02();


//     system("pause");
//     return 0;
// }


////////引用：起别名///////// 
// #include<iostream>
// using namespace std;
// #include<string>


// int main()
// {
//     int a = 10;
//     int &b = a;
//     b = 20;
//     cout << a << endl;

//     //注意事项：
//     //1. 必须要初始化
//     //int &b  ×
//     //2.引用在初始化后，不可以改变
//     //int c = 20;
//     //b = c  //这里是赋值操作，不是更改引用

//     system("pause");
//     return 0;
// }

///////引用做函数参数///////

//优点：可以简化指针修改实参//

// #include<iostream>
// using namespace std;
// #include<string>

// void S1(int a , int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void S2(int * a , int * b)
// {   
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void S3(int &a , int &b)//这里是起别名
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// int main()
// {
//     int a = 10;
//     int b = 20;
//     S1(a,b);//值传递
//     S2(&a,&b);//地址传递
//     S3(a,b);//引用传递，实参发生了改变，与地址传递类似 
//     system("pause");
//     return 0;
// }

// ///////引用做函数的返回值/////


// #include<iostream>
// using namespace std;
// #include<string>

// //1.不怕返回局部变量的引用//
// int& test01()
// {
//     int a = 10;
//     return a;
// }

// //2.函数的调用可以作为左值(等号的左边叫做左值)

// int& test02()
// {
//     static int a = 10;//静态变量，存放在全局区，全局区上的数据在程序结束后系统释放
//     return a;
// }

// int main()
// {
//     // int &ref = test01();//起别名操作
//     // cout << ref << endl;//第一次正确是因为编译器做了保留
//     // cout << ref << endl;//第二次的结果是错误的,局部变量被释放

//     int &ref = test02();
//     cout << ref << endl;
//     cout << ref << endl;
//     test02() = 1000;
//     cout << ref << endl;
//     cout << ref << endl;


//     system("pause");
//     return 0;
// }


//////////////常量引用////////////////

//作用：用来修饰形参，防止误操作

// #include<iostream>
// using namespace std;
// #include<string>

// void valu(const int &a)
// {
//     //a = 1000;//这里修改了值，若加上const则不能修改
//     cout << a << endl;

// }

// int main()
// {
//     int a = 100;
//     valu(a);


//     system("pause");
//     return 0;
// }

/////////////函数默认参数/////////////////

// #include<iostream>
// using namespace std;
// #include<string>

// //int func(int a,int b = 20,int c = 30);//函数声明和函数实现只有一个能有默认参数
// int func(int a,int b = 10,int c = 20)//前面有了默认参数，后面的都要有默认值
// {
//     return a+b+c;

// }

// int main()  
// {
//     int a = 10;
//     int b = 20;
//     int c = 30;
//     func(a);
//     func(a,b);//如果传了数据就用自己的数据

//     system("pause");
//     return 0;
// }

/////////////////////函数占位操作/////////////////////

// #include<iostream>
// using namespace std;
// #include<string>

// void func(int a , int )
// {
//     cout << "this is a func" << endl;

// }

// int main()  
// {
//     func(10,10);


//     system("pause");
//     return 0;
// }

///////////函数重载//////////////


// #include<iostream>
// using namespace std;
// #include<string>

// void func(int a)
// {

// }

// void func(double a)
// {

// }
// void func(int a , int b)
// {

// }

// void func(int &a)//func(a)可调用
// {

// }

// void func(const int &a)//func(10)可调用
// {

// }

// int main()  
// {
//     func(10);
//     func(3.14);
//     func(10,10);


//     system("pause");
//     return 0;
// }




























//////////////class 类//////////////////////

// #include<iostream>
// using namespace std;
// #include<string>

// //class  代表设计一个类。类后面紧跟着的就是类名称
// class Circle
// {
//     //访问权限
//     //公共权限

// public:           //公共权限
//     //属性↓ 
//     //半径
//     int m_r;

//     //行为
//     //获取圆的周长
//     double calculateZC()
//     {
//         return 2 * 3.14 * m_r;
//     }
// };

// int main()
// {
//     //通过圆类 创建具体的圆（对象）
//     //实例化 （通过一个类 创建一个对象的过程）
//     Circle cl;

//     cl.m_r = 10;

//     cout << "圆的周长为:" << cl.calculateZC() << endl;



//     system("pause");
//     return 0;
// }

//////////////class 类//////////////////////

// #include<iostream>
// using namespace std;
// #include<string>

// //class  代表设计一个类。类后面紧跟着的就是类名称
// class Student
// {
//     //访问权限
//     //公共权限

// public:           //公共权限      //类中的属性和行为，统一称为 成员
//     //属性↓   成员属性 成员变量
//     
//     string m_name;
//     int m_age;

//     //行为    成员函数  成员方法
//     
//     void Studentshow()
//     {
//         cout << "name:  " << m_name << "\tage: " << m_age <<endl;
//     }
//     void Setname(string name)
//     {
//         m_name = name;
//     }
    
// };

// int main()
// {

//     Student S1;
//     S1.m_name = "yangding";
//     S1.m_age = 12;
//     S1.Studentshow();

//     Student S2;
//     // S2.m_name = "wangfwchang";
//     S2.Setname("wangfwchang");
//     S2.m_age = 16;
//     S2.Studentshow();


//     system("pause");
//     return 0;
// }


//////////////////////////////////////////////////////////


// #include<iostream>
// using namespace std;
// #include<string>

// //class  代表设计一个类。类后面紧跟着的就是类名称
//     //访问权限
//     //三种
//     //公共权限 public     成员 类内可以访问，类外可以访问
//     //保护权限 protected  成员 类内可以访问，类外不可以访问 
//     //私有权限 provate   成员 类内可以访问，类外不可以访问 

// class Person
// {
// public:
//     string m_name;

// protected:

//     int m_car; 

// private:

//     int m_password;

// public:

//     void dunc()
//     {
//         m_name = "yang";
//         m_car = 123;
//         m_password = 223;
//         //类内访问都没有问题
//     }
// };
// int main()
// {
//     Person p1;
//     p1.m_name = "wang";
//     // p1.m_car = 123;       //保护权限内容，在类外访问不到
//     // p1.m_password = 334;  //私有权限内容，类外访问不到
//     system("pause");
//     return 0;
// }

////////////////class与struct的区别/////////////////////////


//class 默认权限是私有
//struct 默认权限是公共




///////////////////////////////////////////
// #include<iostream>
// using namespace std;
// #include<string>
// class Person
// {
// public:
//     //设置姓名
//     void setName(string name)
//     {
//         m_name = name;
//     }
//     //获取姓名
//     string getname()
//     {
//         return m_name;
//     }

//     int getage()
//     {
//         return m_Age;
//     }
//     void setidol(string idol)
//     {
//         m_idol = idol;
//     }

// private:
//     string m_name;//姓名 可读可写

//     int m_Age = 18;//年龄 只读

//     string m_idol;//偶像 只写
    
// };

// int main()
// {
//     //可读可写
//     Person p;
//     p.setName("zhangsan");
//     cout << "name: " << p.getname() << endl;

//     //只读不可写

//     cout << "age: " << p.getage() << endl;

//     //可写不可读
//     p.setidol("xiaoming");



//     system("pause");
//     return 0;
// }

// //////////////////案例/////////////////

// #include <iostream>
// #include<string>
// using namespace std;

// class zhengfangxing
// {
// public:
    

//     int m_L;
//     int m_H;
//     int m_W;





//     int mianji()
//     {
//         return 2*(m_L * m_H + m_H * m_W + m_L * m_W);
//     }

//     int tiji()
//     {
//         return m_L * m_H * m_W;
//     }

//     bool quandeng(zhengfangxing &c1 , zhengfangxing &c2)
//     {

//     }


    

// };


// int main()
// {
//     zhengfangxing c1;
//     c1.m_H(10);
    

// }

// //////////////////对象的初始化与清理/////////////////////

// #include <iostream>
// #include<string>
// using namespace std;

// //构造函数  类名(){}

// //1.没有返回值也不写void
// //2.函数名称与类名相同
// //3.构造函数可以有参数，因此可以发生重载
// //4.程序在调用对象的时候会自动调用构造，无需手动调用，而且只会调用一次

// //析构函数   
// class Person
// {
//     public:
//     Person()
//     {
//         cout << "Person 构造函数的调用" << endl;
//     }

//     ~Person()
//     {
//         cout << "Person 析构函数的调用" << endl;
//     }

// //构造和析构都是必须有的实现，如果我们不提供，编译器会提供一个空实现

// };

// void test()
// {
//     Person p;
// }


// int main()
// {
//     test();
//     system("pause");
//     return 0;

// }


// //////////////////构造函数的分类与调用/////////////////////

// #include <iostream>
// #include<string>
// using namespace std;


// class Person
// {
//     public:
//     Person()
//     {
//         cout << "Person 无参构造函数的调用" << endl;
//     }
//     Person(int a)
//     {
//         age = a;
//         cout << "Person 有参函数的调用" << endl;
//     }


//     //拷贝构造函数
//     Person( const Person &p)
//     {
//         //将传入的人身上的所有属性，拷贝到我身上
//         age = p.age;
        
//     }

//     int age = 10;


// };

// void test()
// {
//     //1.括号法
//     Person p1;//默认构造函数调用   //调用默认构造时，不要加(),电脑会认为这是一个函数的声明，不会认为在创建对象
//     Person p2(10);//有参构造函数
//     Person p3(p2);//拷贝构造函数


//     //2.显示法
//     Person p1;
//     Person p2 = Person(10);//有参构造
//     Person p3 = Person(p2);//拷贝构造

//     Person(10);//匿名对象  特点：当前行执行结束后，系统会立即回收掉匿名对象

//     //不要利用拷贝构造函数 初始化匿名对象  编译器会认为Person(p3) === Person p3
//     // Person(p3);

//     //3.隐式转化法
//     Person p4 = 10;//有参构造
//     Person p5 = p4;//拷贝构造



// }


// int main()
// {
//     test();
//     system("pause");
//     return 0;

// }

// //////////////////拷贝构造函数的调用时机/////////////////////

// #include <iostream>
// #include<string>
// using namespace std;


// class Person
// {
//     public:
//     Person()
//     {
//         cout << "Person 无参构造函数的调用" << endl;
//     }
//     Person(int a)
//     {
//         age = a;
//         cout << "Person 有参函数的调用" << endl;
//     }


//     //拷贝构造函数
//     Person( const Person &p)
//     {
//         age = p.age;
        
//     }

//     int age;


// };

// void test()
// {

//     //1.使用一个已经创建完毕的对象来初始化一个新对象
//     Person p1(20);
//     Person p2(p1);

//     cout << "copy number is:" << p2.age << endl;

//     //2.值传递的方式给函数参数传值
 

// }

// //2.值传递的方式给函数参数传值

// void work(Person p)
// {

// }

// void test02()
// {
//     Person p;
//     work(p);
// }

 

// int main()
// {
//     test();
//     system("pause");
//     return 0;

// }


// //////////////////拷贝构造函数的调用时机/////////////////////

// #include <iostream>
// #include<string>
// using namespace std;

// //提供有参构造函数，c++不会提供无参构造函数
// //提供拷贝构造函数，c++不会提供其他构造函数

// class Person
// {
// public:
//     Person()
//     {
//         cout << "Person 无参构造函数的调用" << endl;

//     }
//     Person(int age)
//     {
//         cout << "Person 有参函数的调用" << endl;
//         m_age = age;
//     }

//     Person(const Person &p)
//     {
//         cout << "Person 拷贝函数的调用" << endl;
//         m_age = p.m_age;
//     }

//     ~Person()
//     {
//         cout << "Person 析构函数的调用" << endl;

//     }
//     int m_age;


// };

// void test()
// {
//     Person p;
//     p.m_age = 10;

//     Person p2(p);

//     cout << "p2的年龄为:" << p2.m_age << endl;

// }

 

// int main()
// {
//     test();
//     system("pause");
//     return 0;

// }


// //////////////////深拷贝与浅拷贝/////////////////////

// //浅拷贝带来的问题就是堆区的内存重复释放

// #include <iostream>
// #include<string>
// using namespace std;

// //提供有参构造函数，c++不会提供无参构造函数
// //提供拷贝构造函数，c++不会提供其他构造函数

// class Person
// {
// public:
//     Person()
//     {
//         cout << "Person 无参构造函数的调用" << endl;

//     }
//     Person(int age,int height)
//     {
//         cout << "Person 有参构造函数的调用" << endl;
//         m_age = age;
//         m_h = new int(height);
//     }

//     // Person(const Person &p)
//     // {
//     //     cout << "Person 拷贝函数的调用" << endl;
//     //     m_age = p.m_age;
//     // }

//     ~Person()
//     {
//         //析构函数，将堆区开辟的数据做释放操作
//         cout << "Person 析构函数的调用" << endl;
//         if(m_h != NULL)
//         {
//             delete m_h;
//             m_h = NULL;
//         }

//     }
//     int m_age;
//     int *m_h;
 

// };

// // void test01()
// // {
// //     Person p1(18);
// //     cout << p1.m_age << endl;
// //     Person p2(p1);
// //     cout << p2.m_age << endl;

// // }

// void test02()
// {
//     Person p1(18,160);
//     cout << *p1.m_h << endl;
//     Person p2(p1);
//     cout << *p2.m_h << endl;

// }


// int main()
// {
//     test02();
//     system("pause");
//     return 0;

// }

// //////////////////初始化列表/////////////////////


// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {
// public:
//     // Person(int a, int b,int c)//一般的写法
//     // {
//     //     m_A = a;
//     //     m_B = b;
//     //     m_C = c;
//     // }

//     Person(int a,int b,int c):m_A(a),m_B(b),m_C(c)
//     {

//     }

//     int m_A;
//     int m_B;
//     int m_C;
// }
// ;
// void test()
// {
//     Person p1(10,20,30);
//     cout << p1.m_A << p1.m_B << p1.m_C << endl;

// }
// int main()
// {
//     test();
//     system("pause");
//     return 0;

// }

// //////////////////静态成员变量/////////////////////


// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {
// public:
//     //1.所有对象都共享同一份数据
//     //2.编译阶段就分配内存
//     //3.类内声明，内外初始化操作---> 必须有的操作
//     static int m_A;

// };

// int Person::m_A = 100;

// // void test01()
// // {
// //     Person p1;
// //     cout << p1.m_A << endl;

// //     Person p2;
// //     p2.m_A=200;
// //     cout << p2.m_A << endl;
// // }

// void test02()
// {
//     //两种访问方式
//     //1.通过对象进行访问
//     Person p;
//     cout << p.m_A << endl;


//     //2.通过类名进行访问
//     cout << Person::m_A << endl;


// }


// int main()
// { 
//     // test01();
//     test02();



//     system("pause");
//     return 0;

// }

// //////////////////静态成员函数/////////////////////


// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {
// public:
//     //1.所有对象共享同一个函数
//     //2.静态成员函数只能放访问静态成员变量
//     static void func()
//     {
//         cout << "调用"<< endl;

//     }


// };


// void test01()
// {
//     //1.通过对象访问
//     Person p;
//     p.func;

//     //2.通过类名
//     Person::func;
// }

// // void test02()
// // {
// //     //两种访问方式
// //     //1.通过对象进行访问
// //     Person p;
// //     cout << p.m_A << endl;


// //     //2.通过类名进行访问
// //     cout << Person::m_A << endl;


// // }


// int main()
// { 
//     test01();
//     // test02();



//     system("pause");
//     return 0;

// }

//////////////////C++对象模型和this指针/////////////////////

// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {

// // 成员变量 和 成员函数 分开储存的   
// public:
//     int a = 1;   //非静态成员变量 属于类对象上
    
//     static int m_b;   //静态成员变量 不属于类对象上
    
//     void func(){}   //静态成员函数 不属于类对象上

//     static void func(){};   //静态成员函数 不属于类对象上

// };

// void test()
// {
//     Person p;
//     cout << sizeof(p) << endl;
// }

// int main()
// { 
//     test();
     



//     system("pause");
//     return 0;

// }

// //////////this指针////////////////


// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {
// public:
// //this指针指向被调用的成员函数所属的对象

//     // Person(int age)
//     // {
//     //     age = age; //这里系统认为同一份，所以会出现乱码
//     // }
//     Person(int age)
//     {
//         //this指针指向 被调用的成员函数 所属的对象
//         this->age = age; //this指针

//     }


//     void PersonAddAge(Person &p)
//     {
//         this->age += p.age;
//     }

//     int age;

// };

// //1.解决名称冲突
// void test01()
// {
//     Person p1(18);//p1的话 this指向 p1    p2 this指向 p2
//     cout << p1.age << endl;
// }

// //2.返回对象本身用*this

// void test02()
// {
//     Person p2(18);//p1的话 this指向 p1    p2 this指向 p2
//     cout << p2.age << endl;
// }

// int main()
// { 
//     // test01();
//     test02(12);
     



//     system("pause");
//     return 0;

// }



// //////////空指针调用成员函数////////////////


// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {
// public:
    
//     void showClassName()
//     {
//         cout << "this is Person class" << endl;

//     }

//     void showPersonAge()
//     {
//         if (this == NULL)
//         {
//             return;
//         }
        
//         cout << "age =" << m_age << endl;//这里应该是报错的，但我这里没有报错

//     }

//     int m_age;

// };

// void test01()
// {
//     Person * p = NULL;
//     p->showClassName();
                                                                                                                    
//     p->showPersonAge();
// }



// int main()
// { 
//     test01();
//     // test02(12);
     



//     system("pause");
//     return 0;

// }



// //////////const修饰成员函数////////////////报错，不知道学了有啥用

// //常函数

// //常对象

// #include <iostream>
// #include<string>
// using namespace std;
// class Person 
// {
//     Person()
//     {

//     }
// public:
// //this指针的本质  是指针常量  执政党指向是不可以修改的
// //本质：Person * const this;
// //加了const：const Person * const this;//指向和值都不可以修改   
    
//     //常函数

//     void showPerson() const//每一个成员函数内部都有一个this指针
//     {
//         this->m_B = 100;
//         // this->m_A = 100;//this指向的值可以修改
//         //this = NULL;//this这里已经指向p了，this指针不可以修改指针的指向的
        
//     }

//     int m_A;
//     mutable int m_B;//特殊变量，即使在常函数中也可以修改这个值，加关键字mutable

// //知识点
// //const int* p = &a;//常量指针：值不能改变
// //int *const p = &a;//指针常量：地址不能改变



// };

// //常对象
// void test01()
// {
//     Person p;
//     p.showPerson();

// }

// //常对象

// void test02()
// {
//     const Person p;
//     // p2.m_A = 100;
//     p.m_B = 100;
// }


// int main()
// { 
//     // test01();
//     test02();
     
//     system("pause");
//     return 0;

// }

///////////////友元////////////////

//友元的三种实现

//全局函数做友元


// #include <iostream>
// #include<string>
// using namespace std;
// class Building 
// {
//     //声明
//     //加了friend后可以访问私有成员
//     friend void goodguy01(Building *building);
//     friend void goodguy02(Building &building);


// public:
//     Building()
//     {
//         m_BedRoom = "卧室";
//         m_settingRoom = "卧室";
//     }



// public:
//     string m_settingRoom;
// private:
//     string m_BedRoom;

// };

// void goodguy01(Building *building)//& * 都可以
// {
//     cout << "好朋友正在访问" << building->m_settingRoom << endl; 
    
//     cout << "好朋友正在访问" << building->m_BedRoom << endl; 
// }

// void goodguy02(Building &building)//& * 都可以
// {
//     cout << "好朋友正在访问" << building.m_settingRoom << endl; 

//     cout << "好朋友正在访问" << building.m_BedRoom << endl;
// }
// int main()
// { 
//     system("pause");
//     return 0;
// }

// ///////////////友元////////////////

// //友元的三种实现

// //类作友元


// #include <iostream>
// #include<string>
// using namespace std;
// class Building;

// class goodguy
// {
// public:
//     goodguy();

//     void visit();//让visit函数可以访问Building中私有成员
//     void visit2();//让visit2函数不可以访问Building中私有成员

//     Building* building;
// };

// class Building
// {
//     //告诉编译器 goodguy类下的 visit成员函数作为本类的好朋友，可以访问私有成员
//     friend void goodguy::visit();
// public:
//     Building();

// public:
//     string m_settingRoom;
// private:
//     string m_BedRoom;
// }
// ;

// //类外实现成员函数        ---->在class中要加无参构造函数
// Building::Building()
// {
//     m_BedRoom = "卧室";
//     m_settingRoom = "卧室";
// }


// goodguy::goodguy()
// {
//     building = new Building;

// }

// void goodguy::visit()
// {
//     cout << "visit函数正在访问" << building -> m_settingRoom << endl;
    
//     cout << "visit函数正在访问" << building -> m_BedRoom << endl;
// };
    
// void goodguy::visit2()
// {
//     cout << "visit2函数正在访问" << building -> m_settingRoom << endl;
// };


// int main()
// { 
//     goodguy gg;
//     gg.visit();
//     system("pause");
//     return 0;
// }


///////////////友元////////////////

//友元的三种实现

//成员函数做友元


#include <iostream>
#include<string>
using namespace std;
class Building;

class goodguy
{
public:
    goodguy();

    void visit();//让visit函数可以访问Building中私有成员
    void visit2();//让visit2函数不可以访问Building中私有成员

    Building* building; //创建一个指向Building的指针
};

class Building
{
    friend void goodguy::visit();
public:
    Building();

public:
    string m_settingRoom;
private:
    string m_BedRoom;
}
;

//类外实现成员函数        ---->在class中要加无参构造函数
Building::Building()
{
    m_BedRoom = "卧室";
    m_settingRoom = "卧室";
}


goodguy::goodguy()
{
    building = new Building;

}

void goodguy::visit()
{
    cout << "visit函数正在访问" << building -> m_settingRoom << endl;
    
    cout << "visit函数正在访问" << building -> m_BedRoom << endl;
};
    
void goodguy::visit2()
{
    cout << "visit2函数正在访问" << building -> m_settingRoom << endl;
};


int main()
{ 
    goodguy gg;
    gg.visit();
    system("pause");
    return 0;
}





























