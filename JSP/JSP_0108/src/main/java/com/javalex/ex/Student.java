package com.javalex.ex;

public class Student {
	// 멤버 변수 선언
	private String name;
	private int age;
	private String num;
	private String gender;
	
	public Student() {
		
	}
	
	public Student(String n, int a, String num, String g) {
		this.name=n;
		this.age=a;
		this.num=num;
		this.gender=g;
	}
	
	
	
	public String getName() {
		return name;
	}
	public void setName(String name) {
		this.name = name;
	}
	public int getAge() {
		return age;
	}
	public void setAge(int age) {
		this.age = age;
	}
	public String getNum() {
		return num;
	}
	public void setNum(String num) {
		this.num = num;
	}
	public String getGender() {
		return gender;
	}
	public void setGender(String gender) {
		this.gender = gender;
	}
	


}