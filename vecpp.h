// vecpp by Megospc
// GitHub: https://github.com/Megospc/vecpp
// Vesion: 1.0.0 (23.04.2024)

#pragma once

#include <iostream>
#include <cmath>

namespace vecpp {
    struct vec2 {
        float x, y;
        
        vec2() {
            x = 0.0, y = 0.0;
        }
        vec2(float x, float y) {
            this->x = x, this->y = y;
        }
        vec2(float v) {
            x = v, y = v;
        }
        vec2(vec2* v) {
            x = v->x, y = v->y;
        }
        
        float length2() {
            return x*x+y*y;
        }
        float length() {
            return std::sqrt(x*x+y*y);
        }
        
        vec2 normalize() {
            float len = length();
            
            if (len < 0.00001) return vec2(0.0);
            
            return vec2(x/len, y/len);
        }
        
        vec2 operator-() {
            return vec2(-x, -y);
        }
        vec2 operator~() {
            return normalize();
        }
        
        float operator[](int i) {
            switch (i) {
                case 0: return x;
                case 1: return y;
                default: return 0.0;
            }
        }
        
        vec2 operator+(vec2 other) {
            return vec2(x+other.x, y+other.y);
        }
        vec2 operator-(vec2 other) {
            return vec2(x-other.x, y-other.y);
        }
        vec2 operator*(vec2 other) {
            return vec2(x*other.x, y*other.y);
        }
        vec2 operator/(vec2 other) {
            return vec2(x/other.x, y/other.y);
        }
        
        vec2 operator+(float other) {
            return vec2(x+other, y+other);
        }
        vec2 operator-(float other) {
            return vec2(x-other, y-other);
        }
        vec2 operator*(float other) {
            return vec2(x*other, y*other);
        }
        vec2 operator/(float other) {
            return vec2(x/other, y/other);
        }
        
        void operator+=(vec2 other) {
            x += other.x, y += other.y;
        }
        void operator-=(vec2 other) {
            x -= other.x, y -= other.y;
        }
        void operator*=(vec2 other) {
            x *= other.x, y *= other.y;
        }
        void operator/=(vec2 other) {
            x /= other.x, y /= other.y;
        }
        
        void operator+=(float other) {
            x += other, y += other;
        }
        void operator-=(float other) {
            x -= other, y -= other;
        }
        void operator*=(float other) {
            x *= other, y *= other;
        }
        void operator/=(float other) {
            x /= other, y /= other;
        }
    };

    struct vec3 {
        float x, y, z;
        
        vec3() {
            x = 0.0, y = 0.0, z = 0.0;
        }
        vec3(float x, float y, float z) {
            this->x = x, this->y = y, this->z = z;
        }
        vec3(vec2 a, float b) {
            x = a.x, y = a.y, z = b;
        }
        vec3(float a, vec2 b) {
            x = a, y = b.x, z = b.y;
        }
        vec3(float v) {
            x = v, y = v, z = v;
        }
        vec3(vec3* v) {
            x = v->x, y = v->y, z = v->z;
        }
        
        float length2() {
            return x*x+y*y+z*z;
        }
        float length() {
            return std::sqrt(x*x+y*y+z*z);
        }
        
        vec3 normalize() {
            float len = length();
            
            if (len < 0.00001) return vec3(0.0);
            
            return vec3(x/len, y/len, z/len);
        }
        
        vec3 operator-() {
            return vec3(-x, -y, -z);
        }
        vec3 operator~() {
            return normalize();
        }
        
        float operator[](int i) {
            switch (i) {
                case 0: return x;
                case 1: return y;
                case 2: return z;
                default: return 0.0;
            }
        }
        
        vec3 operator+(vec3 other) {
            return vec3(x+other.x, y+other.y, z+other.z);
        }
        vec3 operator-(vec3 other) {
            return vec3(x-other.x, y-other.y, z-other.z);
        }
        vec3 operator*(vec3 other) {
            return vec3(x*other.x, y*other.y, z*other.z);
        }
        vec3 operator/(vec3 other) {
            return vec3(x/other.x, y/other.y, z/other.z);
        }
        
        vec3 operator+(float other) {
            return vec3(x+other, y+other, z+other);
        }
        vec3 operator-(float other) {
            return vec3(x-other, y-other, z-other);
        }
        vec3 operator*(float other) {
            return vec3(x*other, y*other, z*other);
        }
        vec3 operator/(float other) {
            return vec3(x/other, y/other, z/other);
        }
        
        void operator+=(vec3 other) {
            x += other.x, y += other.y, z += other.z;
        }
        void operator-=(vec3 other) {
            x -= other.x, y -= other.y, z -= other.z;
        }
        void operator*=(vec3 other) {
            x *= other.x, y *= other.y, z *= other.z;
        }
        void operator/=(vec3 other) {
            x /= other.x, y /= other.y, z /= other.z;
        }
        
        void operator+=(float other) {
            x += other, y += other, z += other;
        }
        void operator-=(float other) {
            x -= other, y -= other, z -= other;
        }
        void operator*=(float other) {
            x *= other, y *= other, z *= other;
        }
        void operator/=(float other) {
            x /= other, y /= other, z /= other;
        }
    };

    struct vec4 {
        float x, y, z, w;
        
        vec4() {
            x = 0.0, y = 0.0, z = 0.0, w = 0.0;
        }
        vec4(float x, float y, float z, float w) {
            this->x = x, this->y = y, this->z = z, this->w = w;
        }
        vec4(vec3 a, float b) {
            x = a.x, y = a.y, z = a.z, w = b;
        }
        vec4(float a, vec3 b) {
            x = a, y = b.x, z = b.y, w = b.z;
        }
        vec4(vec2 a, vec2 b) {
            x = a.x, y = a.y, z = b.x, w = b.y;
        }
        vec4(vec2 a, float b, float c) {
            x = a.x, y = a.y, z = b, w = c;
        }
        vec4(float a, float b, vec2 c) {
            x = a, y = b, z = c.x, w = c.y;
        }
        vec4(float a, vec2 b, float c) {
            x = a, y = b.x, z = b.y, w = c;
        }
        vec4(float v) {
            x = v, y = v, z = v, w = v;
        }
        vec4(vec4* v) {
            x = v->x, y = v->y, z = v->z, w = v->w;
        }
        
        float length2() {
            return x*x+y*y+z*z+w*w;
        }
        float length() {
            return std::sqrt(x*x+y*y+z*z+w*w);
        }
        
        vec4 normalize() {
            float len = length();
            
            if (len < 0.00001) return vec4(0.0);
            
            return vec4(x/len, y/len, z/len, w/len);
        }
        
        vec4 operator-() {
            return vec4(-x, -y, -z, -w);
        }
        vec4 operator~() {
            return normalize();
        }
        
        float operator[](int i) {
            switch (i) {
                case 0: return x;
                case 1: return y;
                case 2: return z;
                case 3: return w;
                default: return 0.0;
            }
        }
        
        vec4 operator+(vec4 other) {
            return vec4(x+other.x, y+other.y, z+other.z, w+other.w);
        }
        vec4 operator-(vec4 other) {
            return vec4(x-other.x, y-other.y, z-other.z, w-other.w);
        }
        vec4 operator*(vec4 other) {
            return vec4(x*other.x, y*other.y, z*other.z, w*other.w);
        }
        vec4 operator/(vec4 other) {
            return vec4(x/other.x, y/other.y, z/other.z, w/other.w);
        }
        
        vec4 operator+(float other) {
            return vec4(x+other, y+other, z+other, w+other);
        }
        vec4 operator-(float other) {
            return vec4(x-other, y-other, z-other, w-other);
        }
        vec4 operator*(float other) {
            return vec4(x*other, y*other, z*other, w*other);
        }
        vec4 operator/(float other) {
            return vec4(x/other, y/other, z/other, w/other);
        }
        
        void operator+=(vec4 other) {
            x += other.x, y += other.y, z += other.z, w += other.w;
        }
        void operator-=(vec4 other) {
            x -= other.x, y -= other.y, z -= other.z, w -= other.w;
        }
        void operator*=(vec4 other) {
            x *= other.x, y *= other.y, z *= other.z, w *= other.w;
        }
        void operator/=(vec4 other) {
            x /= other.x, y /= other.y, z /= other.z, w /= other.w;
        }
        
        void operator+=(float other) {
            x += other, y += other, z += other, w += other;
        }
        void operator-=(float other) {
            x -= other, y -= other, z -= other, w -= other;
        }
        void operator*=(float other) {
            x *= other, y *= other, z *= other, w *= other;
        }
        void operator/=(float other) {
            x /= other, y /= other, z /= other, w /= other;
        }
    };
    
    struct dvec2 {
        double x, y;
        
        dvec2() {
            x = 0.0, y = 0.0;
        }
        dvec2(double x, double y) {
            this->x = x, this->y = y;
        }
        dvec2(double v) {
            x = v, y = v;
        }
        dvec2(dvec2* v) {
            x = v->x, y = v->y;
        }
        
        double length2() {
            return x*x+y*y;
        }
        double length() {
            return std::sqrt(x*x+y*y);
        }
        
        dvec2 normalize() {
            double len = length();
            
            if (len < 1e-13) return dvec2(0.0);
            
            return dvec2(x/len, y/len);
        }
        
        dvec2 operator-() {
            return dvec2(-x, -y);
        }
        dvec2 operator~() {
            return normalize();
        }
        
        double operator[](int i) {
            switch (i) {
                case 0: return x;
                case 1: return y;
                default: return 0.0;
            }
        }
        
        dvec2 operator+(dvec2 other) {
            return dvec2(x+other.x, y+other.y);
        }
        dvec2 operator-(dvec2 other) {
            return dvec2(x-other.x, y-other.y);
        }
        dvec2 operator*(dvec2 other) {
            return dvec2(x*other.x, y*other.y);
        }
        dvec2 operator/(dvec2 other) {
            return dvec2(x/other.x, y/other.y);
        }
        
        dvec2 operator+(double other) {
            return dvec2(x+other, y+other);
        }
        dvec2 operator-(double other) {
            return dvec2(x-other, y-other);
        }
        dvec2 operator*(double other) {
            return dvec2(x*other, y*other);
        }
        dvec2 operator/(double other) {
            return dvec2(x/other, y/other);
        }
        
        void operator+=(dvec2 other) {
            x += other.x, y += other.y;
        }
        void operator-=(dvec2 other) {
            x -= other.x, y -= other.y;
        }
        void operator*=(dvec2 other) {
            x *= other.x, y *= other.y;
        }
        void operator/=(dvec2 other) {
            x /= other.x, y /= other.y;
        }
        
        void operator+=(double other) {
            x += other, y += other;
        }
        void operator-=(double other) {
            x -= other, y -= other;
        }
        void operator*=(double other) {
            x *= other, y *= other;
        }
        void operator/=(double other) {
            x /= other, y /= other;
        }
    };

    struct dvec3 {
        double x, y, z;
        
        dvec3() {
            x = 0.0, y = 0.0, z = 0.0;
        }
        dvec3(double x, double y, double z) {
            this->x = x, this->y = y, this->z = z;
        }
        dvec3(dvec2 a, double b) {
            x = a.x, y = a.y, z = b;
        }
        dvec3(double a, dvec2 b) {
            x = a, y = b.x, z = b.y;
        }
        dvec3(double v) {
            x = v, y = v, z = v;
        }
        dvec3(dvec3* v) {
            x = v->x, y = v->y, z = v->z;
        }
        
        double length2() {
            return x*x+y*y+z*z;
        }
        double length() {
            return std::sqrt(x*x+y*y+z*z);
        }
        
        dvec3 normalize() {
            double len = length();
            
            if (len < 1e-13) return dvec3(0.0);
            
            return dvec3(x/len, y/len, z/len);
        }
        
        dvec3 operator-() {
            return dvec3(-x, -y, -z);
        }
        dvec3 operator~() {
            return normalize();
        }
        
        double operator[](int i) {
            switch (i) {
                case 0: return x;
                case 1: return y;
                case 2: return z;
                default: return 0.0;
            }
        }
        
        dvec3 operator+(dvec3 other) {
            return dvec3(x+other.x, y+other.y, z+other.z);
        }
        dvec3 operator-(dvec3 other) {
            return dvec3(x-other.x, y-other.y, z-other.z);
        }
        dvec3 operator*(dvec3 other) {
            return dvec3(x*other.x, y*other.y, z*other.z);
        }
        dvec3 operator/(dvec3 other) {
            return dvec3(x/other.x, y/other.y, z/other.z);
        }
        
        dvec3 operator+(double other) {
            return dvec3(x+other, y+other, z+other);
        }
        dvec3 operator-(double other) {
            return dvec3(x-other, y-other, z-other);
        }
        dvec3 operator*(double other) {
            return dvec3(x*other, y*other, z*other);
        }
        dvec3 operator/(double other) {
            return dvec3(x/other, y/other, z/other);
        }
        
        void operator+=(dvec3 other) {
            x += other.x, y += other.y, z += other.z;
        }
        void operator-=(dvec3 other) {
            x -= other.x, y -= other.y, z -= other.z;
        }
        void operator*=(dvec3 other) {
            x *= other.x, y *= other.y, z *= other.z;
        }
        void operator/=(dvec3 other) {
            x /= other.x, y /= other.y, z /= other.z;
        }
        
        void operator+=(double other) {
            x += other, y += other, z += other;
        }
        void operator-=(double other) {
            x -= other, y -= other, z -= other;
        }
        void operator*=(double other) {
            x *= other, y *= other, z *= other;
        }
        void operator/=(double other) {
            x /= other, y /= other, z /= other;
        }
    };

    struct dvec4 {
        double x, y, z, w;
        
        dvec4() {
            x = 0.0, y = 0.0, z = 0.0, w = 0.0;
        }
        dvec4(double x, double y, double z, double w) {
            this->x = x, this->y = y, this->z = z, this->w = w;
        }
        dvec4(dvec3 a, double b) {
            x = a.x, y = a.y, z = a.z, w = b;
        }
        dvec4(double a, dvec3 b) {
            x = a, y = b.x, z = b.y, w = b.z;
        }
        dvec4(dvec2 a, dvec2 b) {
            x = a.x, y = a.y, z = b.x, w = b.y;
        }
        dvec4(dvec2 a, double b, double c) {
            x = a.x, y = a.y, z = b, w = c;
        }
        dvec4(double a, double b, dvec2 c) {
            x = a, y = b, z = c.x, w = c.y;
        }
        dvec4(double a, dvec2 b, double c) {
            x = a, y = b.x, z = b.y, w = c;
        }
        dvec4(double v) {
            x = v, y = v, z = v, w = v;
        }
        dvec4(dvec4* v) {
            x = v->x, y = v->y, z = v->z, w = v->w;
        }
        
        double length2() {
            return x*x+y*y+z*z+w*w;
        }
        double length() {
            return std::sqrt(x*x+y*y+z*z+w*w);
        }
        
        dvec4 normalize() {
            double len = length();
            
            if (len < 1e-13) return dvec4(0.0);
            
            return dvec4(x/len, y/len, z/len, w/len);
        }
        
        dvec4 operator-() {
            return dvec4(-x, -y, -z, -w);
        }
        dvec4 operator~() {
            return normalize();
        }
        
        double operator[](int i) {
            switch (i) {
                case 0: return x;
                case 1: return y;
                case 2: return z;
                case 3: return w;
                default: return 0.0;
            }
        }
        
        dvec4 operator+(dvec4 other) {
            return dvec4(x+other.x, y+other.y, z+other.z, w+other.w);
        }
        dvec4 operator-(dvec4 other) {
            return dvec4(x-other.x, y-other.y, z-other.z, w-other.w);
        }
        dvec4 operator*(dvec4 other) {
            return dvec4(x*other.x, y*other.y, z*other.z, w*other.w);
        }
        dvec4 operator/(dvec4 other) {
            return dvec4(x/other.x, y/other.y, z/other.z, w/other.w);
        }
        
        dvec4 operator+(double other) {
            return dvec4(x+other, y+other, z+other, w+other);
        }
        dvec4 operator-(double other) {
            return dvec4(x-other, y-other, z-other, w-other);
        }
        dvec4 operator*(double other) {
            return dvec4(x*other, y*other, z*other, w*other);
        }
        dvec4 operator/(double other) {
            return dvec4(x/other, y/other, z/other, w/other);
        }
        
        void operator+=(dvec4 other) {
            x += other.x, y += other.y, z += other.z, w += other.w;
        }
        void operator-=(dvec4 other) {
            x -= other.x, y -= other.y, z -= other.z, w -= other.w;
        }
        void operator*=(dvec4 other) {
            x *= other.x, y *= other.y, z *= other.z, w *= other.w;
        }
        void operator/=(dvec4 other) {
            x /= other.x, y /= other.y, z /= other.z, w /= other.w;
        }
        
        void operator+=(double other) {
            x += other, y += other, z += other, w += other;
        }
        void operator-=(double other) {
            x -= other, y -= other, z -= other, w -= other;
        }
        void operator*=(double other) {
            x *= other, y *= other, z *= other, w *= other;
        }
        void operator/=(double other) {
            x /= other, y /= other, z /= other, w /= other;
        }
    };
}