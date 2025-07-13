Nested Looping concepts : 
outer loop is for number of tasks.
inner loop is for number of actual execution.

steps : 
IMP NOTE : understand task first and execution.

step1 : First write actual execution logic which will generate desired outcome.
step2 : Then paste inside outer loop. 

EXAMPLE :
step 1 : actual logic which will generate output
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
step 2 : now , paste above code in a outer loop to perform n number of times 
      for (int step = 1; step <= k; step++)
      {}
step 3 : final copy-paste
    for (int step = 1; step <= k; step++)
    {
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
conclusion : this is how's nested loop works.
Hint : (IN MARATHI)
Jevha ekch kaam >= 2 times karaycha asen tevha Nested loops use kara.

______________________________________________________ THANK YOU _________________________________________________________________________
