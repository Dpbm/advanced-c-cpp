# NOTES

- `mem_fn` is good for when you need something lightweight to point for a member and forward all parameters
- in comparison with `std::bind`, it will forward everything.
- used when you need to directly pass a function to be called (like as parameter for some specific task like reducing).
- it does pretty much the same thing as lambdas.
- lambda is theoretically cheaper than `mem_fn`.




## REFERENCES

- [https://stackoverflow.com/questions/30106561/what-is-the-difference-between-stdfunction-and-stdmem-fn](https://stackoverflow.com/questions/30106561/what-is-the-difference-between-stdfunction-and-stdmem-fn)
- [https://www.quora.com/What-problem-does-std-mem_fn-solve](https://www.quora.com/What-problem-does-std-mem_fn-solve)
- [https://www.reddit.com/r/cpp_questions/comments/16sowp1/is_mem_fn_and_bind_front_slower_than_lambda/](https://www.reddit.com/r/cpp_questions/comments/16sowp1/is_mem_fn_and_bind_front_slower_than_lambda/)
- [http://en.cppreference.com/w/cpp/utility/functional/mem_fn.html](http://en.cppreference.com/w/cpp/utility/functional/mem_fn.html)
- [http://en.cppreference.com/w/cpp/utility/functional/function.html](http://en.cppreference.com/w/cpp/utility/functional/function.html)
