#include <iostream>
#include <unordered_map>
#include <queue>
#include <limits>

using namespace std;

unordered_map<char, unordered_map<char, int>> graph = {
    {'A', {{'B', 5}, {'E', 1}, {'C', 6}}},
    {'B', {{'A', 5}, {'F', 1}, {'C', 1}}},
    {'C', {{'A', 6}, {'E', 2}, {'B', 1}, {'D', 3}}},
    {'F', {{'B', 1}, {'D', 3}, {'H', 2}}},
    {'E', {{'A', 1}, {'C', 2}, {'E', 5}}},
    {'D', {{'C', 4}, {'F', 3}, {'H', 5}}},
    {'H', {{'D', 5}, {'F', 2}}}
};

unordered_map<char, int> mesafe_hesapla(unordered_map<char, unordered_map<char, int>> graph, char baslangic_dugumu) {
    unordered_map<char, int> mesafeler;
    for (auto const &pair : graph) {
        mesafeler[pair.first] = numeric_limits<int>::max();
    }
    mesafeler[baslangic_dugumu] = 0;
    priority_queue<pair<int, char>, vector<pair<int, char>>, greater<pair<int, char>>> pq;
    pq.push(make_pair(0, baslangic_dugumu));
    while (!pq.empty()) {
        int mevcut_mesafe = pq.top().first;
        char mevcut_nokta = pq.top().second;
        pq.pop();
        if (mevcut_mesafe > mesafeler[mevcut_nokta]) {
            continue;
        }
        for (auto const &pair : graph[mevcut_nokta]) {
            char komsu = pair.first;
            int weight = pair.second;
            int mesafe = mevcut_mesafe + weight;
            if (mesafe < mesafeler[komsu]) {
                mesafeler[komsu] = mesafe;
                pq.push(make_pair(mesafe, komsu));
            }
        }
    }
    return mesafeler;
}

int main() {
    auto sonuclar = mesafe_hesapla(graph, 'A');
    for (auto const &pair : sonuclar) {
        cout << "En kisa mesafe " << pair.first << " icin: " << pair.second << endl;
    }
    return 0;
}

