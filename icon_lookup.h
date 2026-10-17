/* C code produced by gperf version 3.0.3 */
/* Command-line: /Library/Developer/CommandLineTools/usr/bin/gperf -t --ignore-case -N lookup_icon icons.gperf  */
/* Computed positions: -k'2,6,$' */

#if !((' ' == 32) && ('!' == 33) && ('"' == 34) && ('#' == 35) \
      && ('%' == 37) && ('&' == 38) && ('\'' == 39) && ('(' == 40) \
      && (')' == 41) && ('*' == 42) && ('+' == 43) && (',' == 44) \
      && ('-' == 45) && ('.' == 46) && ('/' == 47) && ('0' == 48) \
      && ('1' == 49) && ('2' == 50) && ('3' == 51) && ('4' == 52) \
      && ('5' == 53) && ('6' == 54) && ('7' == 55) && ('8' == 56) \
      && ('9' == 57) && (':' == 58) && (';' == 59) && ('<' == 60) \
      && ('=' == 61) && ('>' == 62) && ('?' == 63) && ('A' == 65) \
      && ('B' == 66) && ('C' == 67) && ('D' == 68) && ('E' == 69) \
      && ('F' == 70) && ('G' == 71) && ('H' == 72) && ('I' == 73) \
      && ('J' == 74) && ('K' == 75) && ('L' == 76) && ('M' == 77) \
      && ('N' == 78) && ('O' == 79) && ('P' == 80) && ('Q' == 81) \
      && ('R' == 82) && ('S' == 83) && ('T' == 84) && ('U' == 85) \
      && ('V' == 86) && ('W' == 87) && ('X' == 88) && ('Y' == 89) \
      && ('Z' == 90) && ('[' == 91) && ('\\' == 92) && (']' == 93) \
      && ('^' == 94) && ('_' == 95) && ('a' == 97) && ('b' == 98) \
      && ('c' == 99) && ('d' == 100) && ('e' == 101) && ('f' == 102) \
      && ('g' == 103) && ('h' == 104) && ('i' == 105) && ('j' == 106) \
      && ('k' == 107) && ('l' == 108) && ('m' == 109) && ('n' == 110) \
      && ('o' == 111) && ('p' == 112) && ('q' == 113) && ('r' == 114) \
      && ('s' == 115) && ('t' == 116) && ('u' == 117) && ('v' == 118) \
      && ('w' == 119) && ('x' == 120) && ('y' == 121) && ('z' == 122) \
      && ('{' == 123) && ('|' == 124) && ('}' == 125) && ('~' == 126))
/* The character set is not based on ISO-646.  */
error "gperf generated tables don't work with this execution character set. Please report a bug to <bug-gnu-gperf@gnu.org>."
#endif

#line 1 "icons.gperf"

#include <string.h>
#line 4 "icons.gperf"
struct IconMap { const char *name; const char *icon; };

#define TOTAL_KEYWORDS 94
#define MIN_WORD_LENGTH 2
#define MAX_WORD_LENGTH 16
#define MIN_HASH_VALUE 2
#define MAX_HASH_VALUE 229
/* maximum key range = 228, duplicates = 0 */

#ifndef GPERF_DOWNCASE
#define GPERF_DOWNCASE 1
static unsigned char gperf_downcase[256] =
  {
      0,   1,   2,   3,   4,   5,   6,   7,   8,   9,  10,  11,  12,  13,  14,
     15,  16,  17,  18,  19,  20,  21,  22,  23,  24,  25,  26,  27,  28,  29,
     30,  31,  32,  33,  34,  35,  36,  37,  38,  39,  40,  41,  42,  43,  44,
     45,  46,  47,  48,  49,  50,  51,  52,  53,  54,  55,  56,  57,  58,  59,
     60,  61,  62,  63,  64,  97,  98,  99, 100, 101, 102, 103, 104, 105, 106,
    107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121,
    122,  91,  92,  93,  94,  95,  96,  97,  98,  99, 100, 101, 102, 103, 104,
    105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119,
    120, 121, 122, 123, 124, 125, 126, 127, 128, 129, 130, 131, 132, 133, 134,
    135, 136, 137, 138, 139, 140, 141, 142, 143, 144, 145, 146, 147, 148, 149,
    150, 151, 152, 153, 154, 155, 156, 157, 158, 159, 160, 161, 162, 163, 164,
    165, 166, 167, 168, 169, 170, 171, 172, 173, 174, 175, 176, 177, 178, 179,
    180, 181, 182, 183, 184, 185, 186, 187, 188, 189, 190, 191, 192, 193, 194,
    195, 196, 197, 198, 199, 200, 201, 202, 203, 204, 205, 206, 207, 208, 209,
    210, 211, 212, 213, 214, 215, 216, 217, 218, 219, 220, 221, 222, 223, 224,
    225, 226, 227, 228, 229, 230, 231, 232, 233, 234, 235, 236, 237, 238, 239,
    240, 241, 242, 243, 244, 245, 246, 247, 248, 249, 250, 251, 252, 253, 254,
    255
  };
#endif

#ifndef GPERF_CASE_STRCMP
#define GPERF_CASE_STRCMP 1
static int
gperf_case_strcmp (s1, s2)
     register const char *s1;
     register const char *s2;
{
  for (;;)
    {
      unsigned char c1 = gperf_downcase[(unsigned char)*s1++];
      unsigned char c2 = gperf_downcase[(unsigned char)*s2++];
      if (c1 != 0 && c1 == c2)
        continue;
      return (int)c1 - (int)c2;
    }
}
#endif

#ifdef __GNUC__
__inline
#else
#ifdef __cplusplus
inline
#endif
#endif
static unsigned int
hash (str, len)
     register const char *str;
     register unsigned int len;
{
  static unsigned char asso_values[] =
    {
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230,  75,  65, 230, 230, 230,  10, 230, 230, 230,
      230, 230, 230, 230, 230,  25,  25,   5,  60,  35,
       80,  15,  20,  40,  10,  50,  40, 100,  65,  25,
       70,  95,   0,   0,  15,  35, 125,  65,   2,  95,
       70, 230, 230, 230, 230, 230, 230,  25,  25,   5,
       60,  35,  80,  15,  20,  40,  10,  50,  40, 100,
       65,  25,  70,  95,   0,   0,  15,  35, 125,  65,
        2,  95,  70, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230, 230, 230, 230, 230,
      230, 230, 230, 230, 230, 230
    };
  register unsigned int hval = len;

  switch (hval)
    {
      default:
        hval += asso_values[(unsigned char)str[5]];
      /*FALLTHROUGH*/
      case 5:
      case 4:
      case 3:
      case 2:
        hval += asso_values[(unsigned char)str[1]];
        break;
    }
  return hval + asso_values[(unsigned char)str[len - 1]];
}

struct IconMap *
lookup_icon (str, len)
     register const char *str;
     register unsigned int len;
{
  static struct IconMap wordlist[] =
    {
      {""}, {""},
#line 75 "icons.gperf"
      {".r", "📈"},
#line 34 "icons.gperf"
      {".rs", "🦀"},
#line 81 "icons.gperf"
      {".rds", "💾"},
#line 59 "icons.gperf"
      {".scss", "💅"},
#line 88 "icons.gperf"
      {".stats", "📊"},
      {""},
#line 49 "icons.gperf"
      {".cs", "#️⃣"},
#line 60 "icons.gperf"
      {".css", "💅"},
      {""},
#line 43 "icons.gperf"
      {".class", "🎃"},
#line 45 "icons.gperf"
      {".c", "🏎"},
#line 56 "icons.gperf"
      {".js", "📒"},
#line 44 "icons.gperf"
      {".jar", "🍯"},
      {""},
#line 58 "icons.gperf"
      {".jsx", "⚛️"},
      {""},
#line 55 "icons.gperf"
      {".ts", "📘"},
#line 95 "icons.gperf"
      {".svg", "🎨"},
      {""},
#line 57 "icons.gperf"
      {".tsx", "⚛️"},
      {""},
#line 30 "icons.gperf"
      {".sh", "🐚"},
#line 73 "icons.gperf"
      {".cfg", "⚙️"},
      {""},
#line 79 "icons.gperf"
      {".rproj", "👷‍♂️"},
      {""},
#line 33 "icons.gperf"
      {".rb", "💎"},
#line 91 "icons.gperf"
      {".jpg", "🏞"},
#line 92 "icons.gperf"
      {".jpeg", "🏞"},
      {""}, {""}, {""},
#line 27 "icons.gperf"
      {".txt", "📝"},
      {""},
#line 32 "icons.gperf"
      {".swift", "🦩"},
      {""}, {""},
#line 52 "icons.gperf"
      {".obj", "⏹"},
#line 42 "icons.gperf"
      {".java", "☕️"},
      {""},
#line 47 "icons.gperf"
      {".h", "🤠"},
#line 35 "icons.gperf"
      {".go", "🦫"},
#line 63 "icons.gperf"
      {".sql", "🛢"},
#line 89 "icons.gperf"
      {".todo", "🔘"},
      {""},
#line 50 "icons.gperf"
      {".csproj", "👷‍♂️"},
      {""}, {""},
#line 31 "icons.gperf"
      {".bash", "🐚"},
      {""},
#line 53 "icons.gperf"
      {".o", "⏹"},
      {""},
#line 40 "icons.gperf"
      {".egg", "🥚"},
      {""},
#line 80 "icons.gperf"
      {".rdata", "💾"},
#line 64 "icons.gperf"
      {".sqlite", "🛢"},
      {""},
#line 85 "icons.gperf"
      {".log", "📋"},
#line 12 "icons.gperf"
      {".toml", "⚙️"},
      {""}, {""}, {""},
#line 76 "icons.gperf"
      {".rmd", "📓"},
#line 61 "icons.gperf"
      {".html", "🌏"},
      {""},
#line 74 "icons.gperf"
      {".config", "⚙️"},
      {""},
#line 84 "icons.gperf"
      {".iso", "💿"},
#line 10 "icons.gperf"
      {"DOCKERFILE", "🐳"},
      {""},
#line 21 "icons.gperf"
      {".env.CA", "🇨🇦"},
      {""},
#line 14 "icons.gperf"
      {".env.test", "👩‍🔬"},
#line 6 "icons.gperf"
      {".gitignore", "🤷‍♀️"},
      {""},
#line 20 "icons.gperf"
      {".env.US", "🇺🇸"},
      {""},
#line 46 "icons.gperf"
      {".cpp", "🏎"},
#line 8 "icons.gperf"
      {".json", "📦"},
      {""}, {""}, {""},
#line 83 "icons.gperf"
      {".ini", "⚙️"},
      {""},
#line 9 "icons.gperf"
      {"favicon.ico", "🌠"},
#line 67 "icons.gperf"
      {".cookie", "🍪"},
#line 62 "icons.gperf"
      {".db", "🛢"},
#line 90 "icons.gperf"
      {".png", "🏞"},
      {""}, {""}, {""}, {""},
#line 48 "icons.gperf"
      {".hpp", "🤠"},
#line 87 "icons.gperf"
      {".lock", "🔒"},
#line 39 "icons.gperf"
      {".ipynb", "📓"},
      {""},
#line 65 "icons.gperf"
      {".sqlite3", "🛢"},
#line 93 "icons.gperf"
      {".gif", "💃"},
      {""}, {""},
#line 18 "icons.gperf"
      {".env.AU", "🇦🇺"},
      {""},
#line 54 "icons.gperf"
      {".sym", "🔣"},
#line 94 "icons.gperf"
      {".heif", "📷"},
      {""},
#line 69 "icons.gperf"
      {".tar.gz", "🤐"},
#line 11 "icons.gperf"
      {"Makefile", "👷‍♂️"},
#line 41 "icons.gperf"
      {".whl", "🛞"},
      {""}, {""},
#line 19 "icons.gperf"
      {".env.CN", "🇨🇳"},
      {""},
#line 38 "icons.gperf"
      {".pyi", "🪱"},
      {""}, {""},
#line 25 "icons.gperf"
      {".env.IE", "🇮🇪"},
      {""},
#line 77 "icons.gperf"
      {".rhistory", "⏳"},
      {""}, {""},
#line 24 "icons.gperf"
      {".env.FR", "🇫🇷"},
      {""},
#line 78 "icons.gperf"
      {".rprofile", "⚙️"},
      {""},
#line 15 "icons.gperf"
      {".env.development", "👷‍♂️"},
#line 22 "icons.gperf"
      {".env.UK", "🇬🇧"},
      {""},
#line 51 "icons.gperf"
      {".asm", "🔠"},
      {""}, {""},
#line 13 "icons.gperf"
      {".flake8", "❄️"},
      {""},
#line 28 "icons.gperf"
      {".csv", "📗"},
      {""}, {""},
#line 23 "icons.gperf"
      {".env.DE", "🇩🇪"},
      {""},
#line 71 "icons.gperf"
      {".yml", "🚀"},
#line 70 "icons.gperf"
      {".yaml", "🚀"},
      {""}, {""}, {""},
#line 68 "icons.gperf"
      {".zip", "🤐"},
      {""}, {""},
#line 26 "icons.gperf"
      {".env.IN", "🇮🇳"},
      {""},
#line 37 "icons.gperf"
      {".py3", "🐍"},
      {""}, {""}, {""}, {""},
#line 29 "icons.gperf"
      {".pdf", "📕"},
      {""}, {""}, {""}, {""},
#line 82 "icons.gperf"
      {".qmd", "📘"},
      {""}, {""}, {""},
#line 7 "icons.gperf"
      {".md", "📰"},
#line 72 "icons.gperf"
      {".env", "⚙️"},
      {""}, {""}, {""},
#line 36 "icons.gperf"
      {".py", "🐍"},
#line 96 "icons.gperf"
      {".mp4", "🎞"},
      {""}, {""}, {""}, {""},
#line 86 "icons.gperf"
      {".map", "🗺"},
      {""}, {""},
#line 17 "icons.gperf"
      {".env.NZ", "🇳🇿"},
      {""},
#line 99 "icons.gperf"
      {".mp3", "🔈"},
      {""}, {""}, {""}, {""}, {""},
#line 16 "icons.gperf"
      {".env.production", "👨‍🚀"},
#line 66 "icons.gperf"
      {".mysql", "🛢"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 98 "icons.gperf"
      {".wav", "🔈"},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""}, {""},
      {""}, {""}, {""}, {""}, {""}, {""}, {""},
#line 97 "icons.gperf"
      {".mov", "🎞"}
    };

  if (len <= MAX_WORD_LENGTH && len >= MIN_WORD_LENGTH)
    {
      unsigned int key = hash (str, len);

      if (key <= MAX_HASH_VALUE)
        {
          register const char *s = wordlist[key].name;

          if ((((unsigned char)*str ^ (unsigned char)*s) & ~32) == 0 && !gperf_case_strcmp (str, s))
            return &wordlist[key];
        }
    }
  return 0;
}
