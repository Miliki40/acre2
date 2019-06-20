#pragma once

#include "compat.h"
#include "Macros.h"

class IMessage
{
public:
    virtual ~IMessage(){}

    virtual const unsigned char* getData(void) = 0;
    virtual size_t getLength(void) const = 0;
    virtual const char* getProcedureName(void) const = 0;

    virtual const unsigned char* getParameter(const uint32_t index) const = 0;
    virtual int32_t getParameterAsInt(const uint32_t index) const = 0;
    virtual float32_t getParameterAsFloat(uint32_t index) const = 0;
    virtual uint32_t getParameterCount(void) const = 0;
};
