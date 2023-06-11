# Containers

# Содержание
1. [Описание проекта](#описание-проекта) 
2. [Сборка проекта]()
3. [Структура проекта](#структура-проекта) \


# Описание проекта
Данный проект представляет собой реализацию контейнеров из стандартной библиотеки шаблонов (STL) на языке C++. В нем реализованы следующие контейнеры:

- `list`: Реализация двусвязного списка. Контейнер предоставляет методы для вставки и удаления элементов в любой позиции списка, а также для доступа к элементам по итератору.
- `map`: Реализация ассоциативного массива, где элементы хранятся в отсортированном порядке по ключу. Контейнер предоставляет методы для вставки, удаления и поиска элементов по ключу. Реализован на основе красно-черного дерева.
- `queue`: Реализация очереди, где элементы добавляются в конец и извлекаются из начала. Контейнер предоставляет методы для добавления и извлечения элементов, а также для получения текущего размера очереди.
- `set`: Реализация множества, где элементы хранятся в отсортированном порядке без повторений. Контейнер предоставляет методы для добавления, удаления и поиска элементов. Реализован на основе красно-черного дерева.
- `multiset`: Реализация мультимножества, аналогичного множеству, но позволяющего хранить повторяющиеся элементы. Контейнер предоставляет методы для добавления, удаления и поиска элементов. Реализован на основе красно-черного дерева.
- `stack`: Реализация стека, где элементы добавляются и извлекаются с одного конца. Контейнер предоставляет методы для добавления и извлечения элементов, а также для получения текущего размера стека.
- `array`: Реализация статического массива фиксированного размера. Контейнер предоставляет методы для доступа к элементам по индексу и для получения текущего размера массива.
- `vector`: Реализация динамического массива, который автоматически изменяет свой размер при добавлении или удалении элементов. Контейнер предоставляет методы для доступа к элементам по индексу, для добавления и удаления элементов, а также для получения текущего размера вектора.

Оформление решения представлено в виде заголовочных файлов для каждого контейнера, например, s21_list.h, s21_map.h и т.д. Каждый заголовочный файл содержит реализацию соответствующего контейнера.

Проект соответствует требованиям:

- Программа разделена на соответствующие классы и функции, реализующие каждый контейнер.
- Используются итераторы для всех контейнеров.
- Реализация классов находится в пространстве имен s21.
- Есть полное покрытие unit-тестами методов контейнерных классов с использованием GTest

Кроме того, проект также включает реализацию итераторов для итерируемых контейнеров. Каждый контейнер предоставляет итераторы, которые позволяют обходить элементы контейнера в определенном порядке.

Отдельно стоит отметить, что контейнеры `map`, `set` и `multiset` реализованы на основе красно-черного дерева. Красно-черное дерево - это сбалансированное двоичное дерево поиска, где каждый узел имеет цвет (красный или черный), а следование определенным правилам цветов обеспечивает балансировку дерева. Это позволяет эффективно выполнять операции вставки, удаления и поиска элементов в контейнерах.

Реализация на основе красно-черного дерева обеспечивает логарифмическую сложность для основных операций, таких как поиск, вставка и удаление элементов, что делает эти контейнеры эффективными для работы с большими объемами данных.

Подробности о реализации итераторов и красно-черного дерева можно найти в соответствующих заголовочных файлах и исходных кодах проекта.

### Сборка проекта

Проект собирается с использованием команды `make`, а для проверки покрытия кода и запуска тестов используется команда `make gcov_report`.

### Структура проекта

<details>
<summary>Структура проекта</summary>

```yaml
├── README.md
└── src
    ├── Makefile
    ├── associative_container
    │   ├── red_black_tree.h
    │   ├── s21_map.h
    │   ├── s21_multiset.h
    │   └── s21_set.h
    ├── container_adaptor
    │   ├── s21_queue.h
    │   └── s21_stack.h
    ├── s21_containers.h
    ├── s21_containersplus.h
    ├── sequence
    │   ├── s21_array.h
    │   ├── s21_list.h
    │   └── s21_vector.h
    └── tests
        ├── tests_array.cc
        ├── tests_list.cc
        ├── tests_map.cc
        ├── tests_multiset.cc
        ├── tests_queue.cc
        ├── tests_set.cc
        ├── tests_stack.cc
        └── tests_vector.cc

```
</details>
