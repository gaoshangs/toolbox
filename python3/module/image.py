#!/usr/bin/env python3
# -*- coding:utf-8 -*-
' a image test '
__author__ = 'Gason Wong'

from PIL import Image

im = Image.open('a.jpg')
print(im.format, im.size, im.mode)

im.thumbnail((200, 100))
im.save('thumb.jpg', 'JPEG')
