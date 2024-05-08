#pragma once
#include <iostream>

namespace Vector {
	template <typename T>
	class Vector2 {
	public:
		T x, y;

		Vector2(T x = 0, T y = 0) : x(x), y(y) {}

		Vector2 operator+(const Vector2& other) { return Vector2(x + other.x, y + other.y); }
		Vector2 operator-(const Vector2& other) { return Vector2(x - other.x, y - other.y); }
		Vector2 operator*(const Vector2& other) { return Vector2(x * other.x, y * other.y); }
		Vector2 operator/(const Vector2& other) { return Vector2(x / other.x, y / other.y); }

		bool operator==(const Vector2& other) { return x == other.x and y == other.y; }

		Vector2& operator+=(const Vector2& other) { x += other.x; y += other.y; return *this; }
		Vector2& operator-=(const Vector2& other) { x -= other.x; y -= other.y; return *this; }
		Vector2& operator*=(const Vector2& other) { x *= other.x; y *= other.y; return *this; }
		Vector2& operator/=(const Vector2& other) { x /= other.x; y /= other.y; return *this; }
	};


	template <typename T>
	std::ostream& operator<<(std::ostream& os, const Vector2 <T>& other) {
		return os << other.x << " " << other.y;
	}

  template <typename T>
  class Vector3 {
  public:
  	T x, y, z;
  
  	Vector3(T x = 0, T y = 0, T z = 0) : x(x), y(y), z(z) {}
  
  	Vector3 operator+(const Vector3& other) { return Vector3(x + other.x, y + other.y, z + other.z); }
  	Vector3 operator-(const Vector3& other) { return Vector3(x - other.x, y - other.y, z - other.z); }
  	Vector3 operator*(const Vector3& other) { return Vector3(x * other.x, y * other.y, z * other.z); }
  	Vector3 operator/(const Vector3& other) { return Vector3(x / other.x, y / other.y, z / other.z); }
  
  	bool operator==(const Vector3& other) { return x == other.x and y == other.y and z == other.z; }
  
  	Vector3& operator+=(const Vector3& other) { x += other.x; y += other.y; z += other.z; return *this; }
  	Vector3& operator-=(const Vector3& other) { x -= other.x; y -= other.y; z -= other.z; return *this; }
  	Vector3& operator*=(const Vector3& other) { x *= other.x; y *= other.y; z *= other.z; return *this; }
  	Vector3& operator/=(const Vector3& other) { x /= other.x; y /= other.y; z /= other.z; return *this; }
  };
  
  template <typename T>
  std::ostream& operator<<(std::ostream& os, const Vector3 <T>& other) {
  	return os << other.x << " " << other.y << " " << other.z;
  }
}
