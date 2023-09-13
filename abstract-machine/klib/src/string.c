#include <klib.h>
#include <klib-macros.h>
#include <stdint.h>

#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)

size_t strlen(const char *s) {
  
  unsigned long i=0;
  while( *s !='\0'  )
    {
    
        s++;
        i++;
    }
    
    return i;
}

char *strcpy(char *dst, const char *src) {
  char *ret = dst;
  
  while( *src !='\0' )
    {
        *dst=*src;
        src++;
        dst++;
    }
    *dst='\0';
    return ret;

}

char *strncpy(char *dst, const char *src, size_t n) {
 
  char *ret = dst;
  char i=0;
  while( *src !='\0'&& i<n )
    {
        *dst=*src;
        src++;
        dst++;
        i++;
    }
    
    return ret;

}

char *strcat(char *dst, const char *src) {
  char *ret = dst;
    while( *dst !='\0' )
    {
        dst++;
    }
    while( *src !='\0' )
    {
        *dst=*src;
        src++;
        dst++;
    }
    
    return ret;
}

int strcmp(const char *s1, const char *s2) {
  //assert(0);
  int ret = 0;
    while( !(ret = *s1 - *s2) && *s1 )
    {
        s1 ++;
        s2 ++;
        if(*s2=='\0' && *s1=='\0'){ ret=0   ;break;}
        if(*s2!='\0' && *s1=='\0'){ ret=-1  ;break;}
        if(*s2=='\0' && *s1!='\0'){ ret=1   ;break;}
    }
    if( ret < 0) ret = -1;
    else if(ret > 0) ret = 1;
    else ret=0;
    return ret;


}

int strncmp(const char *s1, const char *s2, size_t n) {
  int ret = 0;
  int i=0;
    while( !(ret =*(const char*)s1 - *(const char*)s2) && *(const char*)s1 && (i<n))
    {
        s1 ++;
        s2 ++;
        if(*(const char*)s2=='\0' && *(const char*)s1=='\0'){ ret=0   ;break;}
        if(*(const char*)s2!='\0' && *(const char*)s1=='\0'){ ret=-1  ;break;}
        if(*(const char*)s2=='\0' && *(const char*)s1!='\0'){ ret=1   ;break;}
        i++;
    }
    if( ret < 0) ret = -1;
    else if(ret > 0) ret = 1;
    else ret=0;
    return ret;
}

void *memset(void *s, int c, size_t n) {
  int i=0;
  if (NULL == s || n < 0){
    return NULL;
  }
		
	char * tmpS = (char *)s;
	while(i< n){
    *tmpS++ = c;
    i++;}
		
	return s;
}

void *memmove(void *dst, const void *src, size_t n) {
  panic("Not implemented");
}

void *memcpy(void *out, const void *in, size_t n) {
  if (NULL == out || NULL == in || n < 0)
		return NULL;
	char *tempDest = (char *)out;
	char *tempSrc = (char *)in;
 
	while (n-- > 0)
		*tempDest++ = *tempSrc++;
	return out;	


}

int memcmp(const void *s1, const void *s2, size_t n) {
  const unsigned char *su1, *su2;
    int res = 0;
    for (su1 = s1, su2 = s2; 0 < n; ++su1, ++su2, n--)
        if ((res = *su1 - *su2) != 0)
            break;
    if( res < 0) res = -1;
    else if(res > 0) res = 1;
    else res=0;
    return res;
  
}

#endif
