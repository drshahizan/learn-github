# Hello World
## Hello World
### Hello World
#### Hello World

My name is **Aqilah** 🥰. I'm at *UKM*. 

|Column 1|Column 2|Column 3|
|---|---|---|
|1|Slaid Pembentangan|Abc

[FTSM](https://ftsm.ukm.my/v6/)

## Diagram Aliran Sistem Pendaftaran Pelajar

```mermaid
flowchart TD
    A[Mula] --> B[Masukkan Maklumat Pelajar]
    B --> C{Maklumat Lengkap?}
    C -->|Tidak| D[Papar Ralat]
    D --> B
    C -->|Ya| E[Simpan Rekod]
    E --> F[Jana Nombor Matrik]
    F --> G[Papar Pengesahan]
    G --> H[Tamat]
```

## Diagram ERD Ringkas

```mermaid
erDiagram
    STUDENT ||--o{ COURSE_REGISTRATION : registers
    COURSE ||--o{ COURSE_REGISTRATION : contains

    STUDENT {
        int student_id
        string name
        string email
    }

    COURSE {
        int course_id
        string course_name
        int credit_hour
    }

    COURSE_REGISTRATION {
        int registration_id
        int student_id
        int course_id
    }
```


