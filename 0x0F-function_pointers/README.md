# function pointers in C

- Declaration is return type (*fxnpointername)(parameter types...)
- The * is necessary because we are declaring a pointer. The () around the name are necessary otherwise you declare a fxn returning a pointer.
- It takes a fxn name as value or &fxn name
- really cool
- function pointers point to the code itself and also the memory address of the code being pointed to.
- sample usage would be like below:


    ```
        int sum(int a, int b)
        {
            return a + b;
        }

        // fxn pointer to sum
        int (*sum_ptr)(int, int) = sum 'or' &sum;

        //usage:
        sum_ptr(10, 15); or (*sum_ptr)(10, 15)

        // this works fine
    ```

    - declaring an array of function pointers:
    ```
        return type (*fxpointerArray[])(parameter types) = {list of functions}
        int (*fxn_arr[])(int, int) = {sum, sub, mult, div} // where sum, sub... are actual functions. 
    ```


