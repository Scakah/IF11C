# Wiederholung felder

### 1-Dim


```int i_zahlenreihe[7];```

```for(int a = 0;a <7; a++)
{
    i_zahlenreihe[a] = (a+1) *2;
}
```

### 2-Dim

```int i_zahlenreihe2[3][5];
    for (int a = 0; a < 3; a++)
    {
        for (int b = 0; b < 5; b++ )
        {
            i_zahlenreihe2[a][b] = ( ( ( a * 5) + b ) * 2 ) + 1;
        }
    }
```

### 2-Dim (alt)

```double d_spannungStromstaerke[2][5]
 for(int a = 0; a < 5; a++)
 {
     double spannung = 0;
     double staerke = 0;

     cin >> spannung;
     cin >> staerke;

     d_spannungStromstaerke[0] = spannung;
     d_spannungStromstaerke[1] = staerke;
 }
```

Wiederstand berechnen:

```double d_widerstaende[5] = {0,0,0,0,0};
    for(int a = 0; a <5; a++)
    {
        d_wiederstaende[a] = d_messwertpaare[1][a] / d_spannungStromstaerke[0][a]; 
    }
```

### Nachteile/Probleme

- Zusammenhängende felder müssen zusammen kopiert/betrachtet werden
- Keine Informationen über den Feldinhalt
