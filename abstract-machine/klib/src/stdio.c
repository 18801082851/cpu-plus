#include <am.h>
#include <klib.h>
#include <klib-macros.h>
#include <stdarg.h>
#include <string.h>

// #if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
// void itoa(unsigned int n, char * buf);
// void itox(unsigned int n, char * buf);


// int printf(const char *fmt, ...) {
//     const char*fmtbegin=fmt;
    
//     char *s;
//     char *c;
//     int num;
//     char buf[1976];
//     char buf2[1976];
//     char *out=buf2;
//     memset(out, 0, strlen(out));
//     memset(buf, 0, sizeof(buf));
//     int space;
//     va_list ap;
//     va_start(ap, fmt);
//     while(*fmt != '\0'){    
//       if(*fmt == '%'){
//         fmt++;
//         switch(*fmt){
//           case 'd':{
//             num = va_arg(ap, int);
//             if(num < 0){
//               *out = '-';
//               out++;
//               num=-num;              
//             }
//             itoa(num, buf);
//             memcpy(out, buf, strlen(buf));
//             out += strlen(buf);
//             break;
//           }
//           case 's':{
//             s = va_arg(ap, char *);
//             memcpy(out, s, strlen(s));
//             out += strlen(s);
//             break;
//           }
//           case 'c':{
//             c = va_arg(ap, char* );
//             *out = *c;
//             out += 1;
//             break;
//           }
//           case '0':{
//             if(*(fmt+2)=='d'){
//               num = va_arg(ap, int);
//               if(num < 0){
//               *out = '-';
//               out++;
//               num=-num;              
//               }
//               char temp=*(fmt+1);
//               space=temp-'0';
//               itoa(num, buf);
//               if(strlen(buf)<space){memcpy(out, "0000000000000", (space-strlen(buf)));out += (space-strlen(buf));}//%2d
//               memcpy(out, buf, strlen(buf));
//               out += strlen(buf);
//               fmt++;fmt++;
//               break;
//             }
//             else if(*(fmt+2)=='x'){
//               num = va_arg(ap, int);
//               if(num < 0){
//               *out = '-';
//               out++;
//               num=-num;              
//               }
//               char temp=*(fmt+1);
//               space=temp-'0';
//               itox(num, buf);
//               if(strlen(buf)<space){memcpy(out, "000000000000000", (space-strlen(buf)));out += (space-strlen(buf));}
//               memcpy(out, buf, strlen(buf));
//               out += strlen(buf);
//               fmt++;fmt++;
//               break;
//             }
//           }
//           case '3':{
//             if(*(fmt+1)=='d'){
//               num = va_arg(ap, int);
//               if(num < 0){
//               *out = '-';
//               out++;
//               num=-num;              
//               }
//               itoa(num, buf);
//               if(strlen(buf)<3){memcpy(out, "                ", (2-strlen(buf)));out += (2-strlen(buf));}
//               memcpy(out, buf, strlen(buf));
//               out += strlen(buf);
//               fmt++;
//               break;
//             }
           
//           }
//           default:{
//             for (const char *p = fmtbegin; *p; p++) { putch(*p);}
//            // panic("This printf Not implemented");
//             break;
//           }
//         }
//       }
//       else {
//           *out = *fmt;
//            out++;
//         }
//       fmt++;
//     }
//   va_end(ap);
//   out=buf2;
//   for (const char *p = out; *p; p++) {
//     putch(*p);
//   }
 
//   return 0;
// }






//  int printf_count;
// // void printNum(unsigned long num, int base);
// // void printDeci(int dec);	
// // void printHex(unsigned int dec);
// // void printDeci_long(long int dec_long);			
// // void printStr(char *str);	
// // int printf(const char *fmt, ...) {
// //   	int i = 0;
// // 	printf_count = 0;
// //     va_list va_ptr;
// //     va_start(va_ptr, fmt);
// //     while (fmt[i] != '\0')
// //     {
// // 		if (fmt[i-1] == '\\'||fmt[i] != '%')
// // 		{
// //     	    putch(fmt[i++]);
// // 			printf_count ++;
// // 			continue;
// // 		}
// // 		switch (fmt[++i]) 
// // 		{
// // 			case 'd': printDeci(va_arg(va_ptr,int));           
// // 			  		  break; 
// // 			case 'x': printHex(va_arg(va_ptr,unsigned int));           
// // 			  		  break;
// // 			case 'p': printHex(va_arg(va_ptr,unsigned int));           
// // 			  		  break;  
// // 			case 'l': printDeci_long(va_arg(va_ptr,int));     //mean ld      
// // 			  		  break; 
// // 		  case 'c': putch(va_arg(va_ptr,int));            
// // 			  		  break;
// // 		  case 's': {printStr(va_arg(va_ptr,char *));
// //               break;}
// //       // case '0':{ 
// //       //           if(fmt[i+2]=='d'){
// //       //             int num = va_arg(va_ptr, int);
// //       //             char buf[2000];
// //       //            // char temp=fmt[i+1];
// //       //             //int space=temp-'0';
// //       //             itoa(num, buf);
// //       //            // if(strlen(buf)<space){for(int i = 0; i<(space-strlen(buf));i++){putch(temp);putch('4');}}//%2d
// //       //             for (const char *p = buf; *p; p++) {putch(*p); }
// //       //             i=i+2;
// //       //           }
// //       //           else if(fmt[i+2]=='x'){
// //       //             int num = va_arg(va_ptr, int);
// //       //             char buf[2000];
// //       //         //    char temp=fmt[i+1];
// //       //            // int space=temp-'0';
// //       //             itox(num, buf);
// //       //             //if(strlen(buf)<space){for(int i = 0; i<(space-strlen(buf));i++){putch('0');}}//%2d
// //       //             for (const char *p = buf; *p; p++) {putch(*p); }
// //       //             i=i+2;
// //       //           }
// //       //           break;  
// //       //           }
// //       // case '3':{ 
// //       //           if(fmt[i+1]=='d'){
// //       //             int num = va_arg(va_ptr, int);
// //       //             char buf[10];
// //       //         //    char temp=fmt[i];
// //       //         //    int space=temp-'0';
// //       //             itoa(num, buf);
// //       //             //if(strlen(buf)<space){for(int i = 0; i<(space-strlen(buf));i++){putch(' ');}}//%2d
// //       //             for (const char *p = buf; *p; p++) {putch(*p); }
// //       //             i=i+1;
// //       //           }
                
// //       //         }        
// // 			// 		  break;
// // 			 default : {//panic("This printf Not implemented");
// //       break;}
// // 		}

// // 		i++; 
// //     }
// //     va_end(va_ptr);
// // 	return printf_count;				//return the long of string
// // }

// void printNum(unsigned long num, int base)
// {
// 	if (num == 0)
//     {
//         return;
//     }
// 	printNum(num/base, base);
//     putch("0123456789abcdef"[num%base]);
// 	printf_count ++;
// }
// void printDeci(int dec)
// {
// 	if (dec < 0)
//     {
//         putch('-');
// 		dec = -dec;  	 
//     }
//     if (dec == 0)
//     {
//         putch('0');
// 		return;
//     }
//     else
//     {
//         printNum(dec, 10); 
//     }
// }

// void printHex(unsigned int dec)
// {
// 	if (dec < 0)
//     {
//         putch('-');
// 		dec = -dec;  	 
//     }
//     if (dec == 0)
//     {
//         putch('0');
// 		return;
//     }
//     else
//     {
//         printNum(dec, 16); 
//     }
// }

// void printDeci_long(long int dec_long)
// {
// 	if (dec_long < 0)
//     {
//         putch('-');
// 		dec_long = -dec_long;  	 
//     }
//     if (dec_long == 0)
//     {
//         putch('0');
// 		return;
//     }
//     else
//     {
//         printNum(dec_long, 10); 
//     }
// }

// void printStr(char *str)
// {
//     int i = 0;

//     while (str[i] != '\0')
//     {
//         putch(str[i++]);
// 		printf_count ++;
//     }
// }



// int vsprintf(char *out, const char *fmt, va_list ap) {
//   int a=1;
//   return a;
//    //panic("Not implemented");
// }




// void itoa(unsigned int n, char * buf)
// {
//         int i;  
//         if(n < 10){
//             buf[0] = n + '0';
//             buf[1] = '\0';
//             return;
//         }
//         itoa(n / 10, buf);
//         for(i=0; buf[i]!='\0'; i++);
//         buf[i] = (n % 10) + '0';
//         buf[i+1] = '\0';
// }
// void itox(unsigned int n, char * buf)
// {
//         int i;  
//         if(n < 16){
//             buf[0] ="0123456789abcdef"[n];
//             buf[1] = '\0';
//             return;
//         }
        
//         itox(n / 16, buf);
//         for(i=0; buf[i]!='\0'; i++);
//         buf[i] = "0123456789abcdef"[n%16];
//         buf[i+1] = '\0';
// }
// int sprintf(char *out, const char *fmt, ...) {
//   //panic("Not implemented");

//     //int count = 0;
//     //char c;
//     char *s;
//     int num;
//     //int index = 0;
//     //int ret = 2;
//     char buf[65];
//     //char digit[16];
//     //int num = 0;
//     //int len = 0;
//     memset(out, 0, strlen(out));
//     memset(buf, 0, sizeof(buf));
//     //memset(digit, 0, sizeof(digit));
//     va_list ap;
    
//     va_start(ap, fmt);
//     while(*fmt != '\0'){    
//       if(*fmt == '%'){
//         //panic("Not implemented");
//         fmt++;
//         switch(*fmt){
//           case 'd':{
//             //panic("Not implemented");        
//             num = va_arg(ap, int);
//             if(num < 0){
//               *out = '-';
//               out++;
//               num=-num;              
//             }
//             itoa(num, buf);
//             memcpy(out, buf, strlen(buf));
//             out += strlen(buf);
//             break;
//           }
//           case 's':{
//             //panic("Not implemented");
//             s = va_arg(ap, char *);
//             memcpy(out, s, strlen(s));
//             out += strlen(s);
//             break;
//           }
//           default:{
//             //panic("Not implemented");
//             break;
//           }
//         }
//       }
//       else {
//           *out = *fmt;
//           out++;
//           if(*fmt == '\n'){}
//         }
//       fmt++;

//     }
//   va_end(ap);
//   return 0;
// }


// int snprintf(char *out, size_t n, const char *fmt, ...) {
//   int a=1;
//   //panic("Not implemented");
//   return a;
// }

// int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
//   int a=1;
//   //panic("Not implemented");
//   return a;
// }
/************************************************************************************/
#define ZEROPAD	1		/* pad with zero 填补0*/
#define SIGN	2		/* unsigned/signed long */
#define PLUS	4		/* show plus 显示+*/
#define SPACE	8		/* space if plus 加上空格*/
#define LEFT	16		/* left justified 左对齐*/
#define SPECIAL	32		/* 0x /0*/
#define LARGE	64		/* 用 'ABCDEF'/'abcdef' */
#if !defined(__ISA_NATIVE__) || defined(__NATIVE_USE_KLIB__)
//设置输出缓冲区，为512字节大小
static char sprint_buf[512];

//进制之间的相应转换
uint32_t __attribute__((weak)) __div64_32(uint64_t *n, uint32_t base);
#define do_div(n,base) ({			\
	unsigned int __base = (base);   \
	unsigned int __rem;				\
	(void)(((typeof((n)) *)0) == ((unsigned long long*)0));	\
	if (((n) >> 32) == 0) {							\
		__rem = (unsigned int)(n) % __base;			\
		(n) = (unsigned int)(n) / __base;			\
	} else											\
		__rem = __div64_32((uint64_t *)&(n), __base);			\
	__rem;											\
})

static int skip_atoi(const char **s);
size_t strnlen(const char * s, size_t count);

static char * number(char * str, unsigned long long num, int base, int size, int precision, int type);

int printf(const char *fmt, ...) {
  va_list args;
  int val=0;
	va_start(args, fmt);
	va_end(args);//清理参数
	val = vsprintf(sprint_buf, fmt, args);
	if(val){
		putstr(sprint_buf);
	}
  return 0;
} 

//*fmt:%[flags][width][.precision][length]specifier
int vsprintf(char *buf, const char *fmt, va_list args) {
  int len;
  unsigned long long num;
  int i,base;
  char *str;
  const char*s;
  int flags = 0;
  int field_width;
  int precision;		
  int qualifier;	
  for (str=buf ; *fmt; ++fmt)
  {
    if (*fmt != '%') 
    {    //found %
      *str++ = *fmt;
      continue;
		}
      /* process flags */
    flags = 0;
    repeat:
    ++fmt;				    //跳过第一个 '%'
    switch (*fmt) 		//判断%后面的字符，对格式运算符的标志的处理
    {		
      case '-': flags |= LEFT; goto repeat;   //flags=10000(2bits)
      case '+': flags |= PLUS; goto repeat;   //flags=100
      case ' ': flags |= SPACE; goto repeat;  //flags=1000
      case '#': flags |= SPECIAL; goto repeat;//flags=10 0000
      case '0': flags |= ZEROPAD; goto repeat;//flags=1
    }
    field_width = -1;
    if('0'<= *fmt && *fmt <= '9'){
      field_width = skip_atoi(&fmt);
    }
    else if (*fmt == '*')
    {
      ++fmt;
      field_width = va_arg(args,int);
      if (field_width < 0) //left align
      {	
		field_width = -field_width;
		flags |= LEFT;
	  }
    }
	// 获取精度 
	precision = -1;
	if (*fmt == '.') {
		++fmt;	
		if ('0' <= *fmt && *fmt <= '9')
		  precision = skip_atoi(&fmt);//获得精度
		else if (*fmt == '*') //可变精度，printf("%.*f",2,3.1415);-->3.14
    	{
				++fmt;
				/* 获取表示精度的参数(以整数类型获取) */
				precision = va_arg(args, int);
		}
		if (precision < 0)//精度不能小于0
			precision = 0;
	}
		//获取转换修饰符,即%hd、%ld、%lld、%Lf...中的h、l、L、Z (ll用q代替)
	qualifier = -1;
	if (*fmt == 'l' && *(fmt + 1) == 'l') {
		qualifier = 'q';//即ll
		fmt += 2;
	} 
  else if (*fmt == 'h' || *fmt == 'l' || *fmt == 'L'|| *fmt == 'Z') {
		qualifier = *fmt;
		++fmt;
	}

  base = 10;//默认十进制
		//对c、s、p、n、%、o等做处理
	switch (*fmt) {
		//转换格式符为%c
		case 'c'://如果没有有‘-’，先输出字宽-1个空格再输出字符
			if (!(flags & LEFT))//如果没有'-'标记符
				while (--field_width > 0)
					*str++ = ' ';//根据字段输出空格' '
            /*获取字符参数时是先以int类型获取再强转为unsigned char，
                为了获取过程中保证精度不丢失。*/
			*str++ = (unsigned char) va_arg(args, int);
	        // 如果有'-'，先输出字符再填补空格,注意是先--的，所以实际空格会比输入的字段少1，在加					上参数就刚好够宽度；比如printf("%5d",2);输出：空格空格空格空格2。
			while (--field_width > 0)
				*str++ = ' ';
			continue;
	
		//转换格式符为%s           
		case 's':
			s = va_arg(args, char *);//char*格式获取参数
			if (!s)                  //如果字符串不存在，则返回(NULL)
				s = "<NULL>";
                
	        /*如果字符串中字符个数大于精度，len为精度；
	        否则len为字符个数,即精度表示了字符串输出字符的个数*/
			len = strnlen(s, precision);
	         //处理'-',即printf("%-s","hello");
			if (!(flags & LEFT))
				while (len < field_width--)
					*str++ = ' ';
			for (i = 0; i < len; ++i)
				*str++ = *s++;
			while (len < field_width--)
				*str++ = ' ';
			continue;
	
	    //处理格式符%p       
		case 'p':
			if (field_width == -1) //如果没有设置字段宽度
      { 
        /*字宽为8或16(根据系统而定)，因为2个位表示一个直接；
        例如32位系统指针大小位4字节，oxFF FF FF FF,需要8个字宽才能存储*/
				field_width = 2*sizeof(void *);
				flags |= ZEROPAD;   //flags = 1;会在前面补0
			}
	    //转为16进制并存进缓冲区中
			str = number(str,(unsigned long) va_arg(args, void *), 16,field_width, precision, flags);
			continue;
		//buf为1024字节空间的输出缓冲区（静态char数组）
		case 'n':
			if (qualifier == 'l') {
				long * ip = va_arg(args, long *);
				*ip = (str - buf);//获取输出缓冲数组中的个数
			} else if (qualifier == 'Z') {
				size_t * ip = va_arg(args, size_t *);
				*ip = (str - buf);
			} else {
				int * ip = va_arg(args, int *);
				*ip = (str - buf);
			}
			continue;
	
		case '%':
			*str++ = '%';
			continue;
		/* integer number formats - set up the flags and "break" */
		case 'o':
			base = 8;
			break;
		case 'X':
			flags |= LARGE;//小写转大写
		case 'x':  //十六进制
			base = 16;
			break;
		case 'd':	//十进制
		case 'i':
			flags |= SIGN;
		case 'u':	//无符号
			break;
		default:
			*str++ = '%';
			if (*fmt)
				*str++ = *fmt;
			else
				--fmt;
			continue;
		}
  if (qualifier == 'l') 
  {
		num = va_arg(args, unsigned long);
		if (flags & SIGN)
		  num = (signed long) num;
	} 
  else if (qualifier == 'q') {
		num = va_arg(args, unsigned long long);
		if (flags & SIGN)
		  num = (signed long long) num;
  } 
  else if (qualifier == 'Z') {
		num = va_arg(args, size_t);
	} 
  else if (qualifier == 'h') {
    //输出短整型时是先以整数来获取参数，再转为短整型输出，保证获取过程中精度不丢失
		num = (unsigned short) va_arg(args, int);
		if (flags & SIGN)
			num = (signed short) num;
	} 
  else {
    //没有特殊标志的格式符，一律先以无符号整型获取，再转为有符号整型
		num = va_arg(args, unsigned int);
		if (flags & SIGN)
			num = (signed int) num;
	}
    //转换为对应的个数再存到缓冲区中
	  str = number(str, num, base, field_width, precision, flags);
	}
	*str = '\0';//最后以'\0'结束
	return str-buf;
}

int sprintf(char *out, const char *fmt, ...) {
  va_list args;
  int val;
	va_start(args, fmt);
	val=vsprintf(out,fmt,args);
	va_end(args);
	return val;
}

int snprintf(char *out, size_t n, const char *fmt, ...) {
  panic("Not implemented");
}

int vsnprintf(char *out, size_t n, const char *fmt, va_list ap) {
  panic("Not implemented");
}


static int skip_atoi(const char **s)//get
{
	int i, c;
	for (i = 0; '0' <= (c = **s) && c <= '9'; ++*s)
		i = i*10 + c - '0';
	return i;
}

//统计字符串中字符个数(不包括\0)，如果个数大于count，则返回count，否则返回字符个数
size_t strnlen(const char * s, size_t count)//size_t是unsigned long long的宏
{
	const char *sc;

	for (sc = s; count-- && *sc != '\0'; ++sc)
		/* nothing */;
	return sc - s;
}

//以特定的进制格式化输出字符
static char * number(char * str, unsigned long long num, int base, int size, int precision, int type)
{
	char c,sign,tmp[66];
	const char *digits="0123456789abcdefghijklmnopqrstuvwxyz";
	int i;

	if (type & LARGE)//输出大写字符，例如十六进制0XFF112233AA
		digits = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	if (type & LEFT)//如果有'-'，如果出现了左对齐，就取消前面补0
		type &= ~ZEROPAD;
	if (base < 2 || base > 36)
		return 0;
	c = (type & ZEROPAD) ? '0' : ' ';//如果标志符有0则补0，否则补空格；例如%02d
	sign = 0;//符号
	
	if (type & SIGN) //有符号与无符号的转换
    {
		if ((signed long long)num < 0) 
        {
			sign = '-';
			num = - (signed long long)num;//取正值
			size--;//字段宽度减1
		} else if (type & PLUS) //显示+
        {
			sign = '+';
			size--;
		} else if (type & SPACE)//填补空格
        {
			sign = ' ';
			size--;
		}
	}
	
    //处理十六进制字宽问题
	if (type & SPECIAL) //十六进制显示
    {
		if (base == 16)
			size -= 2;//0x
		else if (base == 8)
			size--;//0
	}
	
	i = 0;
	if (num == 0)//如果参数为0，则记录字符0
		tmp[i++]='0'; //tmp中的内容会放到缓冲区中
	else while (num != 0) //循环,num /= base
    {
		tmp[i++] = digits[do_div(num, base)];	//将进制转换,低地址先进tmp？
	}
    //地址长度大于精度，直接按地址长度输出，如果精度大于地址位数，先补空格
    //例如：printf("%18p\n",&a);-->空格空格00000000FAF27284
	if (i > precision)
		precision = i;
	size -= precision;
	if (!(type&(ZEROPAD+LEFT)))//没有'-'和补0,直接补空格
		while(size-->0)
			*str++ = ' ';
	if (sign)//如果有符号，输出符号，符号包括：'-','+','',0
		*str++ = sign;
    
	if (type & SPECIAL) //输出8进制或16进制符号0或0x
    {
		if (base==8)
			*str++ = '0';
		else if (base==16) 
        {
			*str++ = '0';
			*str++ = digits[33];//x或X
		}
	}
    
	if (!(type & LEFT))//没有-
		while (size-- > 0)
			*str++ = c;//c为0或空格
	while (i < precision--)//i为转换后存在tmp中字符的个数
		*str++ = '0';
	while (i-- > 0)
		*str++ = tmp[i];//tmp中存储着转换了的参数
	while (size-- > 0)
		*str++ = ' ';
	return str;
}

uint32_t __attribute__((weak)) __div64_32(uint64_t *n, uint32_t base)
{
	uint64_t rem = *n;
	uint64_t b = base;
	uint64_t res, d = 1;
	uint32_t high = rem >> 32;

	/* Reduce the thing a bit first */
	res = 0;
	if (high >= base) {
		high /= base;
		res = (uint64_t) high << 32;
		rem -= (uint64_t) (high*base) << 32;
	}

	while ((int64_t)b > 0 && b < rem) {
		b = b+b;
		d = d+d;
	}

	do {
		if (rem >= b) {
			rem -= b;
			res += d;
		}
		b >>= 1;
		d >>= 1;
	} while (d);

	*n = res;
	return rem;
}
#endif
