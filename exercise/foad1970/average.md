section .data
    sum db 0          ; Initialize sum to 0
    count db 100      ; Number of values (1 to 100)
    average db 0      ; Store the calculated average

section .text
    global _start

_start:
    ; Loop to calculate the sum of numbers from 1 to 100
    mov ecx, 1         ; Initialize loop counter
    mov ebx, 100       ; End value (100)
    mov eax, 0         ; Clear EAX for sum

calculate_sum:
    add eax, ecx       ; Add current value (ECX) to sum (EAX)
    inc ecx            ; Increment loop counter
    cmp ecx, ebx       ; Compare loop counter with end value
    jle calculate_sum  ; Jump if less than or equal

    ; Calculate the average
    mov edx, 0         ; Clear EDX for division
    mov eax, count     ; Move the count to EAX for division
    div byte [ebx]     ; Divide sum (EDX:EAX) by count (AL)

    mov [average], al  ; Store the calculated average

    ; Exit the program
    mov eax, 1         ; Exit syscall number
    int 0x80           ; Invoke syscall

section .bss
    resb 1             ; Reserve space for average

