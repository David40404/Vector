#pragma once
#include <iostream>

namespace Vector {
	template <typename T>
  	class Vector2 {
	public:
		T x, y;

		Vector2() {}
		Vector2(T x, T y) : x(x), y(y) {}

		void swap() {
			T tmp = x;
			x = y;
			y = tmp;
		}

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
  
		Vector3() {}
		Vector3(T x, T y, T z) : x(x), y(y), z(z) {}

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


	typedef Vector2 <int>      Vector2i;
	typedef Vector2 <unsigned> Vector2u;
	typedef Vector2 <float>    Vector2f;
	typedef Vector2 <double>   Vector2d;
	typedef Vector2 <long long> Vector2lli;
	typedef Vector2 <unsigned long long> Vector2llu;

	typedef Vector3 <int>      Vector3i;
	typedef Vector3 <unsigned> Vector3u;
	typedef Vector3 <float>    Vector3f;
	typedef Vector3 <double>   Vector3d;
	typedef Vector3 <long long> Vector3lli;
	typedef Vector3 <unsigned long long> Vector3llu;
}
