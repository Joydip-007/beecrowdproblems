#include <stdio.h>
#include <string.h>

#define MAX_WORDS 1000
#define MAX_LEN 71

int main() {
    int N, L, C;
    char word[MAX_WORDS][MAX_LEN];

    while (scanf("%d %d %d", &N, &L, &C) != EOF) {
        for (int i = 0; i < N; i++) {
            scanf("%s", word[i]);
        }

        int line_count = 1;
        int current_line_len = 0;

        for (int i = 0; i < N; i++) {
            int word_len = strlen(word[i]);

            if (current_line_len == 0) {
                current_line_len = word_len;
            } else {
                if (current_line_len + 1 + word_len <= C) {
                    current_line_len += 1 + word_len;
                } else {
                    line_count++;
                    current_line_len = word_len;
                }
            }
        }

        int page_count = (line_count + L - 1) / L;
        printf("%d\n", page_count);
    }

    return 0;
}