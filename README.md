# Array-2-

### 부분집합 생성
- 집합의 원소가 n개일 때, 공집합을 포함한 부분집합의 개수는 2^n개
- 방법 1. **비트 연산자** 사용
```
for (int i = 0; i < (1 << size); i++)
{
  for (int j = 0; j < size; j++)
  {
    if (1 & (1 << j)
      ...
  }
}
```
- 방법 2. **visited array** 사용

### 비트연산자
- & 비트 단위로 AND 연산
- | 비트 단위로 OR 연산
- << 피연산자의 비트 열을 왼쪽으로 이동
- \>> 피연산자의 비트 열을 오른쪽으로 이동

### 탐색(Search)
- 원하는 자료를 찾는 작업
- **종류**
  - 순차 탐색(sequential search)
    - 배열이나 연결리스트 등 순차구조로 구현된 자료 구조에서 원하는 항목을 찾을 때 유용
    - 정렬되어 있지 않는 경우 : 끝까지 탐색
    - 정렬되어 있는 경우 : 자료를 검사하다가 찾는 값보다 큰 or 작은 값이 나올 경우 탐색 종료
    - O(n)
  - 이진 탐색(binary search)
    - 자료의 가운데에 있는 항목 값과 비교하여 다음 검색의 위치를 결정하여 검색
    - 자료는 정렬된 상태여야 함
  - 해쉬(hash)
  
### 정렬
- 선택 정렬(Selection Sort)
  - 주어진 자료들 중 가장 작은 값의 원소부터 차례대로 선택하여 위치를 교환하는 방식
  - O(n^2)

#### 관련 문제
[1.Next Permutation](https://github.com/KimUJin3359/Array-2-/blob/master/Next_permutation/Next_permutation/main.cpp)
- Permutation에서 현재 순서 다음 상태를 찾는 문제
- 접근방법
  - 2 -> 1 -> 3 -> 5 -> 4 => 2 -> 1 -> 4 -> 3 -> 5
  - 1 -> 2 -> 4 -> 3 -> 5 => 1 -> 2 -> 4 -> 5 -> 3
  - 위의 두 예시에서 알 수 있듯, 가장 마지막으로 증가하는 구간(3 -> 5, 3 -> 5)을 기준으로 잡아야 함
  - 변경점을 기준으로 그 다음에 나오는 값들 중 기준값 보다 크면서 가장 작은 값(4, 5)을 현재의 값과 swap
  - 그 뒤의 숫자들을 작은 순으로 정렬

[2.Previous Permutation](https://github.com/KimUJin3359/Array-2-/blob/master/Previous_permutation/Previous_permutation/main.cpp)
- Permutation에서 현재 순서 전 상태를 찾는 문제
- 접근 방법
  - Next Permutation의 반대로 수행

[3.Ladder](https://github.com/KimUJin3359/Array-2-/tree/master/Ladder1)
- 사다리 타기를 할 때, 어떤 x좌표에서 출발해야 사다리가 2(값)에 도착하게 되는지 찾는 문제
- 접근 방법
  - 시작점 전부를 활용해서 완전탐색을 하는 것보다, 백 트래킹을 사용하는 것이 경우의 수가 작음
- **생각해야 되는 부분**
  - 2차원 배열은 실제로 한 공간에 자리하고 있기 때문에, 우리가 보기에는 2차원일 지라도 실제로는 1차원 배열과 동일함. 그렇기 때문에 갈 수 있는 길인지를 판단할 때 범위를 주지 않는다면 원하지 않는 값이 도출될 수 있음
  
[4.Magnetic](https://github.com/KimUJin3359/Array-2-/tree/master/Magnetic)
- 테이블에 자기장을 걸었을 때, 시간이 흐른 뒤에 자성체들이 서로 충돌하여 테이블에 남아 있는 교착 상태의 개수를 구하는 문제
- 접근방법
  - 위쪽이 N극, 아래쪽이 S극 -> 위에서부터 N극으로 구성된 자성체를1 찾아 그 밑에 있는 S극 자성체가 있을 경우 교착상태로 판단

[5.Sum](https://github.com/KimUJin3359/Array-2-/tree/master/Sum)
- 각 행의 합, 각 열의 합, 각 대각선의 합 중 최댓값을 구하는 문제

