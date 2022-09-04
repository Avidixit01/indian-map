  #include "stdio.h"

int main()
{
    int curr_char, b, c;

    const char *data = "\
    TFy!QJu ROo TNn(ROo)SLq SLq ULo+\
    UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^\
    NBELPeHBFHT}TnALVlBLOFAkHFOuFETp\
    HCStHAUFAgcEAelclcn^r^r\\tZvYxXy\
    T|S~Pn SPm SOn TNn ULo0ULo#ULo-W\
    Hq!WFs XDt!";

    for (b = 0, c = 10; curr_char = data[b]; ) {
        b++;
        for(; curr_char-- > 64 ; ) {
            putchar(++c == 'Z' ? c = c / 9 : 33 ^ b & 1);
        }
    }

    return 0;
}
