# Hello World
## Hello World
### Hello World
#### Hello World

My name is **Lochan A/L Ajinthas** 😄. I'm at *UKM*.
|Column 1 | Column 2 | Column 3|
| --- | --- | --- |
|1| Slaid Pembentangan | ABC|

[FTSM](https://ftsm.ukm.my/v6/)

---
config:
  layout: elk
---
flowchart TD
    Start([Computer Science]) --> Theory[Theoretical CS]
    Start --> Applied[Applied CS]
    Start --> Systems[Systems]
    
    Theory --> Algorithms[Algorithms & Complexity]
    Theory --> Automata[Automata Theory]
    Theory --> Logic[Mathematical Logic]
    
    Applied --> AI[Artificial Intelligence]
    Applied --> WebDev[Web Development]
    Applied --> Mobile[Mobile Development]
    
    Systems --> OS[Operating Systems]
    Systems --> Networks[Computer Networks]
    Systems --> Database[Databases]
    
    Algorithms --> Jobs1[Software Engineer]
    AI --> Jobs2[ML Engineer]
    OS --> Jobs3[Systems Engineer]
    WebDev --> Jobs4[Full Stack Developer]
    Networks --> Jobs5[Network Engineer]
    Database --> Jobs6[Data Engineer]
    
    Jobs1 --> End([Career in Tech])
    Jobs2 --> End
    Jobs3 --> End
    Jobs4 --> End
    Jobs5 --> End
    Jobs6 --> End
    
    classDef theory stroke:#818cf8,fill:#eef2ff
    classDef applied stroke:#2dd4bf,fill:#f0fdfa
    classDef systems stroke:#a78bfa,fill:#f5f3ff
    classDef jobs stroke:#fb923c,fill:#fff7ed
    classDef start stroke:#4ade80,fill:#f0fdf4
    
    class Theory theory
    class Algorithms,Automata,Logic theory
    class Applied applied
    class AI,WebDev,Mobile applied
    class Systems systems
    class OS,Networks,Database systems
    class Jobs1,Jobs2,Jobs3,Jobs4,Jobs5,Jobs6 jobs
    class Start,End start
