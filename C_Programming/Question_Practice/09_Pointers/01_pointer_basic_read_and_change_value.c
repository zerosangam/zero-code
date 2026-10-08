#include <stdio.h>

int main()
{
    int a = 10;
    int* address = &a; // a का एड्रेस address नाम के पॉइंटर में सेव कर लिया
    
    printf("Original value of a: %d\n", *address); // पॉइंटर से a की वैल्यू प्रिंट की (10)
    
    *address = 50; // पॉइंटर का इस्तेमाल करके a की वैल्यू बदल दी (जादू!)
    
    printf("New value of a: %d\n", a); // अब a को डायरेक्ट प्रिंट करके देख, वो 50 हो चुका होगा!
    
    return 0;
}