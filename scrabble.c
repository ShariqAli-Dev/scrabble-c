#include <stdio.h>
#include <ctype.h>

const int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
const int MAX_WORD_LENGTH = 16;
const int DEC_A_ASCII = 97;
const int DEC_Z_ASCII = 122;

int compute_score(char word[])
{
    int score = 0;
    for (int i = 0; i < MAX_WORD_LENGTH; i++)
    {
        if (DEC_A_ASCII <= word[i] && word[i] <= DEC_Z_ASCII)
        {
            score += POINTS[word[i] - DEC_A_ASCII];
        }
    }
    return score;
};

int main()
{
    char player_one_word[16], player_two_word[16];

    // get input from both players
    printf("Player 1: ");
    scanf("%s", &player_one_word);
    printf("Player 2: ");
    scanf("%s", &player_two_word);

    // calculate the scores
    int score_1 = compute_score(player_one_word);
    int score_2 = compute_score(player_two_word);

    // determine the winner
    if (score_1 > score_2)
    {
        printf("\nPlayer 1 Wins!(%d points)\n", score_1);
    }
    else
    {
        printf("\nPlayer 2 Wins! (%d points)\n", score_2);
    }

    return 0;
}
