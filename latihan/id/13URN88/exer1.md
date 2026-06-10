# helloworld

My name is **13URN88**👋.I am at *UKM*

|Column1 |Column2 |Column3 | 
|---|---|---|
|1 | Commit Changes|aaa|

[FTSM](https://ftsm.ukm.my/v6/)

---
config:
  layout: elk
---
flowchart TD
    A[Mula] --> B{Data Lengkap?}
    B -->|Ya| C[Proses Data]
    B -->|Tidak| D[Papar Ralat]
    C --> E[Simpan Rekod]
    E --> F[Tamat]
    D --> F
    
    classDef startEnd stroke #4ade80, fill #f0fdf4
    classDef process stroke #38bdf8, fill #f0f9ff
    classDef decision stroke #facc15, fill #fefce8
    classDef error stroke #f87171, fill #fef2f2
    
    class A,F startEnd
    class C,E process
    class B decision
    class D error
