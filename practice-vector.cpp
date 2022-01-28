#include <iostream>
#include <vector>

// 행렬의 덧셈은 행과 열의 크기가 같은 두 행렬의 같은 행, 같은 열의 값을 서로 더한 결과가 됩니다. 2개의 행렬 arr1과 arr2를 입력받아, 행렬 덧셈의 결과를 반환하는 함수, solution을 완성해주세요.

// 예시1) arr1 : [[1,2],][2,3], arr2 : [[3,4],[5,6]] => 결과 : [[4,6],[7,9]]
// 예시2) arr1 : [[1],[2]], arr2 : [[3],[4]] => 결과 : [[4],[6]]
using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;

    for (int i = 0; i < arr1.size(); i++) {
        vector<int> currRow = arr1[i];
        vector<int> targetRow = arr2[i];

        vector<int> newRow;
        for (int j = 0; j < currRow.size(); j++) {
            newRow.push_back(currRow[j] + targetRow[j]);
        }

        answer.push_back(newRow);
    }


    return answer;
}

int main() {
    vector<vector<int>> arr1{ {1, 2}, {2, 3} };
    vector<vector<int>> arr2{ {3, 4}, {5, 6} };
    // 정답 : [[4,6], [7,9]]

    vector<vector<int>> result = solution(arr1, arr2);

    for (int i = 0; i < result.size(); i++) {
        vector<int> currRow = result[i];
        for (int j = 0; j < currRow.size(); j++) {
            cout << currRow[j] << " ";
        }
        cout << endl;
    }

}


