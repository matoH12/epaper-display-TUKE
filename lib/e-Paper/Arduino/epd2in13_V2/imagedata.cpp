/**
 *  @filename   :   imagedata.cpp
 *  @brief      :   data file for epd demo
 *
 *  Copyright (C) Waveshare     September 5 2017
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documnetation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to  whom the Software is
 * furished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS OR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "imagedata.h"
#include <avr/pgmspace.h>

const unsigned char IMAGE_DATA[] PROGMEM = {
/* 0X00,0X01,0X80,0X00,0XFA,0X00, */
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X38,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X0F,0X00,0X00,0X78,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X1F,0X80,0X00,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0XFF,0XC0,0X03,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X01,0X00,0X00,0X00,0X00,0X01,0XFF,0XE0,0X1F,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0XC0,0X00,0X00,0X00,0X03,0XFF,0X70,0X1F,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X7E,0X00,0X00,0X00,0X03,0XFF,0X78,0X38,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X3F,0X00,0X00,0X00,0X03,0XFF,0XF8,0XF0,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X0F,0XC0,0X00,0X00,0X03,0XF0,0XF8,0XC1,0XF8,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X03,0XF0,0X00,0X00,0X03,0XF3,0XF3,0X8F,0XFE,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X01,0XF8,0X00,0X00,0X03,0XFF,0XF3,0XBF,0XFF,0XC0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X3E,0X00,0X00,0X03,0XFF,0XFA,0X7F,0XFF,0XF0,0X00,0X00,
0X00,0X0F,0X00,0X00,0X00,0X3F,0XE0,0X00,0X00,0XE7,0XFB,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X07,0X00,0X00,0X00,0X3F,0XF0,0X00,0X00,0XE7,0XFB,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X1F,0XFC,0X00,0X00,0XFF,0XFB,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X0F,0XFE,0X00,0X00,0X7F,0XFB,0XCF,0XFF,0XE0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X03,0XFE,0X00,0X00,0X3F,0XF9,0XCF,0XFF,0XE0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X01,0XFF,0X80,0X00,0X0F,0XF1,0XFF,0XFF,0XE0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0XFF,0XC0,0X00,0X00,0X3D,0XEF,0XFF,0XE0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X7F,0XE0,0X00,0X03,0XFF,0XF7,0XFF,0XC0,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X3F,0XE0,0X00,0X3F,0XFF,0XFF,0XFF,0X80,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X1F,0XE0,0X00,0X7E,0XFF,0XFF,0XFF,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X0F,0XE0,0X00,0X3E,0XFF,0XF1,0XFF,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X0F,0XE0,0X00,0X3F,0XFF,0XBF,0XFC,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X07,0XF0,0X00,0X3E,0X7F,0X3F,0XF8,0X38,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X07,0XF0,0X00,0X7E,0X7F,0XC0,0X00,0X7C,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X07,0XF0,0X00,0X7E,0X3F,0XC0,0X01,0XFE,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X07,0XF0,0X00,0X7F,0X1F,0XDF,0XFF,0XFF,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X00,0X7F,0X87,0XEF,0XFF,0XFF,0X80,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X00,0X7F,0XE3,0XF1,0XFF,0XFF,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X01,0X87,0XFC,0X78,0XFE,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X03,0X01,0XF8,0XFF,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X0E,0X00,0X01,0XFF,0X80,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X0C,0X00,0X03,0XFF,0X80,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X1C,0X00,0X0F,0X98,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X38,0X00,0X7F,0X9C,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X00,0X00,0X03,0XF0,0X30,0X00,0X3F,0XDC,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X07,0XFE,0X07,0XE0,0X30,0X00,0X1F,0XFE,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X0F,0XFF,0X87,0XF0,0X70,0X00,0X1F,0XFC,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X1F,0XFF,0XC7,0XF0,0X00,0X00,0X0F,0XFE,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X3F,0XFF,0XE7,0XE0,0X00,0X00,0X0F,0XF0,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X7F,0XFF,0XF3,0XE0,0X7F,0XFF,0XEF,0XE0,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0XFF,0X9F,0XFB,0XCF,0XFF,0XFF,0XC6,0X18,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X03,0XFF,0XCF,0XF9,0XDF,0XFF,0XFF,0XC0,0X08,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X0E,0XFF,0XDF,0XFD,0XFF,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X01,0XF0,0XFF,0XFF,0XFD,0XFF,0XFE,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X03,0XF8,0XFF,0XFF,0XFD,0XFF,0XFC,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X07,0XFC,0XFF,0XDF,0XFD,0XFF,0XF8,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X0F,0XFE,0XC7,0XDF,0XFD,0XFF,0X80,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X3E,0X7F,0XF7,0XDF,0XFF,0XFE,0X30,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X3E,0X7F,0XF7,0XDF,0XCF,0XF0,0X38,0X00,0X06,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X7E,0X7F,0XFF,0XFF,0X9F,0XE0,0X38,0X00,0X1F,0XC0,0X00,0X00,0X00,0X00,
0X00,0X03,0X7F,0X1F,0XFF,0XFE,0X3E,0X00,0X3C,0X00,0X3B,0XE0,0X00,0X00,0X00,0X00,
0X00,0X03,0X7F,0X8F,0XFF,0XFE,0X7C,0X00,0X3C,0X00,0X3B,0XE0,0X00,0X00,0X00,0X00,
0X00,0X03,0X7F,0X87,0XFE,0X3F,0XF8,0X00,0X3C,0X00,0X7F,0XF0,0X00,0X00,0X00,0X00,
0X00,0X03,0X7F,0XA1,0XF8,0X1F,0XFC,0X00,0X1C,0X00,0X7C,0XF0,0X00,0X00,0X00,0X00,
0X00,0X03,0X3F,0XFF,0XF0,0X0F,0XFC,0X00,0X0C,0X00,0X7E,0X7C,0X00,0X00,0X00,0X00,
0X00,0X03,0X3F,0XFF,0XF0,0X0F,0XFE,0X00,0X0C,0X00,0X7F,0X3C,0X00,0X00,0X00,0X00,
0X00,0X03,0X1F,0XFF,0XF0,0X0F,0XFF,0X00,0X0C,0X00,0X3F,0X80,0X00,0X00,0X00,0X00,
0X00,0X03,0X0F,0XFF,0XF0,0X0E,0X7F,0X80,0X0C,0X00,0X3F,0XC0,0X00,0X00,0X00,0X00,
0X00,0X03,0X07,0XFF,0XF8,0X0E,0X3F,0XC0,0X0C,0X00,0X1F,0XF0,0X00,0X00,0X00,0X00,
0X00,0X03,0X03,0XFF,0XF8,0X1E,0X1F,0XE0,0X0C,0X00,0X0F,0XF0,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X3F,0XFE,0X3F,0X87,0XE0,0X3C,0X00,0X0F,0XBE,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X47,0XFF,0XFF,0XF0,0X60,0X3C,0X00,0X0F,0XBF,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X31,0XFF,0XFF,0XF8,0XE0,0X38,0X00,0X0F,0XBF,0X80,0X00,0X00,0X00,
0X00,0X03,0X06,0X11,0XFF,0XFD,0XFF,0XE0,0X38,0X00,0X0F,0X1F,0X80,0X00,0X00,0X00,
0X00,0X03,0X0E,0X13,0XFF,0XF9,0XFF,0XE0,0X30,0X00,0X0E,0X07,0X80,0X00,0X00,0X00,
0X00,0X03,0X3C,0XD7,0XFD,0XFD,0XFF,0XE0,0X30,0X00,0X1C,0XC7,0X80,0X00,0X00,0X00,
0X00,0X03,0X39,0XEF,0XFB,0XFF,0XFF,0XE0,0X30,0X00,0X3D,0XFF,0X80,0X00,0X00,0X00,
0X00,0X03,0X73,0XEF,0XFB,0XFF,0XFF,0XE0,0X60,0X00,0X3D,0XFF,0X80,0X00,0X00,0X00,
0X00,0X03,0X67,0XEF,0XFB,0XFF,0XFF,0XC0,0XC0,0X00,0X3F,0XFF,0X80,0X00,0X00,0X00,
0X00,0X03,0X8F,0XF7,0XE3,0XFF,0XFF,0X80,0XE0,0X00,0X1B,0XFF,0X80,0X00,0X00,0X00,
0X00,0X03,0X9F,0XF3,0XE1,0XFF,0XE0,0X01,0XC0,0X00,0X3B,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X03,0X3F,0XF1,0XF9,0XFF,0XC0,0X03,0X80,0X00,0X7F,0XFF,0XE0,0X00,0X00,0X00,
0X00,0X03,0X7F,0XF1,0XFD,0XFF,0X80,0X07,0X00,0X00,0X1F,0XFF,0XF8,0X00,0X00,0X00,
0X00,0X03,0XFF,0XF1,0XFF,0XFF,0X80,0X0F,0X00,0X00,0X3F,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X03,0XFF,0XE0,0XFF,0XFF,0X00,0X0E,0X00,0X00,0X3F,0XFF,0X9C,0X00,0X00,0X00,
0X00,0X03,0XFF,0X80,0X0F,0XFF,0X00,0X06,0X00,0X00,0X03,0XF6,0X7C,0X00,0X00,0X00,
0X00,0X03,0XFF,0X00,0X1F,0X7C,0X00,0XF8,0X00,0X00,0X09,0XF0,0X3C,0X00,0X00,0X00,
0X00,0X03,0XFE,0X00,0X3F,0X38,0X01,0XFC,0X00,0X00,0X1C,0XF8,0X1C,0X00,0X00,0X00,
0X00,0X03,0XFC,0X00,0XFF,0X90,0X03,0XFE,0X00,0X00,0X3D,0XFF,0X9C,0X00,0X00,0X00,
0X00,0X03,0XF8,0X00,0XFF,0XC0,0X0F,0XFF,0X00,0X00,0X73,0XFF,0XCC,0X00,0X00,0X00,
0X00,0X03,0XF0,0X00,0XFF,0XE0,0X0F,0XFF,0X00,0X00,0X61,0XFF,0XFC,0X60,0X00,0X00,
0X00,0X03,0XF0,0X01,0XFF,0XF0,0X1F,0XFF,0X00,0X00,0XC0,0XFF,0XFF,0XF0,0X00,0X00,
0X00,0X07,0XE0,0X01,0XFF,0XBF,0XFF,0XFF,0X80,0X00,0XE0,0X00,0X7F,0XF0,0X00,0X00,
0X00,0X03,0XC0,0X01,0XFF,0X3F,0XFF,0XFF,0X80,0X00,0XC0,0X00,0X3F,0XF8,0X00,0X00,
0X00,0X01,0X80,0X01,0XFE,0X7F,0XFF,0XFF,0X80,0X00,0X80,0X00,0X1F,0XFC,0X00,0X00,
0X00,0X07,0X00,0X00,0XFE,0X7F,0XFF,0XFF,0X80,0X00,0X80,0X00,0X0C,0XFC,0X00,0X00,
0X00,0X03,0X00,0X00,0XF0,0X7F,0XFF,0XFF,0X00,0X00,0X80,0X00,0X04,0X7C,0X00,0X00,
0X00,0X03,0X00,0X00,0X7E,0X3F,0XFF,0XFC,0X00,0X01,0X80,0X00,0X03,0XFC,0X00,0X00,
0X00,0X03,0X00,0X00,0X7E,0X3F,0XFF,0XFE,0X00,0X01,0X80,0X00,0X01,0XF0,0X00,0X00,
0X00,0X03,0X00,0X00,0X3F,0XDF,0XBF,0XFF,0X80,0X01,0X80,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X3F,0XCF,0XBF,0XFF,0XC0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0X7F,0XCF,0XFF,0XFF,0XE0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X00,0XFF,0XCF,0XCF,0XFF,0XC0,0X01,0X80,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X00,0X1E,0XFF,0XEF,0XC7,0XFF,0XC0,0X01,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X01,0XFC,0XFF,0XE7,0XF0,0X7F,0X80,0X03,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X07,0X07,0XC0,0XFF,0XF3,0XF8,0XFF,0X00,0X0F,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X03,0X0F,0X80,0X7F,0XF3,0XF9,0XFE,0X00,0X0E,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X1F,0X00,0X3F,0XF3,0XFB,0XFE,0X00,0X0C,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X38,0X00,0X03,0XF9,0XFB,0XF3,0XE0,0X18,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XF0,0X00,0X3C,0XF9,0XFB,0XEF,0XF0,0X30,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XC0,0X00,0X7D,0XF9,0XFB,0XCF,0XF0,0X70,0X00,0X00,0X18,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0XFF,0XF8,0XFB,0XCF,0XFC,0XC0,0X00,0X03,0XF8,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0XFF,0XFC,0XFB,0XFF,0XFC,0X00,0X00,0X07,0XF8,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0XFF,0XDE,0XFB,0XFF,0X7C,0X00,0X00,0X3F,0XFC,0X00,0X00,0X00,
0X00,0X01,0X00,0X00,0XFF,0XDE,0XF3,0XFF,0X3C,0X00,0X00,0X7F,0XFE,0X00,0X00,0X00,
0X00,0X01,0X00,0X00,0XFF,0XC2,0XF3,0XFF,0X1C,0X00,0X00,0XFF,0XFE,0X00,0X00,0X00,
0X00,0X01,0X00,0X00,0XFB,0XE3,0XFF,0XFF,0X3C,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,
0X00,0X01,0X00,0X00,0XF9,0XEF,0XFF,0XFE,0X3C,0X00,0X00,0XFF,0XFF,0X00,0X00,0X00,
0X00,0X01,0X00,0X00,0XFC,0XFF,0XFF,0XF9,0XFC,0X00,0X00,0XDC,0X7F,0X00,0X00,0X00,
0X00,0X01,0X00,0X01,0XFE,0X7F,0XFF,0XE3,0XFE,0X00,0X00,0XFF,0XBF,0X00,0X00,0X00,
0X00,0X01,0X00,0X01,0XFE,0X3F,0XFF,0XC7,0XFE,0X00,0X00,0XFF,0X9F,0X00,0X00,0X00,
0X00,0X01,0X00,0X03,0XFF,0X3F,0XFF,0XCF,0XFF,0X00,0X00,0XFF,0XBF,0X00,0X00,0X00,
0X00,0X01,0X00,0XFF,0XFF,0XCF,0XFF,0XFF,0XFF,0X80,0X00,0XFF,0XFE,0X00,0X00,0X00,
0X00,0X01,0X0F,0XE0,0X7F,0XFF,0X87,0XFF,0XFF,0X80,0X00,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X01,0X1F,0X80,0X3F,0XFF,0X03,0XFF,0XCE,0X00,0X00,0XFF,0X00,0X00,0X00,0X00,
0X00,0X01,0XF0,0X00,0X0F,0XFE,0X01,0XFC,0X1E,0X00,0X00,0XF0,0X00,0X00,0X00,0X00,
0X00,0X01,0XE0,0X7F,0XC7,0XFC,0X01,0XFC,0X3E,0X00,0X00,0XC1,0XFF,0XE0,0X00,0X00,
0X00,0X01,0XC1,0XFF,0XF7,0XF8,0X01,0XFF,0XFC,0X00,0X01,0X8D,0XFF,0XF0,0X00,0X00,
0X00,0X01,0X87,0XFF,0XFB,0XFC,0X01,0XFF,0XF8,0X00,0X0F,0X1E,0XFF,0XF8,0X00,0X00,
0X00,0X01,0X3F,0X80,0X03,0XFC,0X01,0XFF,0XF0,0X00,0X0E,0X7E,0X7F,0XFE,0X00,0X00,
0X00,0X01,0XF8,0X00,0X07,0XFE,0X01,0XFF,0XE2,0X00,0X1E,0X7F,0X3F,0XFC,0X00,0X00,
0X00,0X01,0XE0,0XFF,0X9F,0XDF,0X03,0XFF,0XC6,0X60,0X1C,0XFF,0X8F,0XFE,0X00,0X00,
0X00,0X01,0X8F,0XC0,0XFF,0X3F,0XC7,0XEF,0XE3,0X78,0X3E,0X1F,0XCF,0XFF,0X00,0X00,
0X00,0X01,0XDF,0X80,0XFE,0X7F,0XEF,0XE7,0XF1,0XBC,0X7F,0X0F,0XCF,0XFF,0XC0,0X00,
0X00,0X01,0XFC,0X00,0XFD,0XFF,0XFF,0XE3,0XF1,0X9E,0X3F,0XC3,0XE7,0XFF,0X00,0X00,
0X00,0X01,0XF8,0X01,0XF1,0XF9,0XFF,0XF1,0XFD,0XCF,0X9F,0XE1,0XFF,0XFF,0X00,0X00,
0X00,0X01,0X80,0X01,0XF3,0XF1,0XFF,0XF9,0XFD,0XC1,0X9F,0XF8,0XFF,0XE0,0X00,0X00,
0X00,0X01,0X00,0X01,0XFF,0XE3,0XFD,0XFE,0XFF,0XC0,0X3F,0XF0,0X00,0X03,0X80,0X00,
0X00,0X01,0X00,0X00,0XFF,0XE3,0XFD,0XFF,0X7F,0XC0,0X7F,0XC0,0X00,0X07,0X80,0X00,
0X00,0X01,0X00,0X00,0XFF,0XE7,0XFC,0XFF,0X07,0X80,0XFF,0XCF,0XFF,0XFF,0X00,0X00,
0X00,0X01,0X00,0X00,0XFF,0XEF,0XCE,0X7F,0X07,0X00,0X7E,0X7F,0XFF,0XFE,0X00,0X00,
0X00,0X01,0X1F,0XFE,0XFF,0XFF,0XCE,0X7F,0X3E,0X00,0X3E,0X7F,0XFF,0XFC,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XFF,0XF1,0XCE,0X3F,0X3E,0X00,0X3F,0XFC,0X07,0XF8,0X00,0X00,
0X00,0X01,0XFF,0XFF,0X3F,0XE1,0X8E,0X3F,0X3E,0X00,0X1F,0XFC,0X07,0XF0,0X00,0X00,
0X00,0X01,0XE0,0X00,0X0E,0X03,0X8E,0X3F,0X3E,0X00,0X0F,0XFF,0XF8,0X00,0X00,0X00,
0X00,0X01,0XFF,0XFF,0X87,0XFF,0X8E,0X3F,0X1E,0X00,0X04,0XFE,0X3E,0X00,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XC7,0XFF,0X8F,0X3F,0XBE,0X00,0X00,0XFE,0X1E,0X00,0X00,0X00,
0X00,0X01,0XFF,0XFF,0XC7,0XFF,0X8F,0X9F,0XFE,0X00,0X00,0XFC,0X3F,0X80,0X00,0X00,
0X00,0X01,0X87,0XFF,0X8F,0XFF,0X8F,0X9F,0XFE,0X00,0X00,0X79,0XFF,0XC0,0X00,0X00,
0X00,0X01,0X00,0X06,0X3F,0XFF,0X8F,0XDF,0XFE,0X00,0X00,0X7F,0XFF,0XC0,0X00,0X00,
0X00,0X01,0X00,0X00,0X7F,0XFF,0X8F,0X8F,0XFC,0X00,0X00,0X1F,0XFF,0XE0,0X00,0X00,
0X00,0X01,0X80,0X00,0XFF,0XFF,0X8F,0X1F,0X00,0X00,0X00,0X0F,0XFF,0XF0,0X00,0X00,
0X00,0X01,0XC0,0X01,0XFF,0XFF,0X8E,0X3F,0X81,0X00,0X00,0X01,0XFF,0XE0,0X00,0X00,
0X00,0X01,0XE0,0X01,0XFF,0XFF,0X8E,0X7F,0XC3,0X80,0X00,0X00,0XFF,0X80,0X00,0X00,
0X00,0X01,0XF8,0X00,0XFF,0XF3,0X8E,0X7F,0XE7,0XC0,0X00,0X00,0X7F,0X00,0X00,0X00,
0X00,0X01,0XFF,0X80,0XFF,0XE7,0X8F,0XFF,0XC4,0XE0,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X87,0XE1,0XFF,0XDF,0X8F,0XFF,0XCE,0X1C,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XF1,0XF8,0XFF,0XFF,0X8F,0XFF,0XCF,0XCF,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFE,0X1C,0XFF,0XBE,0X43,0XE0,0X1F,0XF3,0X80,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0X06,0X7F,0X3E,0X63,0XC1,0X3F,0XF1,0XE0,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0X83,0X3E,0X3C,0XF3,0X81,0X1F,0XF8,0XF0,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0XE1,0X80,0X39,0XFF,0X00,0X07,0XFE,0X78,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0XFF,0XFE,0X60,0X1F,0XFE,0X1C,0X03,0XFF,0X1C,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X0F,0XFF,0X3C,0X1F,0XFE,0X60,0X01,0XFF,0X8E,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X01,0XFF,0X9E,0X0F,0XFF,0XC0,0X00,0X3F,0XC3,0X00,0X00,0X00,0X00,0X00,
0X00,0X01,0X00,0X7F,0XC3,0X8F,0XFD,0X80,0X00,0X3F,0XE3,0X80,0X00,0X00,0X00,0X00,
0X00,0X01,0X00,0X3F,0XE1,0XC7,0XFC,0X00,0X00,0X3F,0XF1,0XC0,0X00,0X00,0X00,0X00,
0X00,0X01,0X00,0X1F,0XF1,0XE3,0XF8,0X00,0X00,0X07,0XF0,0X60,0X00,0X00,0X00,0X00,
0X00,0X01,0X80,0X0F,0XF1,0XE1,0XF0,0X00,0X00,0X03,0XF8,0X30,0X00,0X00,0X00,0X00,
0X00,0X01,0X80,0X01,0XF8,0X30,0X00,0X00,0X00,0X01,0XFC,0X3C,0X00,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0XF8,0X18,0X00,0X00,0X00,0X00,0XFC,0X0E,0X00,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0XFC,0X0C,0X00,0X00,0X00,0X00,0XFE,0X0F,0X00,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X7C,0X0C,0X00,0X00,0X00,0X00,0X7E,0X07,0X80,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X7C,0X06,0X00,0X00,0X00,0X00,0X3F,0X03,0X80,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X7E,0X06,0X00,0X00,0X00,0X00,0X1F,0X81,0X80,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X1E,0X03,0X00,0X00,0X00,0X00,0X0F,0X80,0XC0,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X0E,0X01,0X00,0X00,0X00,0X00,0X07,0X80,0X60,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X0F,0X01,0X80,0X00,0X00,0X00,0X03,0XC0,0X30,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X07,0X81,0XC0,0X00,0X00,0X00,0X01,0XC0,0X38,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X07,0X81,0XC0,0X00,0X00,0X00,0X00,0XC0,0X18,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X07,0XC0,0XE0,0X00,0X00,0X00,0X00,0X40,0X08,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X03,0XC0,0XF0,0X00,0X00,0X00,0X00,0X00,0X04,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X03,0XC0,0X70,0X00,0X00,0X00,0X00,0X00,0X06,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XC0,0X70,0X00,0XF8,0X00,0X00,0X00,0X02,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X03,0XC0,0X30,0X00,0XFF,0XF0,0X00,0X00,0X07,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X03,0XC0,0X30,0X01,0XFF,0XF8,0X00,0X00,0X03,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XC0,0X30,0X01,0XFF,0XFC,0X00,0X00,0X03,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XC0,0X18,0X01,0XFF,0XFE,0X00,0X00,0X03,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XC0,0X08,0X00,0XFF,0XFF,0X00,0X00,0X01,0XC0,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XC0,0X08,0X00,0X67,0XFF,0X00,0X00,0X01,0XC0,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XC0,0X08,0X00,0XFF,0XFF,0X00,0X00,0X00,0XC0,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0X80,0X08,0X03,0XFF,0XBF,0X80,0X00,0X00,0X40,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X07,0XFF,0X3F,0X80,0X00,0X00,0X40,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X03,0XFF,0XBF,0XC0,0X00,0X00,0X40,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X03,0XFF,0X3F,0XC0,0X00,0X00,0X40,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X03,0XF0,0X1F,0XC0,0X00,0X00,0X40,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X03,0XFF,0XCF,0XF0,0X00,0X00,0X40,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X01,0XFF,0XE7,0XFC,0X00,0X00,0XC0,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X01,0XFF,0XF3,0XFF,0XF0,0X01,0XC0,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X01,0XFF,0XF8,0XFF,0XF8,0X01,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X7F,0XFC,0X7F,0XFF,0X03,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X1F,0XFF,0X00,0X7F,0X83,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X3F,0XFF,0X80,0X1F,0XC7,0X80,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X3F,0XFF,0XFF,0XFF,0XC3,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X3F,0XFF,0XFF,0XFF,0XC4,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X3F,0XFF,0XFF,0XFF,0XC4,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X18,0X00,0X1F,0XFF,0XFF,0XFF,0XC4,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X38,0X00,0X0F,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X78,0X00,0X03,0XFF,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0XF8,0X00,0X00,0X7F,0XFF,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X01,0XF8,0X00,0X00,0X3F,0XFF,0XFF,0XFC,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X38,0X00,0X00,0X3F,0XFF,0XF9,0XFC,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X18,0X00,0X00,0X3F,0XFF,0XF3,0XFC,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X00,0X3F,0XFF,0XE7,0XFC,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X08,0X00,0X00,0X3C,0XFC,0X1F,0XF8,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X00,0X8C,0X00,0X00,0X7E,0X00,0X7F,0X98,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0X79,0X8C,0X00,0X07,0XFF,0X0F,0XFF,0X9C,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X00,0XFC,0XC6,0X00,0X0F,0XFF,0X7F,0XFF,0X78,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X01,0XF8,0X46,0X00,0X0F,0XFF,0X7F,0XFE,0X78,0X00,0X00,0X00,
0X00,0X01,0X80,0X00,0X03,0XFC,0X07,0X00,0X0F,0XFF,0X7F,0XFE,0X78,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0X07,0XFE,0X07,0XC0,0X0F,0XFF,0X7F,0XFE,0X60,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0X07,0XF9,0XE7,0XE0,0X07,0XFF,0X7F,0XF8,0XC0,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0X03,0XE3,0XF3,0XF0,0X03,0XFF,0XFF,0XF1,0XC0,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0X7F,0XC3,0XF3,0X38,0X01,0XFF,0XFF,0XF1,0X80,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0XFF,0XDF,0XF3,0X1C,0X00,0X7F,0XFF,0XE3,0X80,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0XFF,0X9F,0XF3,0X8E,0X00,0X3F,0XFF,0XE7,0X80,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0XFE,0X33,0XFB,0XCF,0X00,0X1F,0XFF,0XCF,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X01,0XFE,0X3F,0XF1,0XCF,0X00,0X0F,0XFF,0XCF,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0X0C,0X7F,0XCD,0XE3,0X80,0X0F,0XFF,0XDF,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X01,0X01,0XFC,0X8E,0X7F,0X80,0X0F,0XFF,0X9F,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X0F,0XF9,0XFC,0X1E,0X3F,0X80,0X0F,0XF3,0XBF,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X0F,0XFD,0XFC,0X3E,0X3F,0X80,0X0F,0XE1,0XBF,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X0F,0XFC,0XFC,0X3F,0X3F,0X80,0X0F,0XC1,0X3F,0X00,0X00,0X00,0X00,
0X00,0X00,0X80,0X1F,0XE5,0XF8,0X3B,0X9F,0X80,0X0F,0XC2,0X3F,0X80,0X00,0X00,0X00,
0X00,0X00,0X80,0X1F,0XCF,0XF0,0X33,0XDF,0XC0,0X03,0X9C,0X0F,0X80,0X00,0X00,0X00,
0X00,0X00,0X80,0X00,0X0E,0X00,0X39,0XD9,0XC0,0X00,0X38,0X63,0XC0,0X00,0X00,0X00,
0X00,0X00,0X80,0X0F,0XFE,0X00,0X0F,0XEE,0XF0,0X00,0XFF,0XF3,0XF0,0X00,0X00,0X00,
0X00,0X00,0X80,0X1F,0XFE,0X00,0X07,0XEE,0X78,0X01,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XFE,0X00,0X07,0XEE,0X3C,0X01,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0XFE,0X00,0X07,0XEF,0X3C,0X01,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X1F,0X7C,0X00,0X00,0XEF,0XFC,0X01,0XFF,0XFF,0XF0,0X00,0X00,0X00,
0X00,0X00,0X00,0X1E,0X1C,0X00,0X00,0X6F,0XFC,0X01,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X33,0XFE,0X00,0XFF,0XFF,0XC0,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFE,0X00,0XFF,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFE,0X00,0X3F,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X07,0XFE,0X00,0X1F,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFC,0X00,0X03,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFE,0X00,0X03,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X7E,0X00,0X03,0XFF,0X80,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X03,0XFF,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X01,0XFE,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X78,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X30,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,0X00,
};
