//
//  main.cpp
//  proj_01
//
//  Created by qi on 08/12/2017.
//  Copyright © 2017 tvu. All rights reserved.
//

#include <iostream>
#include "Box.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    
    Box box1;
    cout<<"The Volume of box1 is " <<box1.volume() << endl;
    
    Box box2(15);
    cout<<"The Volume of box2 is " <<box2.volume() << endl;
    
    Box box3(15,30);
    cout<<"The Volume of box3 is " <<box3.volume() << endl;
    
    box3 = box2;
    cout<<"The Volume of box3 is " <<box3.volume() << endl;
    
    return 0;
}
