#pragma once
#include <string>
using namespace std;

class House {
private:
	int reg_no;
	class Address {
		string street;
		int flat_number;
	public:
		Address(){
			street = "";
			flat_number = 0;
		}
		Address(string street, int flat_number) {
			this->street = street;
			this->flat_number = flat_number;
		}
		//accessors
		string getStreet() { return street; }
		int getFlatNumber() { return flat_number; }
		//mutators
		void setStreet(string street) { this->street = street; }
		void setFlatNumber(int flat_number) { this->flat_number = flat_number; }
	}house_addr;
	int floor;
	int room_number;
	double area;
public:
	House():house_addr(){
		reg_no = 0;
		floor = 0;
		room_number = 0;
		area = 0;
	}
	House(int reg_no,string street,int flat_number,int floor,int room_number,double area):house_addr(street,flat_number){
		this->reg_no = reg_no;
		this->floor = floor;
		this->room_number = room_number;
		this->area = area;
	}
	//accessors
	int getRegNo() { return reg_no; }
	int getFloor() { return floor; }
	int getRoomNumber() { return room_number; }
	int getArea() { return area; }
	//mutators
	void setRegNo(int reg_no) { this->reg_no = reg_no; }
	void setFloor(int floor) { this->floor = floor; }
	void setRoomNumber(int room_number) { this->room_number = room_number; }
	void setArea(int area) { this->area = area; }
};