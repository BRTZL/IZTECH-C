# IZTECH-C
IZTECH c programming lab answers

İzmir yüksek teknoloji enstitüsü Elektronik ve Haberleşme mühendisliği 2019-2020 soru çözümleri.


# **How To Run C Code In Your Computers**

## Step 1. Open terminal.

## Step 2. Type command to install gcc or g++ complier:

```
$ sudo apt-get install build-essential
```

This will install the necessary C/C++ development libraries.

To check gcc version type this command:

```
$ gcc –version or gcc –v
```
## Step 3. Now go to that folder where you will create C programs. I am creating my programs in Documents/Github directory. Type these commands:

```
$ cd Documents/Github
```

```
$ git clone https://github.com/BRTZL/IZTECH-C
```

```
$ cd IZTECH-C/
```

## Step 4. Compile the program using any of the following command:

```
$ sudo gcc main.c
```

It will create an executable file with “.out” extension named as “a.out”.

Or

```
$ sudo gcc –o main main.c
```

Where first is the executable or object file of first.c program.

> *[Note: Make sure you are in the same directory where you have created your program before compiling it.]*

## Step 5. To run this program type this command:


```
$ ./main.out (If you compiled using first command)
```

Or

```
$ ./main (If you compiled using second command)
```

It will show output on the terminal.

**Try this. All the best!!!**