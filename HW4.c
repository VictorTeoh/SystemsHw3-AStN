#include  <stdio.h>
#include <string.h>

int main(){
  //strchr returns a pointer to the first occurance of char in a string
  //its header - char *strchr(const char *str, int c)
  //Takes the string you are looking in and then the character you are looking for
  //returns null if not in the string
  char s[] = "Hello, it’s very nice to meet you";
  char o = 'o';
  char z = 'z';
  char *point1 = strchr( s, o);
  char *point2 = strchr( s, z);
  printf("Point1 points to the string %s \n", point1);//points to String "o, it’s very nice to meet you"
  printf("Point2 points to the string %s \n", point2);//"null"
  
  //strstr returns a pointer to the first occurance of substring within a string
  //its header - char *strstr(const char *haystack, const char *needle)
  //Takes 2 strings first the string you are looking in and then the string you are looking for
  //returns null if not in the string
  char s1[] = "his is hiss";
  char search[] = "is";
  char search1[] = "hiss";
  char search2[] = "mist";
  char *p = strstr( s1, search);
  char *p1 = strstr( s1, search1);
  char *p2 = strstr( s1, search2);
  printf("p points to the string %s \n", p); //points to String "is is hiss"
  printf("p1 points to the string %s \n", p1); //"hiss"
  printf("p2 points to the string %s \n", p2);//"null"
  
}
