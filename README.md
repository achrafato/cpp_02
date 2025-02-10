# CPP Module 02 - Fixed Point Numbers

Ad-hoc polymorphism, operators overloading and Orthodox Canonical class form in C++.

## 📚 Exercises

### Ex00: My First Class in Orthodox Canonical Form
Introduction to Orthodox Canonical Form and fixed-point numbers.
```
Files:
├── Fixed.cpp
├── Fixed.hpp
└── main.cpp
```

### Ex01: Towards a more useful fixed-point number class
Fixed-point number class with floating-point conversions.
```
Files:
├── Fixed.cpp
├── Fixed.hpp
└── main.cpp
```

### Ex02: Now we're talking
Operator overloading for fixed-point arithmetic.
```
Files:
├── Fixed.cpp
├── Fixed.hpp
└── main.cpp
```

### Ex03: BSP (Binary Space Partitioning)
Point in triangle verification using fixed-point arithmetic.
```
Files:
├── Fixed.cpp
├── Fixed.hpp
├── Point.cpp
├── Point.hpp
├── bsp.cpp
└── main.cpp
```

## 🛠️ Implementation Details

### Ex00: Basic Fixed Point
- Orthodox Canonical Form implementation
- Basic member functions
- Copy and assignment operations
```cpp
class Fixed {
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed();                    // Default constructor
    Fixed(const Fixed &src);    // Copy constructor
    ~Fixed();                   // Destructor
    Fixed &operator=(const Fixed &rhs); // Assignment operator
    int getRawBits(void) const;
    void setRawBits(int const raw);
};
```

### Ex01: Conversion Operations
- Floating point conversions
- Integer conversions
- Stream insertion operator
```cpp
// Additional constructors
Fixed(const int n);
Fixed(const float n);

// Conversion operations
float toFloat(void) const;
int toInt(void) const;
```

### Ex02: Operator Overloading
- Comparison operators
- Arithmetic operators
- Increment/decrement
```cpp
// Comparison operators
bool operator>(const Fixed &rhs) const;
bool operator<(const Fixed &rhs) const;
bool operator>=(const Fixed &rhs) const;
bool operator<=(const Fixed &rhs) const;
bool operator==(const Fixed &rhs) const;
bool operator!=(const Fixed &rhs) const;

// Arithmetic operators
Fixed operator+(const Fixed &rhs) const;
Fixed operator-(const Fixed &rhs) const;
Fixed operator*(const Fixed &rhs) const;
Fixed operator/(const Fixed &rhs) const;

// Increment/decrement
Fixed &operator++();    // Prefix
Fixed operator++(int); // Postfix
Fixed &operator--();    // Prefix
Fixed operator--(int); // Postfix
```

### Ex03: Point and BSP
- Point class implementation
- Binary Space Partitioning
- Triangle area calculations
```cpp
class Point {
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    Point(const float x, const float y);
    Point(const Point &src);
    ~Point();
    Point &operator=(const Point &rhs);
};

bool bsp(Point const a, Point const b, Point const c, Point const point);
```

## 🎯 Learning Objectives

1. Orthodox Canonical Form
   - Default constructor
   - Copy constructor
   - Assignment operator
   - Destructor

2. Fixed-Point Numbers
   - Binary point representation
   - Fixed-point arithmetic
   - Conversion operations

3. Operator Overloading
   - Member functions
   - Friend functions
   - Stream operators

4. Binary Space Partitioning
   - Point in triangle test
   - Area calculations
   - Geometric algorithms

## 🧪 Testing Guidelines

### Ex00
```bash
# Test copy construction
# Test assignment operator
# Verify bit manipulation
```

### Ex01
```bash
# Test conversions from/to float
# Test conversions from/to int
# Verify precision loss
```

### Ex02
```bash
# Test all arithmetic operators
# Test comparison operators
# Test increment/decrement
# Verify precision in calculations
```

### Ex03
```bash
# Test points inside triangle
# Test points on triangle edges
# Test points outside triangle
# Test degenerate cases
```

## ⚠️ Requirements

- Compile with flags: -Wall -Wextra -Werror
- Must compile with -std=c++98
- All classes in Orthodox Canonical Form
- No memory leaks

## 📝 Style Guide

- Clear operator implementations
- Consistent formatting
- Proper header guards
- Const correctness
- Meaningful variable names
- Separate declaration/implementation

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
