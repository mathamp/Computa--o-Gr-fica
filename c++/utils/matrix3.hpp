#pragma once

namespace Matrix
{
	class Matrix3
	{
		private:
			double v[3][3];

		public:
			Matrix3();
			Matrix3(double values[3][3]);
			Matrix3(const Matrix3& matrix);
			
			double get(int m, int n) const;
			void set(int m, int n, double _value);

			Matrix3 operator + (const Matrix3& other);
			Matrix3 operator - (const Matrix3& other);

			Matrix3 operator * (const double& other);
			Matrix3 operator * (const Matrix3& other);
	};

	Matrix3 add(const Matrix3& a, const Matrix3& b);
	Matrix3 sub(const Matrix3& a, const Matrix3& b);

	Matrix3 mul(double a, const Matrix3& b);
	Matrix3 mul(const Matrix3& a, const Matrix3& b);
}
