LDA 4500
MOV B,A
LDA 4501
CMP B
JC F
MOV A,B
F: STA 4502
HLT