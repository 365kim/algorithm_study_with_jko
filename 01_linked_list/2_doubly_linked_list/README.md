## Doubly Linked List
- 이중 연결리스트
- list 구조체에 head와 tail을 넣어준다
- [참고자료1](https://blog.naver.com/beaqon/221240197476), [참고자료2](https://blog.naver.com/qorengus531/221462245653)

## 리스트생성/삭제
- 새로운 리스트를 할당하고 초기화 시켜준다. 이 때 head와 tail의 값은 0 으로 초기화했다
- 제거시 리스트에 할당된 메모리를 해제해준다. 이 때 각 요소와 목록 모두 해제해야 한다.
- 관련예제 : [리스트생성](./list_init), [리스트제거](./free_list.c)

### 노드생성
- 새로운 노드를 할당하고 초기화 시켜준다. 
- 관련예제 : [노드생성](./create_elem.c)

### 탐색연산
- 관련예제 : [n번째탐색](./list_get.c), [노드수반환](./list_size.c)

### 삽입연산
> 1. 리스트가 비어있는 경우
> 2. 리스트가 비어있지 않은 경우<br>
>  2-1. head에 새 노드를 삽입할 경우<br>
>  2-2. tail에 새 노드를 삽입할 경우<br>
>  2-3. 그 외의 경우
- 전체 노드의 개수가 n인 경우 n - 1에 노드를 추가하는 경우나,  tail에 노드를 삽입한 후 다시 tail의 노드를 삽입해야 하는 경우 등에서는 singly linked list에 비해 doubly linked list일 경우 tail로 접근하여 훨씬 빠르게 연산을 수행할 수 있다.
- 관련예제 : [n번째삽입](./list_add.c) [마지막삽입](./list_add_last.c)

### 삭제연산
> 1. 노드가 하나일 경우
> 2. 노드가 두 개 이상일 경우<br>
>  2-1. head를 삭제할 경우<br>
>  2-2. tail를 삭제할 경우<br>
>  2-3. 그 외의 경우
- 관련예제 : [n번째삭제](./list_remove.c), [전체요소삭제](./list_clear)