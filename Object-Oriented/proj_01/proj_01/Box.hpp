//
//  Box.hpp
//  proj_01
//
//  Created by qi on 08/12/2017.
//  Copyright © 2017 tvu. All rights reserved.
//

#ifndef Box_hpp
#define Box_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class Box
{
public:
//    Box(int h,int w,int l):height(h),width(w),length(l){};
    Box(int h = 10,int w = 10,int len = 10);
    int volume();     // 计算体积
    ~Box();
    
private:
    int height;
    int width;
    int length;
};

#endif /* Box_hpp */
