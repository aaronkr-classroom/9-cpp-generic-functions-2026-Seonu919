// Student_info.h
#pragma once


#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Student_info {
private: // 숨기고 싶은 변수
	string name;
	double midterm, final;
	vector<double> homework;
	

public: // 접근할 수 있는 함수
	// ###### 생성자 ######
	Student_info(); // 빈 객체를 생성
	Student_info(istream&); // 스트림을 읽어 객체를 생성
	// 윗 생성자가 read_hw() 함수와 비슷함

	// ###### 맴버 ######
	string getName() const { return name; }
	void setName(string n) { name = n; }

	bool valid() const { return !homework.empty(); }
	// 9.2.1/254p에서 정의한 함수들
	istream& read(istream&);
	double grade() const;
	
};// 세미콜론을 잊지 않도록 주의


// 전역함수 정의
bool compare(const Student_info& , const Student_info&);


#endif // !GUARD_Student_info

/* #pragma once
// Student_info.h

#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include <iostream>
#include <string>
#include <vector>

using namespace std;

// 구조체
struct Student_info {
	// 속성
	string name;
	double midterm, final;
	vector<double> homework;

};

// 함수 원형 정의
bool compare(const Student_info&, const Student_info&); // 이름 비교하기
istream& read(istream&, Student_info&); // 한 학생의 정보 읽기 
istream& read_hw(istream&, vector<double>&); // 모든 과제 점수 읽기

#endif
*/
