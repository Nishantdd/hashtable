# Hash table in C

[Hash tables](https://en.wikipedia.org/wiki/Hash_table) are one of the most useful data structures. Their quick and scalable insert, search and delete make them relevant to a large number of computer science problems.

Collisions are handled using [double hashing](https://en.wikipedia.org/wiki/Double_hashing) which is an open-addressing technique to resolve hash collisions without any need for external chaining.

Resizing technique is implemented so that the hashtable automatically allocates and de-allocates memory based on the load. If the load exceeds 70%, the capacity is doubled and if the load falls below 10%, the capacity is halved.

## How to use?
### 1. Clone the repository
```bash
git clone https://github.com/Nishantdd/hashtable.git
cd hashtable
```

### 2. Install 'make' on your environment
- Windows:
`choco install make`
- MacOS:
`brew install make`
- Linux:
Most probably already installed. If not, install through your package manager.

### 3. Compile and Run
> [!NOTE]  
> Make sure that gcc (GNU Compiler Collection) is installed.
> 
> If you wish to use any other compiler (clang or cl), please update the CC variable in Makefile accordingly

```bash
make # For building
make run # For executing the binary
```
For cleaning the build output
```bash
make clean
```