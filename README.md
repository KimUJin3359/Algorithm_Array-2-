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
  - 변경점을 기준으로 그 다음에 나오는 값들 중 가장 작은 값(4, 5)을 현재의 값과 swap
  - 그 뒤의 숫자들을 작은 순으로 정렬

[2.Previous Permutation](https://github.com/KimUJin3359/Array-2-/blob/master/Previous_permutation/Previous_permutation/main.cpp)
- Permutation에서 현재 순서 전 상태를 찾는 문제
- 접근 방법
  - Next Permutation의 반대로 수행

[3.Ladder](https://github.com/KimUJin3359/Array-2-/tree/master/Ladder1)

[4.Magnetic](https://github.com/KimUJin3359/Array-2-/tree/master/Magnetic)

[5.Sum](https://github.com/KimUJin3359/Array-2-/tree/master/Sum)
