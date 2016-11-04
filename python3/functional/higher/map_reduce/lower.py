# -*- coding:utf-8 -*-
up = {'Q': 'q', 'W': 'w', 'P': 'p', 'Z': 'z', 'H': 'h', 'F': 'f', 'S': 's', 'A': 'a', 'X': 'x', 'J': 'j', 'I': 'i', 'E': 'e', 'N': 'n', 'B': 'b', 'U': 'u', 'L': 'l', 'T': 't', 'O': 'o', 'K': 'k', 'G': 'g', 'M': 'm', 'C': 'c', 'R': 'r', 'V': 'v', 'Y': 'y', 'D': 'd'}

def low(s):
    return letters[s] 

def upper(s):
    return letters[s] 
s = "abCD"
def format(s):
    s = list(s)
    l = map(low, s)
