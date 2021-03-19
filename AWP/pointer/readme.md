# 020 Übungsbeispiel

| | |Initialisierung| | Endwert|
|:-|:-|:-|:-|:-|
|Variable| Adresse| Inhalt| | Inhalt|
|i|0x2000 |5| | |
|pi|0x200C |/| |0 |
|pj|0x0 |/| | |
|pc|/|/ || |
|pd|0x30 |/ | | |
|a|0x200C |0 | | |

a) pi = i => pi -> 0x0005 //Segmentation Violation!
b) pi = *i => pi -> 0x2000, v = 0 //Segmentation Violation!
c) *pi = i => pi -> 0x200C, v = 5!
d) *pi = &i => pi -> 0x200C, v = 0x2000
e) pi = pj => pi -> 0x0, //Segmentation Violation!
f) pc = &pd => pc -> 0x0x2010, v = 0x30
g) pi = pc => pi -> 0x2010
h) pd = *pi => pd -> 0x0 //Segmentation Violation! 