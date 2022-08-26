#pragma once

namespace Matrix
{
	class Matrix4
	{
		private:
			double v[4][4];

		public:
			Matrix4();
			Matrix4(double values[4][4]);
			Matrix4(const Matrix4& matrix);
			
			double get(int m, int n) const;
			void set(int m, int n, double _value);

			Matrix4 operator + (const Matrix4& other);
			Matrix4 operator - (const Matrix4& other);

			Matrix4 operator * (const double& other);
			Matrix4 operator * (const Matrix4& other);
	};

	Matrix4 add(const Matrix4& a, const Matrix4& b);
	Matrix4 sub(const Matrix4& a, const Matrix4& b);

	Matrix4 mul(double a, const Matrix4& b);
	Matrix4 mul(const Matrix4& a, const Matrix4& b);
}
