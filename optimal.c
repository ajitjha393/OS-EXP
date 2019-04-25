  
#include<stdio.h>

int main()
{
    int nF, n, frames[10], pages[30], ar[10], F1, F2, F3, i, j, k, pos, maximum, fault_count = 0;
    printf("Enter number of frames: ");
    scanf("%d", &nF);

    printf("Enter number of pages: ");
    scanf("%d", &n);

    printf("Enter page nos: ");

    for(i = 0; i < n; ++i){
        scanf("%d", &pages[i]);
    }

    for(i = 0; i < nF; ++i){
        frames[i] = -1;
    }

    for(i = 0; i < n; ++i){
        F1 = F2 = 0;

        for(j = 0; j < nF; ++j){
            if(frames[j] == pages[i]){
                   F1 = F2 = 1;
                   break;
               }
        }

        if(F1 == 0){
            for(j = 0; j < nF; ++j){
                if(frames[j] == -1){
                    fault_count++;
                    frames[j] = pages[i];
                    F2 = 1;
                    break;
                }
            }
        }

        if(F2 == 0){
            F3 =0;

            for(j = 0; j < nF; ++j){
                ar[j] = -1;

                for(k = i + 1; k < n; ++k){
                    if(frames[j] == pages[k]){
                        ar[j] = k;
                        break;
                    }
                }
            }

            for(j = 0; j < nF; ++j){
                if(ar[j] == -1){
                    pos = j;
                    F3 = 1;
                    break;
                }
            }

            if(F3 ==0){
                maximum = ar[0];
                pos = 0;

                for(j = 1; j < nF; ++j){
                    if(ar[j] > maximum){
                        maximum = ar[j];
                        pos = j;
                    }
                }
            }

            frames[pos] = pages[i];
            fault_count++;
        }

        printf("\n");

        for(j = 0; j < nF; ++j){
            printf("%d\t", frames[j]);
        }
    }

    printf("\n\nTotal Page fault_count = %d", fault_count);
    printf("\nMiss ratio = %f",(fault_count/(1.0*n)));
    printf("\nHit ratio = %f",1-(fault_count/(1.0*n)));

    return 0;
}