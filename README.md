


# Modern CMake for C++

<a href="https://www.packtpub.com/product/modern-cmake-for-c/9781801070058"><img src="https://static.packt-cdn.com/products/9781801070058/cover/smaller" height="256px" align="right"></a>

This is the code repository for [Modern CMake for C++](https://www.packtpub.com/product/modern-cmake-for-c/9781801070058), published by Packt.

**Discover a better approach to building, testing, and packaging your software**

## What is this book about?
Creating top-notch software is an extremely difficult undertaking. Developers researching the subject have difficulty determining which advice is up-to-date and which approaches have already been replaced by easier, better practices. At the same time, most online resources offer limited explanation, while also lacking the proper context and structure.

This book covers the following exciting features:
* Understand best practices for building C++ code
* Gain practical knowledge of the CMake language by focusing on the most useful aspects
* Use cutting-edge tooling to guarantee code quality with the help of tests and static and dynamic analysis
* Discover how to manage, discover, download, and link dependencies with CMake
* Build solutions that can be reused and maintained in the long term
* Understand how to optimize build artifacts and the build process itself

If you feel this book is for you, get your [copy](https://www.amazon.com/Modern-CMake-Discover-approach-packaging/dp/1801070059) today!


## Instructions and Navigations
All of the code is organized into folders. For example, Chapter02.

The code will look like the following:
```
function(Inner)
  message("  > Inner: ${V}")
  set(V 3)
  message("  < Inner: ${V}")
endfunction()

```

**Following is what you need for this book:**
The book is for build engineers and software developers with knowledge of C/C++ programming who are looking to learn CMake to automate the process of building small and large software solutions. If you are someone who's just getting started with CMake, a long-time GNU Make user, or simply looking to brush up on the latest best practices, this book is for you.

With the following software and hardware list you can run all code files present in the book (Chapter 1-13).

### Software and Hardware List
| Chapter | Software/Hardware required | OS required |
| -------- | ------------------------------------ | ----------------------------------- |
| 1-13 | Cmake 3.20 | Windows, Mac OS X, and Linux |


We also provide a PDF file that has color images of the screenshots/diagrams used in this book. [Click here to download it](https://static.packt-cdn.com/downloads/9781801070058_ColorImages.pdf).

## Errata
* Page 46 (Paragraph 1, line 1): **Multiline comments get their name from their symbol – they start with an opening square bracket ([) ...** _should be_ **Multiline comments get their name from their symbol – they start with an # and an opening square bracket (#[) ...**

* Page 75 (line 10): `main()` _should be_ `endmacro()`
* Page 107 (Paragraph 2, line 14 and 15): **Calling test_run() isn't very complicated at all. We start by setting the required standard, after which we call test_run() and print the collected information to the user:** _should be_ **Calling try_run() isn't very complicated at all. We start by setting the required
standard, after which we call try_run() and print the collected information to the
user:**
* Page 137 (Paragraph 1, line 1): **generation expression** _should be_ **generator expression**

* Page 168 (Paragraph 5, line 19): **• -finline-functions-called-once: GCC only
• -finline-functions: Clang and GCC
• -finline-hint-functions: Clang only
• -finline-functions-called-once: GCC only** _should be_ **• -finline-functions-called-once: GCC only
• -finline-functions: Clang and GCC
• -finline-hint-functions: Clang only**

* Page 195 (line 12): **chapter06/02-odr-fail/two.cpp** _should be_ **chapter06/02-odr-fail/CMakeLists.txt**
  
* Page 198 (third code block): **add_library(<name> SHARED [<source>...])** _should be_ **add_library(<name> [<source>...])**

* Page 208 (line 13): **• Discovering legacy packages with FindPkgConfig0** _should be_ **• Discovering legacy packages with FindPkgConfig**

* Page 213 (line 11): **<PKG_NAME>_LIBRARIES or <PKG_NAME>_LIBRARIES or <PKG_NAME>_LIBS** _should be_ **<PKG_NAME>_LIBRARIES or <PKG_NAME>_LIBS**

* Page 222 (line 9): **# deliberately used in mind-module against the documentation** _should be_ **# deliberately used in find-module against the documentation**

* Page 222 (Paragraph 2,line 16): **If a matching file is found, its path will be stored in the PQXX_LIBRARY_PATH variable. Otherwise, the variable will be set to <VAR>-NOTFOUND, or PQXX_HEADER_PATH-NOTFOUND in this case.** _should be_ **If a matching file is found, its path will be stored in the PQXX_LIBRARY_PATH variable. Otherwise, the variable will be set to <VAR>-NOTFOUND, or PQXX_LIBRARY_PATH-NOTFOUND in this case.**

* Page 231 (line 7): **Downloading the step options** _should be_ **The downloading step options**

* Page 265 (Paragraph 1,line 3): **shave** _should be_ **save**

* Page 265 (Paragraph 2,line 14): **allow** _should be_ **disallow**

* Page 354 (Paragraph 3,line 31): **install(FILES)** _should be_ **configure_package_config_file**

* Page 362 (Paragraph 1,line 3): **...but there are also are procedural steps...** _should be_ **...but there are also procedural steps...**

* Page 384 (line 28): **calc_command** _should be_ **calc_console**

* Page 395 (Paragraph 1,line 5): **CPack** _should be_ **CTest**




### Related products
* CMake Cookbook [[Packt]](https://www.packtpub.com/product/cmake-cookbook/9781788470711) [[Amazon]](https://www.amazon.com/CMake-Cookbook-Building-packaging-software/dp/1788470710)

* The Art of Writing Efficient Programs [[Packt]](https://www.packtpub.com/product/the-art-of-writing-efficient-programs/9781800208117) [[Amazon]](https://www.amazon.com/Art-Writing-Efficient-Programs-optimizations/dp/1800208111)


## Get to Know the Author

**Rafał Świdziński** 
works as a staff engineer at Google. With over 10 years of professional experience as a full stack developer, he has been able to experiment with a vast multitude of programming languages and technologies. During this time, he has been building software under his own company and for corporations including Cisco Meraki, Amazon, and Ericsson.
Originally from Łódź, Poland, he now lives in London, UK, from where he runs a YouTube channel, “Smok,” discussing topics of software development. He tackles technical problems, including real-life and work-related challenges encountered by many people in the field. Throughout his work, he explains the technical concepts in detail and demystifies the art of being a software engineer. His primary focus is on high-quality code and the craftsmanship of programming.
### Download a free PDF

 <i>If you have already purchased a print or Kindle version of this book, you can get a DRM-free PDF version at no cost.<br>Simply click on the link to claim your free PDF.</i>
<p align="center"> <a href="https://packt.link/free-ebook/9781801070058">https://packt.link/free-ebook/9781801070058 </a> </p>
