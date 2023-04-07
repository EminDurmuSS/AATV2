#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1000000000; // Sonsuzluğu tanımla

// Alfa-beta budama algoritması
int alpha_beta(int depth, int nodeIndex, bool maximizingPlayer, int values[], int alpha, int beta) {
    // En derin seviyeye ulaştıysak, değeri döndür
    if (depth == 0)
        return values[nodeIndex];

    if (maximizingPlayer) {
        int best = -INF;
        for (int i = 0; i < 2; i++) {
            int val = alpha_beta(depth - 1, nodeIndex * 2 + i, false, values, alpha, beta);
            best = max(best, val);
            alpha = max(alpha, best);
            if (beta <= alpha)
                break;
        }
        return best;
    } else {
        int best = INF;
        for (int i = 0; i < 2; i++) {
            int val = alpha_beta(depth - 1, nodeIndex * 2 + i, true, values, alpha, beta);
            best = min(best, val);
            beta = min(beta, best);
            if (beta <= alpha)
                break;
        }
        return best;
    }
}

// Örnek kullanımı
int main() {
    int values[] = { 3, 5, 6, 9, 1, 2, 0, -1 };
    int n = sizeof(values) / sizeof(values[0]);
    int result = alpha_beta(3, 0, true, values, -INF, INF);
    cout << "En iyi değer: " << result << endl;
    return 0;
}