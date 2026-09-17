###Execution Flow of C program

```text
      C Program
        (hello.c)
           │
           ▼
    ┌──────────────┐
    │ Preprocessor │ ← Header files
    └──────────────┘
           │
           ▼
   Preprocessed Source
        (hello.i)
           │
           ▼
      ┌─────────┐
      │ Compiler│
      └─────────┘
           │
           ▼
      Assembly Code
        (hello.s)
           │
           ▼
     ┌───────────┐
     │ Assembler │
     └───────────┘
           │
           ▼
       Object File
       (hello.obj)
           │
           ▼
      ┌────────┐
      │ Linker │ ← Libraries / other object files
      └────────┘
           │
           ▼
     Executable File
      (hello.exe)
           │
           ▼
      ┌────────┐
      │ Loader │ ← Operating system
      └────────┘
           │
           ▼
    Program in Memory
           │
           ▼
       Execution
           │
           ▼
         main()
