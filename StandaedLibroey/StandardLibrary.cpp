#include <iostream>
#include<vector>
#include<deque>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <stack>
#include <queue>
int main() {
	//コンテナ
	//シーケンスコンテナ
	//動的配列
	std::vector<int> myVector;
	//二重にリンクされたリスト
	std::initializer_list<int>my_list;
	//両端キュー
	std::deque<int>my_deque;

	//連想コンテナ
	//キーでソートされた一意の要素のコレクション
	std::set<int>my_set;
	//キーでソートされたキーと値のペアのコレクション
	std::map<std::string, int> my_map;

	//未処理の連想コンテナ
	//特定の順序で一意の要素のコレクション
	std::unordered_set<int> my_unodered_set;
	//特定の順序でのキーと値のペアのコレクション
	std::unordered_map<std::string, int>my_unordered_map;

	//コンテナアダプター
	//LIFOデータ構造
	std::stack<int> my_stack;
	//FIFOデータ構造
	std::queue<int>my_queue;
	//ベクトルまたはdequeに基づいてソートされたキュー
	std::priority_queue<int>my_priority_queue;

	//アルゴリズム
	//ベクトルのソート
	std::vector<int> my_vec={4,2,5,1,3};
	std::sort(my_vec.begin(), my_vec.end());

	//反復
	for (auto it = my_vec.begin(); it != my_vec.end(); ++it) {
		std::cout << *it << " ";
	}
}