Цель проекта состоит в закреплении базовых знаний программирования на языках Си/C++. 
Суть проекта заключена в моделировании интегрирующей RC-цепи.  
Интегрирующая RC-цепь сглаживает резкие перепады напряжения:
![image](https://user-images.githubusercontent.com/12682015/188418017-a9a74a4a-55f1-49dd-8eef-26cba92ec720.png)

Программа пошагово производит симуляцию приращений заряда на конденсаторе за условный дискрет времени.
Результат симуляции записывается в файлы. При выводе на экран данные читаются из файлов. 
График выводится в консоли (псевдографика). 

Сборка программы и запуск: 
Тестировал на Ununtu 22.04. Перейти в src, ввести команду make. Для компиляции требуется clang.
Исполняемый файл доступен в папке build. 
Для удаления временных файлов ввести команду make clean. 

Работа программы:
Программа работает в интерактивном режиме. 
Нажание управляющих кнопок клавиатуры меняет параметры симуляции.
Переключение между графиками входного и выходного сигналов: 1/2.
Изменение периода входного сигнала - a/z.
Изменение емкости RC-цепи: s/x.
Изменение сопротивления RC-цепи: d/c.

Выход из программы - q. 

Если графики выводят кашу и хаос, растяните терминал на весь экран.
