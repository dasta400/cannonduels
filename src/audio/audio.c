/* ---------------------------LICENSE NOTICE-------------------------------- 
MIT License

Copyright (c) 2018 David Asta

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include "audio.h"

__at(AUDIO_MUSIC_ADDRESS) const u8 audio_music[AUDIO_MUSIC_SIZE] = {
    0x41, 0x54, 0x31, 0x30, 0x01, 0x40, 0x42, 0x0f, 0x02, 0x06, 0x88, 0x00, 0x58, 0x00, 0x61, 0x00,
    0x6d, 0x00, 0x86, 0x00, 0xa0, 0x00, 0xb5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x5a,
    0x00, 0x06, 0x00, 0x3c, 0x20, 0x30, 0x18, 0x24, 0x10, 0x18, 0x0d, 0x68, 0x00, 0x01, 0x00, 0x3c,
    0x38, 0x74, 0x0c, 0x74, 0x18, 0x70, 0x0c, 0x6c, 0x18, 0x28, 0x24, 0x20, 0x1c, 0x18, 0x14, 0x10,
    0x0c, 0x08, 0x04, 0x0d, 0x5a, 0x00, 0x01, 0x00, 0x3c, 0x7c, 0xff, 0x78, 0xfe, 0x74, 0xfc, 0x70,
    0xfb, 0x6c, 0xf8, 0x68, 0xf0, 0x64, 0xe8, 0x60, 0xe3, 0x5c, 0xde, 0x58, 0xdc, 0x0d, 0x5a, 0x00,
    0x01, 0x00, 0x3e, 0x01, 0x36, 0x01, 0x2e, 0x01, 0x26, 0x01, 0x1e, 0x01, 0x16, 0x01, 0x0e, 0x01,
    0x06, 0x01, 0x0d, 0x5a, 0x00, 0x01, 0x00, 0x7e, 0x2b, 0x0c, 0x7a, 0x2a, 0x0d, 0x76, 0x29, 0x10,
    0x72, 0x28, 0x09, 0x2e, 0x27, 0x66, 0x26, 0x09, 0x5e, 0x25, 0x0e, 0x16, 0x24, 0x0e, 0x23, 0x06,
    0x22, 0x0d, 0x5a, 0x00, 0x24, 0x00, 0x00, 0x00, 0x10, 0x01, 0x10, 0x11, 0x01, 0xc8, 0x01, 0x4a,
    0x01, 0x24, 0x00, 0x11, 0x01, 0xc8, 0x01, 0x4a, 0x01, 0x00, 0x11, 0x01, 0xc8, 0x01, 0x6d, 0x01,
    0x00, 0x11, 0x01, 0x4f, 0x01, 0x6d, 0x01, 0x00, 0x11, 0x01, 0x4f, 0x01, 0x6d, 0x01, 0x10, 0x2d,
    0x01, 0xc8, 0x01, 0x6d, 0x01, 0x34, 0x00, 0x2d, 0x01, 0xc8, 0x01, 0x6d, 0x01, 0x01, 0xda, 0x00,
    0x00, 0x86, 0xe3, 0x00, 0x00, 0x01, 0x06, 0x2f, 0x02, 0x47, 0x02, 0x2f, 0x06, 0x4d, 0x06, 0x2f,
    0x02, 0x21, 0x02, 0x39, 0x04, 0x21, 0x04, 0x39, 0x04, 0x21, 0x04, 0x39, 0x00, 0x86, 0xe0, 0x00,
    0x00, 0x01, 0x16, 0x39, 0x0e, 0x35, 0x06, 0x27, 0x06, 0x2f, 0x0e, 0x4d, 0x47, 0x4d, 0x51, 0x02,
    0x51, 0x4d, 0x47, 0x4d, 0x02, 0x43, 0x3f, 0x43, 0x39, 0x00, 0x42, 0x80, 0x00, 0x00, 0x00, 0x86,
    0xe3, 0x00, 0x00, 0x02, 0x06, 0x2f, 0x02, 0x47, 0x02, 0x2f, 0x06, 0x4d, 0x06, 0x2f, 0x02, 0x21,
    0x02, 0x39, 0x04, 0x90, 0x67, 0x01, 0x04, 0x69, 0x04, 0x51, 0x04, 0x69, 0x00, 0x62, 0xe7, 0x00,
    0x00, 0x03, 0x02, 0x62, 0x60, 0x04, 0x42, 0x00, 0x62, 0x60, 0x05, 0x02, 0x62, 0x60, 0x04, 0x02,
    0x62, 0x60, 0x03, 0x62, 0x60, 0x04, 0x23, 0x02, 0x62, 0x60, 0x05, 0x02, 0x62, 0x60, 0x04, 0x02,
    0x62, 0x60, 0x03, 0x02, 0x62, 0x60, 0x04, 0x02, 0x62, 0x60, 0x05, 0x02, 0x62, 0x60, 0x04, 0x02,
    0x62, 0x60, 0x03, 0x02, 0x62, 0x60, 0x04, 0x02, 0x62, 0x60, 0x05, 0x02, 0x62, 0x60, 0x04, 0x02,
    0x62, 0x60, 0x03, 0x02, 0x62, 0x60, 0x04, 0x02, 0x62, 0x60, 0x05, 0x06, 0x62, 0x60, 0x03, 0x06,
    0x62, 0x60, 0x05, 0x06, 0x62, 0x60, 0x03, 0x00, 0x42, 0x80, 0x00, 0x00, 0x00
};

__at(AUDIO_SFX_ADDRESS) const u8 audio_sfx[AUDIO_SFX_SIZE] = {
    0x41, 0x54, 0x31, 0x30, 0x01, 0x40, 0x42, 0x0f, 0x02, 0xff, 0xb0, 0x00, 0xe1, 0x01, 0xea, 0x01,
    0x37, 0x02, 0x6a, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0d, 0xe3, 0x01, 0x02, 0x00, 0x20,
    0xa4, 0xe6, 0xff, 0xac, 0xd7, 0xff, 0xb0, 0xce, 0xff, 0x02, 0x20, 0x9c, 0x14, 0x00, 0xa0, 0xf6,
    0xff, 0xa8, 0xe5, 0xff, 0xac, 0xde, 0xff, 0x02, 0x20, 0x02, 0x20, 0x98, 0x2a, 0x00, 0x9c, 0x09,
    0x00, 0xa4, 0xfe, 0xff, 0xa8, 0xea, 0xff, 0x02, 0x20, 0x02, 0x20, 0x94, 0x44, 0x00, 0x98, 0x1d,
    0x00, 0xa0, 0x04, 0x00, 0xa4, 0xf9, 0xff, 0x02, 0x20, 0x02, 0x20, 0x8c, 0x61, 0x00, 0x90, 0x29,
    0x00, 0x98, 0x16, 0x00, 0x9c, 0x02, 0x00, 0x0d, 0xe3, 0x01, 0x01, 0x00, 0x3c, 0x7c, 0x07, 0x78,
    0x0c, 0x38, 0x74, 0x07, 0x70, 0x0c, 0x2c, 0x6c, 0x07, 0x68, 0x0c, 0x28, 0x64, 0x07, 0x64, 0x0c,
    0x20, 0x60, 0x07, 0x5c, 0x0c, 0x1c, 0x58, 0x07, 0x58, 0x0c, 0x14, 0x54, 0x07, 0x50, 0x0c, 0x10,
    0x4c, 0x07, 0x4c, 0x0c, 0x08, 0x48, 0x07, 0x44, 0x0c, 0x04, 0x0d, 0xe3, 0x01, 0x01, 0x00, 0x7e,
    0x2b, 0x0c, 0x7a, 0x2a, 0x0d, 0x76, 0x29, 0x10, 0x72, 0x28, 0x09, 0x2e, 0x27, 0x66, 0x26, 0x09,
    0x5e, 0x25, 0x0e, 0x16, 0x24, 0x0e, 0x23, 0x06, 0x22, 0x0d, 0xe3, 0x01, 0x40, 0x00, 0x00, 0x00,
    0x99, 0x02, 0x00, 0x9a, 0x02, 0x9a, 0x02, 0x9a, 0x02, 0x01, 0x8f, 0x02, 0x00, 0x42, 0x80, 0x00,
    0x00, 0x00
};