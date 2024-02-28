#!/bin/bash

# Исполняемый файл для unix-подобных систем.
# Меняет текст в текстовом файле и добавляет лог изменений в files.log
# На вход принимаются три переменные: 
# относительный путь вида "~/DIR/src/", текст для замены и текст для вставки
# Пример: ./edit_text_file.sh ./text.txt old-text new-text

path=$1
original_text=$2
new_text=$3

if [ -f $path ] && [ ! -z "$original_text" ] && [ ! -z "$new_text" ]; then
    echo "Введенные данные корректны, начинаю поиск"

    coincidences=$(grep -c $original_text $new_text)
    if [ $coincidences -eq 0 ]; then
        echo "Нет совпадений!"
        exit 1
    fi

    for n in $path;
        do
           sed -i "" "s/$original_text/$new_text/g" $path
        done 
            echo "Данные заменены"
            echo "Начало логирования"

            date=$(date +"%y-%m-%d %T")
            sum=$(shasum -a 256 ~/T02D02-1/src/files.log)

            echo $(stat -f "%N - %z" ~/T02D02-1/src/edit.sh)"b" - $date - $sum - "sha256" >> ~/T02D02-1/src/files.log
            echo "Логи созданы. Операция окончена"
            exit 0
else 
    echo "Вы ввели некорректные входные данные!"
    exit 1
fi




