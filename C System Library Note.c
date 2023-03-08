Note for C:
- Print ASCII value of a char: printf("%d ", c);
(c is char variable)

    STRING : -how to use strncpy : strncpy(destination, source + start pos, length or copy);
destination[end position] = '\0';  // this to make sure that string ends

- strrev(str):reverse string(return func)
                  ->way to save reverse string:
    char s[10] = "abcdefghij";
char a[10];
strcpy(a, strrev(s));  // this will save reversed 's' to 'a'

- strcat(s1, s2):return to s1s2
    eg.:s1 = "abc", s2 = "def"->strcat(s1, s2) = "abcdef"

                                                 - strcmp(s1, s2):
                                                     = 0 - s1 = s2 > 0 - s1 > s2 < 0 - s1 < s2
                                                                                                ->to sort string
alphabetically:s1 < s2 < s3 < ... + strcmpi(s1, s2):this will not be case insensitive('A' = 'a')

                                  - char* s2 = strdup(s1): duplicate s1 to s2
  char* s2 = strndup(s1, n): duplicate first 5 chars in s1 to s2

- strlwr(str): make str lowercase
  strupr(str): make str uppercase


MATH:
x = -98.4
- ceil(x): -99
- floor(x): - 98
- abs(x): 98

- log(x): calc ln(x)
- log10(x): calc log10(x)

- fmod(x, y): calc x % y but apply to both int and double

- exp(x): calc e^x (x can be double)
- cos(x), acos(x): calc cos, cos^-1

 some const value in math.h lib:
- M_E: e
- M_LOG2E: log2(e)
- M_LOG10E: log10(e)
- M_LN2: ln2
- M_LN10: ln10
- M_PI: pi
- M_PI_2: pi/2
- M_PI_4: pi/4
- M_1_PI: 1/pi
- M_2_PI: 2/pi
- M_2_SQRTPI: sqrt(2/pi)
- M_SQRT2: sqrt(2)
- M_SQRT1_2: 1/sqrt(2)


CTYPE: these funcs all return 1 when true, 0 when false
- isblank(char c), isspace(char c): (true = blank)
 + isblank() considers blank characters the tab character ('\t') and the space character (' ').
 + isspace() considers space characters : (' ') - Space, ('\t') - Horizontal tab, ('\n') - Newline, ('\v') - Vertical tab, ('\f') - Feed, ('\r') - Carriage return
 -> isblank() using for a line
    isspace() using for a paragraph

- isdigit(char c) (true = a digit)
- islower(char c) (true = lowercase letter)
- isupper(char c) (true = uppercase letter)
- ispunct(char c) (true = any chars that are not num or alphabet)
 eg.: @ ! , . ? & ^ *...etc.

- isprint(char c) (true = printable char include space)
- isgraph(char c) (true = printable char except space)

- toascii(c): convert c to ascii value
- tolower(c): convert c to lowercase
- toupper(c): convert c to uppercase