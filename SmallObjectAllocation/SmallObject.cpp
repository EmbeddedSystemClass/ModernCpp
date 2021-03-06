/*
 * SmallObject.cpp
 *
 *  Created on: 8 sty 2016
 *      Author: xxpowdaw
 */

#include "SmallObject.h"


namespace Memory
{

void * SmallObject::operator new(std::size_t size)
{
    return Allocator::getInstance().Allocate(size);
}

void SmallObject::operator delete(void * p, std::size_t size)
{
    Allocator::getInstance().Deallocate(p,size);
}

SmallObject::~SmallObject()
{

}

}// Memory


