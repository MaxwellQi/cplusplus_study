//
//  Box.cpp
//  proj_01
//
//  Created by qi on 08/12/2017.
//  Copyright © 2017 tvu. All rights reserved.
//

#include "Box.hpp"

Box::Box(int h,int w,int len)
{
    height = h;
    width = w;
    length = len;
}

int Box::volume()
{
    return height * width * length;
}

Box::~Box()
{
    cout<<"执行了析构函数"<<this->height <<endl;
}
