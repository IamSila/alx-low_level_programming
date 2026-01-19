function pointers in C

- Declaration is return type (*fxnpointername)(parameter types...)
- It takes a fxn name as value or &fxn name
- really cool
- sample usage would be like below:


    ```
int sum(int a, int b)
{
 return a + b;
}

// fxn pointer to sum
int (*sum_ptr)(int, int) = sum 'or' &sum;

//usage:
sum_ptr(10, 15);

// this works fine


```
