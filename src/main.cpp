#include <iostream>
#include "../include/add.h"
using namespace std;
struct Student{
	string name;
	int age;
	int score;
//Teacher teacher;
};
void PrintInfo(Student stu){
	cout << stu.name << " " << stu.age << " " << stu.score << endl;
    stu.name =" ";
}
//地址传递
void PrintInfoAddr(const Student * stu){
	cout << stu->name << " " << stu->age << " " << stu->score << endl;
	//stu->name = "  "; //❌ 加const关键字，一旦修改就会报错，防止误操作
}
int main(){
	Student s1 = {"张三",14,99};
	PrintInfo(s1);
    cout << s1.name << endl;
    PrintInfoAddr(&s1);
	cout << s1.name << endl;
    system("echo hello");
    return 0;
}



